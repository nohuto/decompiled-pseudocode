/*
 * XREFs of DrvWaitForMonitorProcessing @ 0x1C0087720
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreDeviceIoControlEx @ 0x1C0061C70 (GreDeviceIoControlEx.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall DrvWaitForMonitorProcessing(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  PDEVICE_OBJECT *v7; // rbp
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  PDEVICE_OBJECT *v13; // rbx
  __int64 v14; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // ecx
  LARGE_INTEGER v20; // rbx
  int v21; // r8d
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( gProtocolType )
    return 0LL;
  if ( !a1 )
    return 3221225485LL;
  v7 = (PDEVICE_OBJECT *)PALLOCMEM2((unsigned int)(16 * *(_DWORD *)(a1 + 20)), 1886221383LL, 1);
  if ( !v7 )
    return 3221225495LL;
  v8 = 0;
  if ( *(_DWORD *)(a1 + 20) )
  {
    do
    {
      v9 = *(_QWORD *)(32 * (v8 + 1LL) + a1);
      v10 = *(_QWORD *)(v9 + 2600);
      if ( (*(_DWORD *)(v10 + 160) & 0x800000) != 0 )
      {
        v11 = 2LL * (unsigned int)v3;
        v7[v11] = *(PDEVICE_OBJECT *)(v10 + 136);
        v12 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v9 + 2600) + 240LL);
        v7[v11 + 1] = v12;
        ObfReferenceObject(v12);
        v3 = (unsigned int)(v3 + 1);
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(a1 + 20) );
    if ( (_DWORD)v3 )
    {
      UserSessionSwitchLeaveCrit(v6, v5);
      v13 = v7;
      do
      {
        v2 = GreDeviceIoControlEx(*v13, 0x232037u, 0LL, 0, 0LL, 0, &v22, 1u);
        ObfDereferenceObject(v13[1]);
        v13 += 2;
        --v3;
      }
      while ( v3 );
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v18 = PsGetCurrentThreadWin32Thread(v17);
      if ( v18 )
      {
        v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v18 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v19) = byte_1C01020C8 - 1;
          Template_xqx(
            v19,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v21,
            v20.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v21,
            0,
            1000 * v20.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v18 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v16;
      gbValidateHandleForIL = 1;
    }
  }
  Win32FreePool();
  return v2;
}
