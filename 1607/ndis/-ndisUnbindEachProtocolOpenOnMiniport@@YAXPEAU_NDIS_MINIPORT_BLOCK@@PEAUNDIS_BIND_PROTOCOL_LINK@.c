/*
 * XREFs of ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF4E4
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A3B60 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C004EB44 (WPP_SF_Zqq.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00A6B70 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00EC4E4 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindEachProtocolOpenOnMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  Rtl::KString *p; // rcx
  Rtl::KString *v7; // rcx

  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  while ( a2->BindState.m_bindContext.m_numElements )
  {
    v4 = (struct _NDIS_OPEN_BLOCK *)*a2->BindState.m_bindContext._p;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Ndis::BindState::RemoveBindContext(&a2->BindState, v4);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v5);
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      p = a2->BindDriver._p->_t.Name._p;
      if ( p )
        WPP_SF_Zqq(0x10u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &p->Length, a2->BindState.Miniport, v4);
      else
        WPP_SF_Zqq(0x10u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport, v4);
    }
    ndisUnbindProtocolOpen(a1, v4);
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      v7 = a2->BindDriver._p->_t.Name._p;
      if ( v7 )
        WPP_SF_Zqq(0x11u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &v7->Length, a2->BindState.Miniport, v4);
      else
        WPP_SF_Zqq(0x11u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport, v4);
    }
  }
}
