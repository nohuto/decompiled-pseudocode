/*
 * XREFs of GreGetDCPoint @ 0x1C0054BF0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1C0054B70 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1C00693B0 (GreGetDCOrg.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin_0 @ 0x1C00015D0 (UserGetRedirectedWindowOrigin_0.c)
 *     IsGreGetAspectRatioFilterSupported_0 @ 0x1C0001908 (IsGreGetAspectRatioFilterSupported_0.c)
 *     GreGetAspectRatioFilter_0 @ 0x1C0001910 (GreGetAspectRatioFilter_0.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C003DA74 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     UserIsUserCritSecIn @ 0x1C00456E0 (UserIsUserCritSecIn.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B5598 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int AspectRatioFilter_0; // esi
  DC *v6; // r8
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v17; // rdi
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID v21; // rcx
  __int64 v22; // rbp
  int v23; // ecx
  LARGE_INTEGER v24; // rdi
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rcx
  DC *v29[6]; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+98h] [rbp+20h]
  int v31; // [rsp+9Ch] [rbp+24h]

  AspectRatioFilter_0 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  v6 = v29[0];
  if ( !v29[0] )
    goto LABEL_53;
  v7 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v7 )
  {
    v27 = *((_QWORD *)v29[0] + 10);
    if ( (*(_DWORD *)(v27 + 352) & 0x4000) != 0 && *(_DWORD *)(v27 + 308) == 7 )
    {
      DC::vMakeIso(v29[0]);
      v6 = v29[0];
    }
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 344LL);
    goto LABEL_54;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v26 = *(_QWORD *)(*((_QWORD *)v29[0] + 10) + 328LL);
LABEL_47:
    *(_QWORD *)a3 = v26;
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 10) + 312LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_54;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    v26 = *(_QWORD *)(*((_QWORD *)v29[0] + 10) + 336LL);
    goto LABEL_47;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v29[0] + 10) + 320LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v6 + 10) + 316LL);
    goto LABEL_54;
  }
  v11 = v10 - 8;
  if ( !v11 )
  {
    if ( (int)IsGreGetAspectRatioFilterSupported_0() >= 0 )
      AspectRatioFilter_0 = GreGetAspectRatioFilter_0();
    goto LABEL_54;
  }
  if ( v11 != 16 )
  {
LABEL_53:
    AspectRatioFilter_0 = 0;
    goto LABEL_54;
  }
  *(_QWORD *)a3 = *(_QWORD *)DC::eptlOrigin(v29[0]);
  if ( v13 && (*(_DWORD *)(v12 + 36) & 0x4000) != 0 )
  {
    if ( (unsigned int)UserIsUserCritSecIn() )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v17 = 0LL;
      while ( 1 )
      {
        v18 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceShared(gpresUser);
        if ( v18 )
          v17 = *v18;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v17 == gptiRit )
            break;
          _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v21 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v17 == gptiRit )
            break;
          _InterlockedAdd(&gcDITHitTestWaiters, 1u);
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v21 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v21, UserRequest, 0, 0, 0LL);
      }
      v22 = PsGetCurrentThreadWin32Thread(v20);
      if ( v22 )
      {
        v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v23) = byte_1C00FEA58 - 1;
          Template_xqx(v23, (unsigned int)&AcquiredSharedUserCritEvent, v25, v24.LowPart, 0, gullUserCritAcquireToken);
        }
        if ( v24.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v25,
            0,
            1000 * v24.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    if ( (unsigned int)UserGetRedirectedWindowOrigin_0() )
    {
      *(_DWORD *)a3 += v30;
      *(_DWORD *)(a3 + 4) += v31;
    }
    if ( v15 )
      UserSessionSwitchLeaveCrit();
  }
LABEL_54:
  DCOBJ::~DCOBJ((DCOBJ *)v29);
  return AspectRatioFilter_0;
}
