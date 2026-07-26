/*
 * XREFs of _lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_ @ 0x1C00B1240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall lambda_9a257e6d5af29d57c0884fc82970b8d2_::_helper_func_cdecl_(struct NDIS_BIND_LINK_BASE *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  unsigned int m_unbindReasons; // r8d
  char v4; // cl
  _NDIS_MINIPORT_BLOCK *v5; // rax

  Miniport = a1->BindState.Miniport;
  Ndis::BindEngine::BeginPolicyUpdates(&Miniport->BindEngine);
  m_unbindReasons = a1->BindState.m_unbindReasons;
  a1->BindState.m_unbindReasons = m_unbindReasons & 0xFFFBFFE3;
  if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFBFFE3) != 0) || !a1->BindState.Miniport )
  {
    v4 = byte_1C0085323;
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
    {
      WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFBFFE3);
      v4 = byte_1C0085323;
    }
    v5 = a1->BindState.Miniport;
    if ( !v5->BindEngine.m_isBeingDestroyed )
      v5->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)v4 >= 4u )
      WPP_SF_Zq(0x14u, &WPP_10e48bb64bbb401b7e1b3e1f08acf4e0_Traceguids, 0LL, 0LL);
  }
  if ( !Miniport->BindEngine.m_isBeingDestroyed )
    Miniport->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&Miniport->BindEngine);
}
