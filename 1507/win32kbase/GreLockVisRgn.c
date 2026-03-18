/*
 * XREFs of GreLockVisRgn @ 0x1C0036AA0
 * Callers:
 *     DestroyMonitorDCs @ 0x1C000AF60 (DestroyMonitorDCs.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0031698 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0033390 (GreLockVisRgnSharedOrExclusive.c)
 *     NtUserGetDC @ 0x1C0033CE0 (NtUserGetDC.c)
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
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, __int64 a3)
{
  PERESOURCE v3; // r9
  __int64 result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v3 = ghsemDynamicModeChange;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockAcquireShared, a3, v3);
  }
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    LODWORD(v5) = (_DWORD)ghsemGreLock;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pqz(a1, a2, a3, (_DWORD)v5, 2, (__int64)L"ghsemGreLock");
  }
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
    LODWORD(v6) = (_DWORD)ghsemDCVisRgn;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pqz(a1, a2, a3, (_DWORD)v6, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
