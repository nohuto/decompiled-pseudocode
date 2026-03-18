/*
 * XREFs of GreUnlockVisRgn @ 0x1C00255C0
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C000F4CC (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     DestroyMonitorDCs @ 0x1C0054CC0 (DestroyMonitorDCs.c)
 *     UserGetMonitorDC @ 0x1C0054ECC (UserGetMonitorDC.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C005C710 (DestroyCacheDCEntries.c)
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C006596C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall GreUnlockVisRgn(__int64 a1)
{
  PERESOURCE v1; // rcx
  __int64 v2; // rcx
  __int64 result; // rax
  PERESOURCE v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockRelease);
  }
  v1 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    result = PsLeavePriorityRegion(v2);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(v1, &LockRelease);
  }
  v4 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    result = PsLeavePriorityRegion(v5);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(v4, &LockRelease);
  }
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
