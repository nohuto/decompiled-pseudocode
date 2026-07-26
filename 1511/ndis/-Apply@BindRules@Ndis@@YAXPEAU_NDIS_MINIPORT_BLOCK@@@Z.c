/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A354C
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A3474 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EA08 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A3898 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3ABC (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A3CAC (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3EB4 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4010 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A4240 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A43A8 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A45F0 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4734 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A492C (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A49F8 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4BE8 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4D68 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A5984 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DCF60 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  __int64 v4; // rcx
  Ndis::BindStack *p_Bindings; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  unsigned int m_numElements; // eax
  BOOL v12; // r12d
  __int64 v13; // r14
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r13
  NDIS_BIND_FILTER_LINK *v15; // rbx
  int v16; // r8d
  char v17; // al
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // r8
  struct Ndis::BindStack *v20; // rdx
  struct Ndis::BindStack *v21; // rdx
  struct Ndis::BindStack *v22; // rdx
  bool v23; // r8
  struct Ndis::BindStack *v24; // rdx
  struct Ndis::BindStack *v25; // r8
  unsigned int v26; // r13d
  BOOL v27; // edi
  __int64 i; // r14
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *v29; // r12
  NDIS_BIND_FILTER_LINK *v30; // rbx
  int m_pauseReasons; // r8d
  unsigned int v32; // eax
  int v33; // r9d
  char v34; // al
  unsigned int v35; // r13d
  __int64 j; // rsi
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v37; // r12
  NDIS_BIND_PROTOCOL_LINK *v38; // rbx
  int v39; // r8d
  unsigned int v40; // eax
  int v41; // r9d
  char v42; // al
  int m_unbindReasons; // r8d
  char v44; // al
  unsigned __int16 v45; // cx
  __int64 v46; // [rsp+28h] [rbp-89h]
  __int64 v47; // [rsp+38h] [rbp-79h] BYREF
  __int64 *v48; // [rsp+40h] [rbp-71h]

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_, v4);
  p_Bindings = &this->Bindings;
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause(this, v6);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v7);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v8);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v9);
  m_numElements = this->Bindings.Filters.m_numElements;
  v12 = 0;
  v13 = 0LL;
  LODWORD(v46) = m_numElements;
  while ( (_DWORD)v13 != m_numElements )
  {
    if ( (unsigned int)v13 >= this->Bindings.Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    p = this->Bindings.Filters._p;
    v15 = p[v13]._p;
    if ( v15->BindState.m_bindContext.m_numElements || v15->BindState.m_bindSources )
    {
      if ( (v15->BindDriver._p->_t.FilterBindFlags & 2) == 0 )
      {
        v12 = v15->BindState.m_unbindReasons != 0;
        goto LABEL_14;
      }
      if ( v12 )
      {
        m_unbindReasons = v15->BindState.m_unbindReasons;
        v15->BindState.m_unbindReasons = m_unbindReasons | 0x80;
        if ( m_unbindReasons != 0 && v15->BindState.Miniport )
        {
          v44 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0083723 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_unbindReasons, m_unbindReasons | 0x80);
          v15->BindState.Miniport->BindEngine.m_isDirty = 1;
          v44 = 1;
        }
        if ( v44 )
        {
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
          {
            ndisGetBindLinkNameForTracing(p[v13]._p, (struct NDIS_PNPTRACE_LOCALS *)&v47);
            if ( (unsigned __int8)byte_1C0083723 >= 4u )
            {
              v45 = 28;
              goto LABEL_68;
            }
          }
        }
      }
      else
      {
        v16 = v15->BindState.m_unbindReasons;
        v15->BindState.m_unbindReasons = v16 & 0xFFFFFF7F;
        if ( (v16 != 0) == ((v16 & 0xFFFFFF7F) != 0) && v15->BindState.Miniport )
        {
          v17 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0083723 >= 5u )
            WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v16, v16 & 0xFFFFFF7F);
          v15->BindState.Miniport->BindEngine.m_isDirty = 1;
          v17 = 1;
        }
        if ( v17 )
        {
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
          {
            ndisGetBindLinkNameForTracing(p[v13]._p, (struct NDIS_PNPTRACE_LOCALS *)&v47);
            if ( (unsigned __int8)byte_1C0083723 >= 4u )
            {
              v45 = 27;
LABEL_68:
              WPP_SF_Zq(v45, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v48, v47, v46);
            }
          }
        }
      }
    }
LABEL_14:
    m_numElements = v46;
    v13 = (unsigned int)(v13 + 1);
  }
  Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&this->Bindings, v10);
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v18);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v19);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v20);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v21);
  LOBYTE(v22) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v22, v23);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v24);
  Ndis::BindRules::PauseNeededForBind(this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v25);
  v26 = this->Bindings.Filters.m_numElements;
  v27 = this->Bindings.Miniport.m_pauseReasons == 0;
  for ( i = 0LL; (_DWORD)i != v26; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= p_Bindings->Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    v29 = p_Bindings->Filters._p;
    v30 = v29[i]._p;
    if ( v30->BindState.m_bindContext.m_numElements )
    {
      m_pauseReasons = v30->BindState.m_pauseReasons;
      if ( v27 )
        v32 = m_pauseReasons & 0xFFFFFFEF;
      else
        v32 = m_pauseReasons | 0x10;
      v30->BindState.m_pauseReasons = v32;
      v33 = v30->BindState.m_pauseReasons;
      if ( (m_pauseReasons != 0) == (v33 != 0) && v30->BindState.Miniport )
      {
        v34 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0083723 >= 5u )
          WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_pauseReasons, v33);
        v30->BindState.Miniport->BindEngine.m_isDirty = 1;
        v34 = 1;
      }
      if ( v34 )
      {
        if ( (unsigned __int8)byte_1C0083723 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v29[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v47);
          if ( (unsigned __int8)byte_1C0083723 >= 4u )
            WPP_SF_Zq(0x42u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v48, v47);
        }
      }
      v27 = v29[i]._p->BindState.m_pauseReasons == 0;
    }
  }
  v35 = p_Bindings->Protocols.m_numElements;
  for ( j = 0LL; (_DWORD)j != v35; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= p_Bindings->Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v37 = p_Bindings->Protocols._p;
    v38 = v37[j]._p;
    v39 = v38->BindState.m_pauseReasons;
    if ( v27 )
      v40 = v39 & 0xFFFFFFEF;
    else
      v40 = v39 | 0x10;
    v38->BindState.m_pauseReasons = v40;
    v41 = v38->BindState.m_pauseReasons;
    if ( (v39 != 0) == (v41 != 0) && v38->BindState.Miniport )
    {
      v42 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0083723 >= 5u )
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v39, v41);
      v38->BindState.Miniport->BindEngine.m_isDirty = 1;
      v42 = 1;
    }
    if ( v42 && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(v37[j]._p, (struct NDIS_PNPTRACE_LOCALS *)&v47);
      WPP_SF_Zq(0x43u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v48, v47);
    }
  }
}
