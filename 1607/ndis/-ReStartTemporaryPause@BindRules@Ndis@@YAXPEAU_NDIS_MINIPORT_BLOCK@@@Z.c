/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A68B8
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int m_numElements; // r15d
  char v4; // dl
  __int64 i; // rsi
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r14
  NDIS_BIND_FILTER_LINK *v7; // rdi
  int m_pauseReasons; // r8d
  char v9; // al
  unsigned int v10; // r15d
  __int64 j; // rsi
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v12; // r14
  NDIS_BIND_PROTOCOL_LINK *v13; // rdi
  int v14; // r8d
  char v15; // al
  unsigned int v16; // r8d
  __int64 v17; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int16 *v18; // [rsp+28h] [rbp-C0h]

  m_numElements = this->Bindings.Filters.m_numElements;
  v4 = byte_1C00895E3;
  for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= this->Bindings.Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    p = this->Bindings.Filters._p;
    v7 = p[i]._p;
    if ( v7->BindState.m_actualPauseState == DatapathPaused )
    {
      m_pauseReasons = v7->BindState.m_pauseReasons;
      v7->BindState.m_pauseReasons = m_pauseReasons & 0xFFFFFFDF;
      if ( (m_pauseReasons != 0) == ((m_pauseReasons & 0xFFFFFFDF) != 0) && v7->BindState.Miniport )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)v4 >= 5u )
        {
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFDF);
          v4 = byte_1C00895E3;
        }
        v7->BindState.Miniport->BindEngine.m_isDirty = 1;
        v9 = 1;
      }
      if ( v9 && (unsigned __int8)v4 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v17);
        v4 = byte_1C00895E3;
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          WPP_SF_Zq(0xCu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v18, v17);
          v4 = byte_1C00895E3;
        }
      }
    }
  }
  v10 = this->Bindings.Protocols.m_numElements;
  for ( j = 0LL; (_DWORD)j != v10; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= this->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v12 = this->Bindings.Protocols._p;
    v13 = v12[j]._p;
    if ( v13->BindState.m_actualPauseState == DatapathPaused )
    {
      v14 = v13->BindState.m_pauseReasons;
      v13->BindState.m_pauseReasons = v14 & 0xFFFFFFDF;
      if ( (v14 != 0) == ((v14 & 0xFFFFFFDF) != 0) && v13->BindState.Miniport )
      {
        v15 = 0;
      }
      else
      {
        if ( (unsigned __int8)v4 >= 5u )
        {
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v14, v14 & 0xFFFFFFDF);
          v4 = byte_1C00895E3;
        }
        v13->BindState.Miniport->BindEngine.m_isDirty = 1;
        v15 = 1;
      }
      if ( v15 && (unsigned __int8)v4 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v12[j]._p, (struct NDIS_PNPTRACE_LOCALS *)&v17);
        WPP_SF_Zq(0xDu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v18, v17);
        v4 = byte_1C00895E3;
      }
    }
  }
  if ( this->Bindings.Miniport.m_actualPauseState == DatapathPaused )
  {
    v16 = this->Bindings.Miniport.m_pauseReasons;
    this->Bindings.Miniport.m_pauseReasons = v16 & 0xFFFFFFDF;
    if ( (v16 != 0) != ((v16 & 0xFFFFFFDF) != 0) || !this->Bindings.Miniport.Miniport )
    {
      if ( (unsigned __int8)v4 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v16, v16 & 0xFFFFFFDF);
        v4 = byte_1C00895E3;
      }
      this->Bindings.Miniport.Miniport->BindEngine.m_isDirty = 1;
      if ( (unsigned __int8)v4 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)&v17);
        WPP_SF_Zq(0xEu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v18, v17);
      }
    }
  }
}
