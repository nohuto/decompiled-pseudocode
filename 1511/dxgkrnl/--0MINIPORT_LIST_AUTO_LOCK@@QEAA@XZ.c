/*
 * XREFs of ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000D0F8
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00C94C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C016D9B4 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000D124 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 */

MINIPORT_LIST_AUTO_LOCK *__fastcall MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK(MINIPORT_LIST_AUTO_LOCK *this)
{
  *(_DWORD *)this = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    *(_DWORD *)this = 1;
  }
  return this;
}
