/*
 * XREFs of GreLockVisRgn @ 0x1C0025520
 * Callers:
 *     DelayedDestroyCacheDC @ 0x1C000F4CC (DelayedDestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     DestroyMonitorDCs @ 0x1C0054CC0 (DestroyMonitorDCs.c)
 *     UserGetMonitorDC @ 0x1C0054ECC (UserGetMonitorDC.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     DestroyCacheDCEntries @ 0x1C005C710 (DestroyCacheDCEntries.c)
 *     GreSuspendDirectDraw @ 0x1C0065420 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C006596C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00659E0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0075F70 (GreLockVisRgnSharedOrExclusive.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx

  if ( ghsemDynamicModeChange )
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockAcquireShared);
  }
  v4 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
    LODWORD(v4) = (_DWORD)ghsemGreLock;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pqz(a1, a2, a3, (_DWORD)v4, 2, (__int64)L"ghsemGreLock");
  }
  v5 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    LODWORD(v5) = (_DWORD)ghsemDCVisRgn;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pqz(a1, a2, a3, (_DWORD)v5, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
