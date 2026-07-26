/*
 * XREFs of ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00994E4
 * Callers:
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009913C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C004A1D4 (WPP_SF_Zqq.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00995D8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00E1274 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisUnbindEachProtocolOpenOnMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  struct _NDIS_OPEN_BLOCK *v4; // rsi
  Rtl::KString *p; // rcx
  Rtl::KString *v6; // rcx

  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  while ( a2->BindState.m_bindContext.m_numElements )
  {
    v4 = (struct _NDIS_OPEN_BLOCK *)*a2->BindState.m_bindContext._p;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Ndis::BindState::RemoveBindContext(&a2->BindState, v4);
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      p = a2->BindDriver._p->_t.Name._p;
      if ( p )
        WPP_SF_Zqq(
          0x10u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&p->_UNICODE_STRING,
          a2->BindState.Miniport,
          v4);
      else
        WPP_SF_Zqq(0x10u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v4);
    }
    ndisUnbindProtocolOpen(a1, v4);
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v6 = a2->BindDriver._p->_t.Name._p;
      if ( v6 )
        WPP_SF_Zqq(
          0x11u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v6->_UNICODE_STRING,
          a2->BindState.Miniport,
          v4);
      else
        WPP_SF_Zqq(0x11u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v4);
    }
  }
}
