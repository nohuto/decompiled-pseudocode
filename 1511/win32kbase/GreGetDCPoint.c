/*
 * XREFs of GreGetDCPoint @ 0x1C00422D0
 * Callers:
 *     GreGetDCOrgEx @ 0x1C0042250 (GreGetDCOrgEx.c)
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrg @ 0x1C007B850 (GreGetDCOrg.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin_0 @ 0x1C0001570 (UserGetRedirectedWindowOrigin_0.c)
 *     IsGreGetAspectRatioFilterSupported_0 @ 0x1C0001918 (IsGreGetAspectRatioFilterSupported_0.c)
 *     GreGetAspectRatioFilter_0 @ 0x1C0001920 (GreGetAspectRatioFilter_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002D734 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     UserIsUserCritSecIn @ 0x1C00374B0 (UserIsUserCritSecIn.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B7BC8 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int AspectRatioFilter_0; // ebp
  DC *v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  int v12; // edx
  __int64 v14; // rcx
  int v15; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v17; // rcx
  __int64 v18; // r14
  int v19; // ecx
  LARGE_INTEGER v20; // rdi
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  DC *v26; // [rsp+30h] [rbp-28h] BYREF
  int v27; // [rsp+38h] [rbp-20h]
  int v28; // [rsp+3Ch] [rbp-1Ch]
  int v29; // [rsp+78h] [rbp+20h]
  int v30; // [rsp+7Ch] [rbp+24h]

  v27 = 0;
  v28 = 0;
  AspectRatioFilter_0 = 1;
  XDCOBJ::vLock((XDCOBJ *)&v26, a1);
  v6 = v26;
  if ( !v26 )
    return 0;
  v7 = (a2 & 0xFFFFFFBF) - 1;
  if ( !v7 )
  {
    v25 = *((_QWORD *)v26 + 10);
    if ( (*(_DWORD *)(v25 + 352) & 0x4000) != 0 && *(_DWORD *)(v25 + 308) == 7 )
      DC::vMakeIso(v26);
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 344LL);
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v26 + 10) + 328LL);
LABEL_24:
    *(_QWORD *)a3 = v24;
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 10) + 312LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
    goto LABEL_10;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v26 + 10) + 336LL);
    goto LABEL_24;
  }
  v10 = v9 - 4;
  if ( v10 )
  {
    v11 = v10 - 8;
    if ( v11 )
    {
      if ( v11 == 16 )
      {
        *(_QWORD *)a3 = *(_QWORD *)DC::eptlOrigin(v26);
        if ( v12 && (*((_DWORD *)v6 + 9) & 0x4000) != 0 )
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
            EnterSharedCritAvoidingDitHitTestHazard(0LL, 1LL);
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
                  (unsigned int)&AcquiredSharedUserCritEvent,
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
                  (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                  v21,
                  0,
                  1000 * v20.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v18 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
          }
          if ( (unsigned int)UserGetRedirectedWindowOrigin_0() )
          {
            *(_DWORD *)a3 += v29;
            *(_DWORD *)(a3 + 4) += v30;
          }
          if ( v15 )
            UserSessionSwitchLeaveCrit(v23, v22);
        }
      }
      else
      {
        AspectRatioFilter_0 = 0;
      }
    }
    else if ( (int)IsGreGetAspectRatioFilterSupported_0() >= 0 )
    {
      AspectRatioFilter_0 = GreGetAspectRatioFilter_0();
    }
  }
  else
  {
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v26 + 10) + 320LL);
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v6 + 10) + 316LL);
  }
LABEL_10:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v26);
  _InterlockedDecrement((volatile signed __int32 *)v26 + 3);
  return AspectRatioFilter_0;
}
