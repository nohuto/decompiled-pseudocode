/*
 * XREFs of ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C009913C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zqq @ 0x1C004A1D4 (WPP_SF_Zqq.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00991E8 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00994E4 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisPauseProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  unsigned int m_numElements; // r14d
  __int64 i; // rbx
  struct _NDIS_OPEN_BLOCK *v6; // rbp
  Rtl::KString *p; // rcx
  Rtl::KString *v8; // rcx

  if ( a2->BindDriver._p->_t.RunningDriver->MajorNdisVersion < 6u )
  {
    ndisUnbindEachProtocolOpenOnMiniport(a1, a2);
  }
  else
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(0xBAD0FFu);
      v6 = (struct _NDIS_OPEN_BLOCK *)a2->BindState.m_bindContext._p[i];
      if ( (unsigned __int8)byte_1C0083723 >= 4u )
      {
        p = a2->BindDriver._p->_t.Name._p;
        if ( p )
          WPP_SF_Zqq(
            0x12u,
            &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
            (__int64 *)&p->_UNICODE_STRING,
            a2->BindState.Miniport,
            v6);
        else
          WPP_SF_Zqq(0x12u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v6);
      }
      ndisPauseProtocolInner(v6, (unsigned int)a2);
      if ( (unsigned __int8)byte_1C0083723 >= 4u )
      {
        v8 = a2->BindDriver._p->_t.Name._p;
        if ( v8 )
          WPP_SF_Zqq(
            0x13u,
            &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
            (__int64 *)&v8->_UNICODE_STRING,
            a2->BindState.Miniport,
            v6);
        else
          WPP_SF_Zqq(0x13u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v6);
      }
    }
  }
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
