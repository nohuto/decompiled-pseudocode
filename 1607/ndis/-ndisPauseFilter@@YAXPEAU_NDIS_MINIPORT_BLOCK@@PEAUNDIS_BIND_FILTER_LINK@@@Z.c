/*
 * XREFs of ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00A3D18
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF__guid_Dq @ 0x1C006FC50 (WPP_SF__guid_Dq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00A6C38 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00E7430 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 */

void __fastcall ndisPauseFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 v4; // rdx
  struct _NDIS_FILTER_BLOCK *BindContext; // rsi
  Ndis::BindEngine *p_BindEngine; // rdi
  unsigned int v7; // edx
  __int64 v8; // rdx

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF__guid_Dq(0xDu, *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 104) + 40LL, a2->FilterIndex, *(_QWORD *)(v4 + 16));
  ndisReferencePackage((__int64)&ndisPkgs);
  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  a2->BindState.NeedsPauseAction = 0;
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  ndisPauseFilterInner(BindContext, v7);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF__guid_Dq(0xEu, v8, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  ndisFInvokeSetFilterModuleOptions((__int64)BindContext);
}
