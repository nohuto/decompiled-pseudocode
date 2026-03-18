/*
 * XREFs of DrvWaitForMonitorProcessing @ 0x1C0088840
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     GreDeviceIoControlEx @ 0x1C005FB00 (GreDeviceIoControlEx.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall DrvWaitForMonitorProcessing(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  PDEVICE_OBJECT *v4; // rbp
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _DEVICE_OBJECT *v9; // rcx
  PDEVICE_OBJECT *v10; // rbx
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // ecx
  LARGE_INTEGER v17; // rbx
  int v18; // r8d
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( gProtocolType )
    return 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = (PDEVICE_OBJECT *)PALLOCMEM2((unsigned int)(16 * *(_DWORD *)(a1 + 20)), 1886221383LL, 1);
  if ( !v4 )
    return 3221225495LL;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 20) )
  {
    do
    {
      v6 = *(_QWORD *)(32 * (v5 + 1LL) + a1);
      v7 = *(_QWORD *)(v6 + 2600);
      if ( (*(_DWORD *)(v7 + 160) & 0x800000) != 0 )
      {
        v8 = 2LL * (unsigned int)v3;
        v4[v8] = *(PDEVICE_OBJECT *)(v7 + 136);
        v9 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v6 + 2600) + 240LL);
        v4[v8 + 1] = v9;
        ObfReferenceObject(v9);
        v3 = (unsigned int)(v3 + 1);
      }
      ++v5;
    }
    while ( v5 < *(_DWORD *)(a1 + 20) );
    if ( (_DWORD)v3 )
    {
      UserSessionSwitchLeaveCrit();
      v10 = v4;
      do
      {
        v2 = GreDeviceIoControlEx(*v10, 0x232037u, 0LL, 0, 0LL, 0, &v20, 1u);
        ObfDereferenceObject(v10[1]);
        v10 += 2;
        --v3;
      }
      while ( v3 );
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v11);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v15 = PsGetCurrentThreadWin32Thread(v14);
      if ( v15 )
      {
        v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v16) = byte_1C0118B28 - 1;
          Template_xqx(
            v16,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v18,
            v17.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v17.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v18,
            0,
            1000 * v17.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
    }
  }
  Win32FreePool();
  return v2;
}
