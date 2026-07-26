/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A177C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019438 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A35E8 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A382C (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00A3AC4 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3CE0 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3E38 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00A40C0 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4244 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A44A8 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4708 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4904 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A49D0 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4BE8 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A4D68 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  __int64 v4; // rcx
  Ndis::BindStack *p_Bindings; // r13
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct _NDIS_MINIPORT_BLOCK *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  unsigned int m_numElements; // eax
  BOOL v12; // r15d
  __int64 v13; // r14
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *p; // r12
  NDIS_BIND_FILTER_LINK *v15; // rdi
  struct Ndis::BindStack *v16; // rdx
  struct Ndis::BindStack *v17; // r8
  struct Ndis::BindStack *v18; // rdx
  struct Ndis::BindStack *v19; // rdx
  struct Ndis::BindStack *v20; // rdx
  bool v21; // r8
  struct Ndis::BindStack *v22; // rdx
  struct Ndis::BindStack *v23; // r8
  unsigned int v24; // r12d
  BOOL v25; // edi
  __int64 i; // r14
  KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > *v27; // r15
  NDIS_BIND_FILTER_LINK *v28; // rbx
  int m_pauseReasons; // r8d
  unsigned int v30; // eax
  int v31; // r9d
  char v32; // al
  unsigned int v33; // r12d
  __int64 j; // rsi
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *v35; // r15
  NDIS_BIND_PROTOCOL_LINK *v36; // rbx
  int v37; // r8d
  unsigned int v38; // eax
  int v39; // r9d
  char v40; // al
  int m_unbindReasons; // r8d
  char v42; // al
  unsigned __int16 v43; // cx
  __int64 v44; // [rsp+28h] [rbp-89h]
  __int64 v45; // [rsp+38h] [rbp-79h] BYREF
  __int64 *v46; // [rsp+40h] [rbp-71h]

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_,
      v4);
  p_Bindings = &this->Bindings;
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause(this, v6);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v7);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v8);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v9);
  m_numElements = this->Bindings.Filters.m_numElements;
  v12 = 0;
  v13 = 0LL;
  LODWORD(v44) = m_numElements;
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
        goto LABEL_9;
      }
      if ( v12 )
      {
        if ( Ndis::BindState::SetBinding(&v15->BindState, BindingDisabled, Reason_MissingModifyingFilter)
          && (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[v13]._p, (struct NDIS_PNPTRACE_LOCALS *)&v45);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            v43 = 28;
            goto LABEL_55;
          }
        }
      }
      else
      {
        m_unbindReasons = v15->BindState.m_unbindReasons;
        v15->BindState.m_unbindReasons = m_unbindReasons & 0xFFFFFF7F;
        if ( (m_unbindReasons != 0) == ((m_unbindReasons & 0xFFFFFF7F) != 0) && v15->BindState.Miniport )
        {
          v42 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0085323 >= 5u )
            WPP_SF_dd(
              0xEu,
              &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids,
              m_unbindReasons,
              m_unbindReasons & 0xFFFFFF7F);
          if ( !v15->BindState.Miniport->BindEngine.m_isBeingDestroyed )
            v15->BindState.Miniport->BindEngine.m_isDirty = 1;
          v42 = 1;
        }
        if ( v42 )
        {
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
          {
            ndisGetBindLinkNameForTracing(p[v13]._p, (struct NDIS_PNPTRACE_LOCALS *)&v45);
            if ( (unsigned __int8)byte_1C0085323 >= 4u )
            {
              v43 = 27;
LABEL_55:
              WPP_SF_Zq(v43, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v46, v45, v44);
            }
          }
        }
      }
    }
LABEL_9:
    m_numElements = v44;
    v13 = (unsigned int)(v13 + 1);
  }
  Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&this->Bindings, v10);
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v16);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v17);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v18);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v19);
  LOBYTE(v20) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v20, v21);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v22);
  Ndis::BindRules::PauseNeededForBind(this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v23);
  v24 = this->Bindings.Filters.m_numElements;
  v25 = this->Bindings.Miniport.m_pauseReasons == 0;
  for ( i = 0LL; (_DWORD)i != v24; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= p_Bindings->Filters.m_numElements )
      __fastfail(0xBAD0FFu);
    v27 = p_Bindings->Filters._p;
    v28 = v27[i]._p;
    if ( v28->BindState.m_bindContext.m_numElements )
    {
      m_pauseReasons = v28->BindState.m_pauseReasons;
      if ( v25 )
        v30 = m_pauseReasons & 0xFFFFFFEF;
      else
        v30 = m_pauseReasons | 0x10;
      v28->BindState.m_pauseReasons = v30;
      v31 = v28->BindState.m_pauseReasons;
      if ( (m_pauseReasons != 0) == (v31 != 0) && v28->BindState.Miniport )
      {
        v32 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0085323 >= 5u )
          WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_pauseReasons, v31);
        if ( !v28->BindState.Miniport->BindEngine.m_isBeingDestroyed )
          v28->BindState.Miniport->BindEngine.m_isDirty = 1;
        v32 = 1;
      }
      if ( v32 )
      {
        if ( (unsigned __int8)byte_1C0085323 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v27[i]._p, (struct NDIS_PNPTRACE_LOCALS *)&v45);
          if ( (unsigned __int8)byte_1C0085323 >= 4u )
            WPP_SF_Zq(0x42u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v46, v45);
        }
      }
      v25 = v27[i]._p->BindState.m_pauseReasons == 0;
    }
  }
  v33 = p_Bindings->Protocols.m_numElements;
  for ( j = 0LL; (_DWORD)j != v33; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= p_Bindings->Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    v35 = p_Bindings->Protocols._p;
    v36 = v35[j]._p;
    v37 = v36->BindState.m_pauseReasons;
    if ( v25 )
      v38 = v37 & 0xFFFFFFEF;
    else
      v38 = v37 | 0x10;
    v36->BindState.m_pauseReasons = v38;
    v39 = v36->BindState.m_pauseReasons;
    if ( (v37 != 0) == (v39 != 0) && v36->BindState.Miniport )
    {
      v40 = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, v37, v39);
      if ( !v36->BindState.Miniport->BindEngine.m_isBeingDestroyed )
        v36->BindState.Miniport->BindEngine.m_isDirty = 1;
      v40 = 1;
    }
    if ( v40 && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(v35[j]._p, (struct NDIS_PNPTRACE_LOCALS *)&v45);
      WPP_SF_Zq(0x43u, &WPP_53645ffc4554d120dec6fc6e0dcf42a1_Traceguids, v46, v45);
    }
  }
}
