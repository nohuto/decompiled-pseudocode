/*
 * XREFs of GreUnlockVisRgn @ 0x1C00439F0
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C0042170 (DestroyCacheDCEntries.c)
 *     NtUserGetDC @ 0x1C0042DC0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C0043940 (UserGetMonitorDC.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0045758 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 *     DelayedDestroyCacheDC @ 0x1C006A5AC (DelayedDestroyCacheDC.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C006BF80 (DestroyMonitorDCs.c)
 *     GreSuspendDirectDraw @ 0x1C0078370 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00784E4 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall GreUnlockVisRgn(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  PERESOURCE v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockRelease, a3, ghsemDCVisRgn, L"ghsemDCVisRgn");
  }
  v3 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    result = PsLeavePriorityRegion(v4);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(v3, &LockRelease, a3, ghsemGreLock, L"ghsemGreLock");
  }
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    result = PsLeavePriorityRegion(v7);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(v6, &LockRelease, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  }
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v8);
  }
  return result;
}
