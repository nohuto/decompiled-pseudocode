/*
 * XREFs of ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A29A4
 * Callers:
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00A28B0 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00A6800 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A83A4 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::UnlockBindings(Ndis::BindEngine *this)
{
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&this->m_lock, 0LL);
}
