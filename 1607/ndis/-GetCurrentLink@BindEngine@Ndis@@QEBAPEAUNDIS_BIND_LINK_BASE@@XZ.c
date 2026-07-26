/*
 * XREFs of ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C009C1D0
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     NdisCloseAdapter @ 0x1C00EC1F0 (NdisCloseAdapter.c)
 * Callees:
 *     <none>
 */

struct NDIS_BIND_LINK_BASE *__fastcall Ndis::BindEngine::GetCurrentLink(Ndis::BindEngine *this)
{
  return this->m_currentOperation;
}
