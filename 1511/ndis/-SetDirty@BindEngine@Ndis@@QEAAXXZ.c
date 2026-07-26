/*
 * XREFs of ?SetDirty@BindEngine@Ndis@@QEAAXXZ @ 0x1C00AE54C
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001EBD4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Ndis::BindEngine::SetDirty(Ndis::BindEngine *this)
{
  this->m_isDirty = 1;
}
