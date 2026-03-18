/*
 * XREFs of ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@XZ @ 0x1C000AA00
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00B40C4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0169234 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000AA2C (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
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
