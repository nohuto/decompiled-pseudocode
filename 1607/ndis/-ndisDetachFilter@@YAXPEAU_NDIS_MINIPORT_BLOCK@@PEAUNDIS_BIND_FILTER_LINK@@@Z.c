/*
 * XREFs of ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C009CB04
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF__guid_Dq @ 0x1C006FC50 (WPP_SF__guid_Dq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00A6B70 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00A6C38 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA984 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E6AE0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  Ndis::BindEngine *p_BindEngine; // rdi
  struct _NDIS_FILTER_BLOCK *BindContext; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdx

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  Ndis::BindState::RemoveBindContext(&a2->BindState, BindContext);
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF__guid_Dq(0x26u, v6, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisDetachFilterInner(a1, BindContext);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF__guid_Dq(0x27u, v7, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  Ndis::BindEngine::BeginPolicyUpdates(p_BindEngine);
  ndisClearTransientBindFailuresAboveThisFilter(a1, a2);
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
}
