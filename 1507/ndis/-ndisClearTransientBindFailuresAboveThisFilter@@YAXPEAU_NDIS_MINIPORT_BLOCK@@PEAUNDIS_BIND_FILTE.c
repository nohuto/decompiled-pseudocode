/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEC18
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AEB60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00DDCC0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  unsigned int m_numElements; // r12d
  bool v3; // r15
  __int64 i; // rsi
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r14
  NDIS_BIND_FILTER_LINK *v8; // rbx
  int m_unbindReasons; // r8d
  char v10; // al
  unsigned int v11; // r14d
  __int64 j; // rbx
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v13; // r15
  NDIS_BIND_PROTOCOL_LINK *v14; // rdi
  int v15; // r8d
  char v16; // al
  __int64 v17; // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v18; // [rsp+28h] [rbp-D0h]

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a1->Bindings.Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    p = a1->Bindings.Filters._p;
    if ( v3 )
    {
      v8 = p[i]._p;
      m_unbindReasons = v8->BindState.m_unbindReasons;
      v8->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
      if ( (m_unbindReasons != 0) == ((m_unbindReasons & 0xFFFBFFE3) != 0) && v8->BindState.Miniport )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(
            0xEu,
            &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids,
            m_unbindReasons,
            m_unbindReasons & 0xFFFBFFE3);
        if ( !v8->BindState.Miniport->BindEngine.m_isBeingDestroyed )
          v8->BindState.Miniport->BindEngine.m_isDirty = 1;
        v10 = 1;
      }
      if ( v10 && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v17);
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
          WPP_SF_Zq(0x16u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, v18, v17);
      }
    }
    else
    {
      v3 = p[i]._p == a2;
    }
  }
  v11 = a1->Bindings.Protocols.m_numElements;
  for ( j = 0LL; (_DWORD)j != v11; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= a1->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v13 = a1->Bindings.Protocols._p;
    v14 = v13[j]._p;
    v15 = v14->BindState.m_unbindReasons;
    v14->BindState.m_unbindReasons = v15 & 0xFFFBFFE3;
    if ( (v15 != 0) == ((v15 & 0xFFFBFFE3) != 0) && v14->BindState.Miniport )
    {
      v16 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v15, v15 & 0xFFFBFFE3);
      if ( !v14->BindState.Miniport->BindEngine.m_isBeingDestroyed )
        v14->BindState.Miniport->BindEngine.m_isDirty = 1;
      v16 = 1;
    }
    if ( v16 && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(v13[j]._p, (struct NDIS_PNPTRACE_LOCALS *)&v17);
      WPP_SF_Zq(0x17u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, v18, v17);
    }
  }
}
