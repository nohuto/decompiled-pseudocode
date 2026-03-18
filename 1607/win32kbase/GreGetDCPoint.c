/*
 * XREFs of GreGetDCPoint @ 0x1C0075BA0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C0075B10 (GreGetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C0075B20 (GreGetDCOrgEx.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin_0 @ 0x1C00015E0 (UserGetRedirectedWindowOrigin_0.c)
 *     IsGreGetAspectRatioFilterSupported_0 @ 0x1C0001918 (IsGreGetAspectRatioFilterSupported_0.c)
 *     GreGetAspectRatioFilter_0 @ 0x1C0001920 (GreGetAspectRatioFilter_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     UserIsUserCritSecIn @ 0x1C001D810 (UserIsUserCritSecIn.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002C700 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00B1640 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C30E0 (-vMakeIso@DC@@QEAAXXZ.c)
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
  __int64 v19; // rcx
  PRKSEMAPHORE v20; // rcx
  __int64 v21; // rbp
  int v22; // ecx
  LARGE_INTEGER v23; // rdi
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rcx
  DC *v28[6]; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+98h] [rbp+20h]
  int v30; // [rsp+9Ch] [rbp+24h]

  AspectRatioFilter_0 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v6 = v28[0];
  if ( !v28[0] )
    goto LABEL_53;
  v7 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v7 )
  {
    v26 = *((_QWORD *)v28[0] + 10);
    if ( (*(_DWORD *)(v26 + 352) & 0x4000) != 0 && *(_DWORD *)(v26 + 308) == 7 )
    {
      DC::vMakeIso(v28[0]);
      v6 = v28[0];
    }
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 344LL);
    goto LABEL_54;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v25 = *(_QWORD *)(*((_QWORD *)v28[0] + 10) + 328LL);
LABEL_47:
    *(_QWORD *)a3 = v25;
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 10) + 312LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_54;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    v25 = *(_QWORD *)(*((_QWORD *)v28[0] + 10) + 336LL);
    goto LABEL_47;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v28[0] + 10) + 320LL);
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
  *(_QWORD *)a3 = *(_QWORD *)DC::eptlOrigin(v28[0]);
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
        v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
        if ( v18 )
          v17 = *v18;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess(v19) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v17 == gptiRit )
            break;
          _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          v20 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v17 == gptiRit )
            break;
          _InterlockedAdd(&gcDITHitTestWaiters, 1u);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          v20 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v20, UserRequest, 0, 0, 0LL);
      }
      v21 = PsGetCurrentThreadWin32Thread(v19);
      if ( v21 )
      {
        v23 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v21 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v22) = byte_1C0118B28 - 1;
          Template_xqx(v22, (unsigned int)&AcquiredSharedUserCritEvent, v24, v23.LowPart, 0, gullUserCritAcquireToken);
        }
        if ( v23.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
            v24,
            0,
            1000 * v23.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v21 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
    }
    if ( (unsigned int)UserGetRedirectedWindowOrigin_0() )
    {
      *(_DWORD *)a3 += v29;
      *(_DWORD *)(a3 + 4) += v30;
    }
    if ( v15 )
      UserSessionSwitchLeaveCrit();
  }
LABEL_54:
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  return AspectRatioFilter_0;
}
