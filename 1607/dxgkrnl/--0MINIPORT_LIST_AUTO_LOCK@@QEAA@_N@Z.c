/*
 * XREFs of ??0MINIPORT_LIST_AUTO_LOCK@@QEAA@_N@Z @ 0x1C000EB0C
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DF204 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C0197174 (DpiMiracastFindDisplayAdapterFdo.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C019A944 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000EB34 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 */

MINIPORT_LIST_AUTO_LOCK *__fastcall MINIPORT_LIST_AUTO_LOCK::MINIPORT_LIST_AUTO_LOCK(MINIPORT_LIST_AUTO_LOCK *this)
{
  *(_BYTE *)this = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    *(_BYTE *)this = 1;
  }
  return this;
}
