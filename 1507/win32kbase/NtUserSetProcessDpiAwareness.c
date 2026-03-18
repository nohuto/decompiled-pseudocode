/*
 * XREFs of NtUserSetProcessDpiAwareness @ 0x1C000CD20
 * Callers:
 *     <none>
 * Callees:
 *     FreeHwndList_0 @ 0x1C0001F68 (FreeHwndList_0.c)
 *     IsBuildHwndListSupported_0 @ 0x1C0002B78 (IsBuildHwndListSupported_0.c)
 *     BuildHwndList_0 @ 0x1C0002B80 (BuildHwndList_0.c)
 *     IsUpdateWindowMonitorSupported_0 @ 0x1C0002B88 (IsUpdateWindowMonitorSupported_0.c)
 *     UpdateWindowMonitor_0 @ 0x1C0002B90 (UpdateWindowMonitor_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwareness(__int64 a1, int a2)
{
  int v3; // r12d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  PVOID v9; // rcx
  __int64 v10; // rbp
  int v11; // ecx
  LARGE_INTEGER v12; // rdi
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // r13
  _QWORD *v23; // r15
  unsigned __int64 v24; // rdi
  int v25; // edx
  unsigned __int64 v26; // rdi
  __int64 v27; // r14
  __int64 v28; // r14
  unsigned __int64 v29; // rdx
  int v30; // r8d
  unsigned __int64 v31; // rdx

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 1;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (__int64 *)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    if ( (unsigned int)IsCurrentProcessDwm() || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( (struct tagTHREADINFO *)v6 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v9 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v6 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v9 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v9, UserRequest, 0, 0, 0LL);
  }
  v10 = PsGetCurrentThreadWin32Thread(v8);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v11) = byte_1C00FEA58 - 1;
      Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v12.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = (struct tagTHREADINFO *)v6;
  v14 = 0LL;
  gbValidateHandleForIL = 1;
  v15 = 0x4000LL;
  v16 = *(_QWORD *)(v6 + 384);
  v17 = 24576LL;
  v18 = 0x2000LL;
  if ( a2 )
  {
    if ( v3 == 1 )
    {
      v19 = *(_DWORD *)(v16 + 776);
      if ( (v19 & 0x4000) != 0 )
      {
        v20 = v19 & 0xFFFFBFFF;
LABEL_31:
        v14 = 1LL;
        *(_DWORD *)(v16 + 776) = v20 | 0x2000;
        goto LABEL_37;
      }
    }
  }
  v20 = *(_DWORD *)(v16 + 776);
  if ( (v20 & 0x6000) == 0 )
  {
    if ( v3 == 1 )
      goto LABEL_31;
    if ( v3 == 2 )
    {
      v14 = 1LL;
      *(_DWORD *)(v16 + 776) = v20 | 0x4000;
    }
  }
  if ( v3 == 1 )
  {
LABEL_37:
    if ( (*(_DWORD *)(v16 + 776) & 0x2000) != 0 )
      goto LABEL_42;
  }
  if ( (v3 != 2 || (*(_DWORD *)(v16 + 776) & 0x4000) == 0) && (v3 || (*(_DWORD *)(v16 + 776) & 0x6000) != 0) )
  {
    v5 = 0;
    goto LABEL_71;
  }
LABEL_42:
  if ( (_DWORD)v14 )
  {
    v21 = *(_QWORD *)(v16 + 640);
    if ( v21 )
      goto LABEL_67;
    v21 = 0LL;
    while ( v21 )
    {
      if ( (int)IsBuildHwndListSupported_0() < 0 )
        v22 = 0LL;
      else
        v22 = BuildHwndList_0();
      if ( v22 )
      {
        v23 = (_QWORD *)(v22 + 32);
        v24 = *(_QWORD *)(v22 + 32);
        if ( v24 != 1 )
        {
          do
          {
            PsGetThreadWin32Thread(KeGetCurrentThread());
            v25 = (unsigned __int16)v24;
            if ( (unsigned __int64)(unsigned __int16)v24 < *((_QWORD *)gpsi + 1) )
            {
              v26 = v24 >> 16;
              v27 = qword_1C01003E8 + (unsigned int)(dword_1C01003F0 * v25);
              if ( ((_WORD)v26 == *(_WORD *)(v27 + 18)
                 || (_WORD)v26 == 0xFFFF
                 || !(_WORD)v26 && PsGetCurrentProcessWow64Process())
                && (*(_BYTE *)(v27 + 17) & 1) == 0
                && *(_BYTE *)(v27 + 16) == 1 )
              {
                v28 = *(_QWORD *)v27;
                if ( v28 )
                {
                  if ( (int)IsUpdateWindowMonitorSupported_0() >= 0 && *(_QWORD *)(*(_QWORD *)(v28 + 16) + 384LL) == v16 )
                  {
                    v29 = *(_QWORD *)(v28 + 352);
                    *(_DWORD *)(v28 + 344) = v3;
                    v30 = (unsigned __int16)v29;
                    *(_DWORD *)(v28 + 288) ^= (*(_DWORD *)(v28 + 288) ^ ((v3 <= 0) << 7)) & 0x80;
                    if ( (unsigned __int64)(unsigned __int16)v29 < *((_QWORD *)gpsi + 1) )
                    {
                      v31 = v29 >> 16;
                      if ( (_WORD)v31 != *(_WORD *)(qword_1C01003E8 + (unsigned int)(dword_1C01003F0 * v30) + 18)
                        && !(_WORD)v31 )
                      {
                        PsGetCurrentProcessWow64Process();
                      }
                    }
                    UpdateWindowMonitor_0();
                  }
                }
              }
            }
            v24 = *++v23;
          }
          while ( *v23 != 1LL );
        }
        FreeHwndList_0();
LABEL_67:
        v21 = *(_QWORD *)(v21 + 16);
      }
    }
  }
LABEL_71:
  UserSessionSwitchLeaveCrit(v14, v15, v18, v17);
  return v5;
}
