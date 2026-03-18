/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00871CC
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00871A8 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     GreDeviceIoControlEx @ 0x1C005FB00 (GreDeviceIoControlEx.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

_UNKNOWN **__fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rcx
  unsigned int v11; // esi
  PDEVICE_OBJECT *v12; // r14
  wchar_t *v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rdx
  struct _DEVICE_OBJECT *v16; // rcx
  wchar_t *i; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rcx
  PDEVICE_OBJECT *v24; // rbx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // ecx
  LARGE_INTEGER v37; // rbx
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int InputBuffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v44; // [rsp+48h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v46; // [rsp+88h] [rbp+10h] BYREF

  result = &retaddr;
  v5 = a2;
  InputBuffer = a2;
  v44 = a4;
  if ( gProtocolType )
    return result;
  v8 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v5;
  WdLogEvent5_WdTrace(v8);
  if ( !a3 )
  {
    v10 = gpGraphicsDeviceList;
    v11 = 0;
    while ( v10 )
    {
      if ( (*((_DWORD *)v10 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v10 + 18) == a1) )
        ++v11;
      v10 = (wchar_t *)*((_QWORD *)v10 + 16);
    }
    v12 = (PDEVICE_OBJECT *)PALLOCMEM2(16 * v11, 1886221383LL, 1);
    if ( v12 )
    {
      v13 = gpGraphicsDeviceList;
      v14 = 0;
      while ( v13 )
      {
        if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)v13 + 18) == a1) )
        {
          v15 = 2LL * v14;
          v12[v15] = (PDEVICE_OBJECT)*((_QWORD *)v13 + 17);
          v16 = (struct _DEVICE_OBJECT *)*((_QWORD *)v13 + 30);
          v12[v15 + 1] = v16;
          ObfReferenceObject(v16);
          ++v14;
        }
        v13 = (wchar_t *)*((_QWORD *)v13 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit();
      if ( v11 )
      {
        v24 = v12;
        v25 = v11;
        do
        {
          v26 = GreDeviceIoControlEx(*v24, 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v46, 1u);
          v31 = v26;
          if ( v26 < 0 )
          {
            v40 = WdLogNewEntry5_WdError(v28, v27, v29, v30);
            *(_QWORD *)(v40 + 24) = *v24;
            *(_QWORD *)(v40 + 32) = v31;
            WdLogEvent5_WdError(v40);
          }
          ObfDereferenceObject(v24[1]);
          v24 += 2;
          --v25;
        }
        while ( v25 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v33 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v35 = PsGetCurrentThreadWin32Thread(v34);
      if ( v35 )
      {
        v37 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v35 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v36) = byte_1C0118B28 - 1;
          Template_xqx(
            v36,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v38,
            v37.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v37.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v38,
            0,
            1000 * v37.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v35 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v33;
      gbValidateHandleForIL = 1;
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      return (_UNKNOWN **)Win32FreePool();
    }
    v41 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v41 + 24) = v11;
    WdLogEvent5_WdLowResource(v41);
  }
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x800000) != 0 && (!a1 || *((_QWORD *)i + 18) == a1) )
    {
      v18 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)i + 17), 0x23200Fu, &InputBuffer, 0x10u, 0LL, 0, &v46, 1u);
      v22 = v18;
      if ( v18 < 0 )
      {
        v42 = WdLogNewEntry5_WdError(v9, v19, v20, v21);
        *(_QWORD *)(v42 + 24) = i;
        *(_QWORD *)(v42 + 32) = v22;
        WdLogEvent5_WdError(v42);
      }
    }
  }
  v39 = WdLogNewEntry5_WdTrace(v9);
  return (_UNKNOWN **)WdLogEvent5_WdTrace(v39);
}
