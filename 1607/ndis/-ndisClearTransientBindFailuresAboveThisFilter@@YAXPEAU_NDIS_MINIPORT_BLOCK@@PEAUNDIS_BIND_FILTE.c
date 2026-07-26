/*
 * XREFs of ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA984
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C009CB04 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AA6A0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisClearTransientBindFailuresAboveThisFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2)
{
  unsigned int m_numElements; // r15d
  bool v3; // bp
  __int64 i; // rsi
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r14
  unsigned int v8; // r14d
  __int64 j; // rbx
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v10; // r15
  NDIS_BIND_PROTOCOL_LINK *v11; // rsi
  int m_unbindReasons; // r8d
  char v13; // al
  __int64 v14; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int16 *v15; // [rsp+28h] [rbp-C0h]

  m_numElements = a1->Bindings.Filters.m_numElements;
  v3 = 0;
  for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a1->Bindings.Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    p = a1->Bindings.Filters._p;
    if ( v3 )
    {
      if ( Ndis::BindState::SetBinding(
             &p[i]._p->BindState,
             BindingEnabled,
             Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v14);
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          WPP_SF_Zq(0x16u, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v15, v14);
      }
    }
    else
    {
      v3 = p[i]._p == a2;
    }
  }
  v8 = a1->Bindings.Protocols.m_numElements;
  for ( j = 0LL; (_DWORD)j != v8; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= a1->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v10 = a1->Bindings.Protocols._p;
    v11 = v10[j]._p;
    m_unbindReasons = v11->BindState.m_unbindReasons;
    v11->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
    if ( (m_unbindReasons != 0) == ((m_unbindReasons & 0xFFFBFFE3) != 0) && v11->BindState.Miniport )
    {
      v13 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFBFFE3);
      v11->BindState.Miniport->BindEngine.m_isDirty = 1;
      v13 = 1;
    }
    if ( v13 && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(v10[j]._p, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      WPP_SF_Zq(0x17u, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v15, v14);
    }
  }
}
