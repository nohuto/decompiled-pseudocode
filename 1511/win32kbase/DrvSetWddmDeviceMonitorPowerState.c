/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00857D4
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00857B0 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreDeviceIoControlEx @ 0x1C0061C70 (GreDeviceIoControlEx.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  wchar_t *v8; // rcx
  unsigned int v9; // esi
  PDEVICE_OBJECT *v10; // r14
  wchar_t *v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  PDEVICE_OBJECT *v18; // rbx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // ecx
  LARGE_INTEGER v32; // rbx
  int v33; // r8d
  __int64 v34; // rax
  wchar_t *i; // rbx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  int InputBuffer; // [rsp+78h] [rbp+10h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  InputBuffer = a2;
  if ( gProtocolType )
    return;
  v6 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v3;
  WdLogEvent5_WdTrace(v6);
  if ( !a3 )
  {
    v8 = gpGraphicsDeviceList;
    v9 = 0;
    while ( v8 )
    {
      if ( (*((_DWORD *)v8 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v8 + 18) == a1) )
        ++v9;
      v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    }
    v10 = (PDEVICE_OBJECT *)PALLOCMEM2(16 * v9, 1886221383LL, 1);
    if ( v10 )
    {
      v11 = gpGraphicsDeviceList;
      v12 = 0;
      while ( v11 )
      {
        if ( (*((_DWORD *)v11 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v11 + 18) == a1) )
        {
          v13 = 2LL * v12;
          v10[v13] = (PDEVICE_OBJECT)*((_QWORD *)v11 + 17);
          v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)v11 + 30);
          v10[v13 + 1] = v14;
          ObfReferenceObject(v14);
          ++v12;
        }
        v11 = (wchar_t *)*((_QWORD *)v11 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v16, v15);
      if ( v9 )
      {
        v18 = v10;
        v19 = v9;
        do
        {
          v20 = GreDeviceIoControlEx(*v18, 0x23200Fu, &InputBuffer, 4u, 0LL, 0, &v44, 1u);
          v25 = v20;
          if ( v20 < 0 )
          {
            v26 = WdLogNewEntry5_WdError(v22, v21, v23, v24);
            *(_QWORD *)(v26 + 24) = *v18;
            *(_QWORD *)(v26 + 32) = v25;
            WdLogEvent5_WdError(v26);
          }
          ObfDereferenceObject(v18[1]);
          v18 += 2;
          --v19;
        }
        while ( v19 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v28 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v30 = PsGetCurrentThreadWin32Thread(v29);
      if ( v30 )
      {
        v32 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v30 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v31) = byte_1C01020C8 - 1;
          Template_xqx(
            v31,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v33,
            v32.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v32.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v33,
            0,
            1000 * v32.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v30 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v28;
      gbValidateHandleForIL = 1;
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool();
      return;
    }
    v34 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v34 + 24) = v9;
    WdLogEvent5_WdLowResource(v34);
  }
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)i + 18) == a1) )
    {
      v36 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)i + 17), 0x23200Fu, &InputBuffer, 4u, 0LL, 0, &v44, 1u);
      v40 = v36;
      if ( v36 < 0 )
      {
        v41 = WdLogNewEntry5_WdError(v7, v37, v38, v39);
        *(_QWORD *)(v41 + 24) = i;
        *(_QWORD *)(v41 + 32) = v40;
        WdLogEvent5_WdError(v41);
      }
    }
  }
  v42 = WdLogNewEntry5_WdTrace(v7);
  WdLogEvent5_WdTrace(v42);
}
