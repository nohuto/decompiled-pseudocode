/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A50E8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015624 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A430C (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A5524 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A5760 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A5950 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A5B6C (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A5CD0 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A5F14 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A6088 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A62E8 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A642C (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A6628 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A66F4 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A68B8 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A6A38 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  __int64 v4; // rcx
  Ndis::BindStack *p_Bindings; // rsi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  NDIS_BIND_FILTER_LINK *v10; // rdx
  unsigned int m_numElements; // r13d
  BOOL v12; // r15d
  __int64 i; // r14
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r12
  struct Ndis::BindStack *v15; // rdx
  struct Ndis::BindStack *v16; // r8
  struct Ndis::BindStack *v17; // rdx
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // rdx
  bool v20; // r8
  struct Ndis::BindStack *v21; // rdx
  struct Ndis::BindStack *v22; // r8
  unsigned int v23; // r13d
  BOOL v24; // edi
  __int64 j; // r15
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *v26; // r12
  NDIS_BIND_FILTER_LINK *v27; // rbx
  int m_pauseReasons; // r8d
  unsigned int v29; // eax
  int v30; // r9d
  char v31; // al
  unsigned int v32; // r13d
  __int64 k; // r14
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v34; // r12
  NDIS_BIND_PROTOCOL_LINK *v35; // rbx
  int v36; // r8d
  unsigned int v37; // eax
  int v38; // r9d
  char v39; // al
  unsigned __int16 v40; // cx
  __int64 v41; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 *v42; // [rsp+30h] [rbp-71h]

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_,
      v4);
  p_Bindings = &this->Bindings;
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause(this, v6);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v7);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v8);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v9);
  m_numElements = this->Bindings.Filters.m_numElements;
  v12 = 0;
  for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= this->Bindings.Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    p = this->Bindings.Filters._p;
    v10 = p[i]._p;
    if ( v10->BindState.m_bindContext.m_numElements || v10->BindState.m_bindSources )
    {
      if ( (v10->BindDriver._p->_t.FilterBindFlags & 2) == 0 )
      {
        v12 = v10->BindState.m_unbindReasons != 0;
        continue;
      }
      if ( v12 )
      {
        if ( Ndis::BindState::SetBinding(&v10->BindState, BindingDisabled, Reason_MissingModifyingFilter)
          && (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v41);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
          {
            v40 = 28;
            goto LABEL_56;
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(&v10->BindState, BindingEnabled, Reason_MissingModifyingFilter)
             && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v41);
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          v40 = 27;
LABEL_56:
          WPP_SF_Zq(v40, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v42, v41);
          continue;
        }
      }
    }
  }
  Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange(
    (Ndis::BindRules *)&this->Bindings,
    (struct Ndis::BindStack *)v10);
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v15);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v16);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v17);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v18);
  LOBYTE(v19) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v19, v20);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v21);
  Ndis::BindRules::PauseNeededForBind(this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v22);
  v23 = this->Bindings.Filters.m_numElements;
  v24 = this->Bindings.Miniport.m_pauseReasons == 0;
  for ( j = 0LL; (_DWORD)j != v23; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= p_Bindings->Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    v26 = p_Bindings->Filters._p;
    v27 = v26[j]._p;
    if ( v27->BindState.m_bindContext.m_numElements )
    {
      m_pauseReasons = v27->BindState.m_pauseReasons;
      if ( v24 )
        v29 = m_pauseReasons & 0xFFFFFFEF;
      else
        v29 = m_pauseReasons | 0x10;
      v27->BindState.m_pauseReasons = v29;
      v30 = v27->BindState.m_pauseReasons;
      if ( (m_pauseReasons != 0) == (v30 != 0) && v27->BindState.Miniport )
      {
        v31 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 5u )
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_pauseReasons, v30);
        v27->BindState.Miniport->BindEngine.m_isDirty = 1;
        v31 = 1;
      }
      if ( v31 )
      {
        if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v26[j]._p, (struct NDIS_PNPTRACE_LOCALS *)&v41);
          if ( (unsigned __int8)byte_1C00895E3 >= 4u )
            WPP_SF_Zq(0x42u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v42, v41);
        }
      }
      v24 = v26[j]._p->BindState.m_pauseReasons == 0;
    }
  }
  v32 = p_Bindings->Protocols.m_numElements;
  for ( k = 0LL; (_DWORD)k != v32; k = (unsigned int)(k + 1) )
  {
    if ( (unsigned int)k >= p_Bindings->Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v34 = p_Bindings->Protocols._p;
    v35 = v34[k]._p;
    v36 = v35->BindState.m_pauseReasons;
    if ( v24 )
      v37 = v36 & 0xFFFFFFEF;
    else
      v37 = v36 | 0x10;
    v35->BindState.m_pauseReasons = v37;
    v38 = v35->BindState.m_pauseReasons;
    if ( (v36 != 0) == (v38 != 0) && v35->BindState.Miniport )
    {
      v39 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C00895E3 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v36, v38);
      v35->BindState.Miniport->BindEngine.m_isDirty = 1;
      v39 = 1;
    }
    if ( v39 && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(v34[k]._p, (struct NDIS_PNPTRACE_LOCALS *)&v41);
      WPP_SF_Zq(0x43u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v42, v41);
    }
  }
}
