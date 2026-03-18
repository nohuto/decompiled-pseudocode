/*
 * XREFs of GreUnlockVisRgn @ 0x1C0038810
 * Callers:
 *     DestroyMonitorDCs @ 0x1C000AF60 (DestroyMonitorDCs.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0031698 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     NtUserGetDC @ 0x1C0033CE0 (NtUserGetDC.c)
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     DestroyCacheDCEntries @ 0x1C00502A4 (DestroyCacheDCEntries.c)
 *     xxxUserProcessCallout @ 0x1C0051410 (xxxUserProcessCallout.c)
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C0053DE0 (UserGetMonitorDC.c)
 *     DelayedDestroyCacheDC @ 0x1C005AB48 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     GreSuspendDirectDraw @ 0x1C0060EE0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0061054 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
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
      result = Template_pz(a1, &LockRelease, a3, ghsemDCVisRgn);
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
      result = Template_pz(v3, &LockRelease, a3, ghsemGreLock);
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
      result = Template_pz(v6, &LockRelease, a3, ghsemDynamicModeChange);
  }
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v8);
  }
  return result;
}
