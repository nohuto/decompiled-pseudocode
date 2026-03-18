/*
 * XREFs of GreLockVisRgn @ 0x1C0044600
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00379B0 (GreLockVisRgnSharedOrExclusive.c)
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
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
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
      result = Template_pz(a1, &LockAcquireShared, a3, v3, L"ghsemDynamicModeChange");
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
