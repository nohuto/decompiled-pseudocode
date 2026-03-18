/*
 * XREFs of DrvWaitForMonitorProcessing @ 0x1C006FAD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall DrvWaitForMonitorProcessing(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rdi
  PDEVICE_OBJECT *v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _DEVICE_OBJECT *v10; // rcx
  PDEVICE_OBJECT *v11; // rbx
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID v18; // rcx
  __int64 v19; // rsi
  int v20; // ecx
  LARGE_INTEGER v21; // rdi
  int v22; // r8d
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( gProtocolType )
    return 0LL;
  if ( !a1 )
    return 3221225485LL;
  v5 = (PDEVICE_OBJECT *)PALLOCMEM2((unsigned int)(16 * *(_DWORD *)(a1 + 20)), 1886221383LL, 1);
  if ( !v5 )
    return 3221225495LL;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 20) )
  {
    do
    {
      v7 = *(_QWORD *)(32 * (v6 + 1LL) + a1);
      v8 = *(_QWORD *)(v7 + 2600);
      if ( (*(_DWORD *)(v8 + 160) & 0x800000) != 0 )
      {
        v9 = 2LL * (unsigned int)v3;
        v5[v9] = *(PDEVICE_OBJECT *)(v8 + 136);
        v10 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(v7 + 2600) + 240LL);
        v5[v9 + 1] = v10;
        ObfReferenceObject(v10);
        v3 = (unsigned int)(v3 + 1);
      }
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a1 + 20) );
    if ( (_DWORD)v3 )
    {
      UserSessionSwitchLeaveCrit();
      v11 = v5;
      do
      {
        v2 = GreDeviceIoControlEx(*v11, 0x232037u, 0LL, 0, 0LL, 0, &v23, 1u);
        ObfDereferenceObject(v11[1]);
        v11 += 2;
        --v3;
      }
      while ( v3 );
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v15 )
          v14 = *v15;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v14 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v18 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v14 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v18 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
      }
      v19 = PsGetCurrentThreadWin32Thread(v17);
      if ( v19 )
      {
        v21 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v20) = byte_1C00FEA58 - 1;
          Template_xqx(
            v20,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v22,
            v21.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v21.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v22,
            0,
            1000 * v21.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v19 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v14;
      gbValidateHandleForIL = 1;
    }
  }
  Win32FreePool();
  return v2;
}
