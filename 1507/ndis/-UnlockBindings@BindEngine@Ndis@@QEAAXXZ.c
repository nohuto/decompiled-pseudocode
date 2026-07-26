/*
 * XREFs of ?UnlockBindings@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A1F14
 * Callers:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A0880 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00A1B74 (-ndisFindAdjacentFilters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAPEAU_NDIS_F.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0 (ndisNotifyBindFailureOnUnboundProtocols.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::UnlockBindings(Ndis::BindEngine *this)
{
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&this->m_lock, 0LL);
}
