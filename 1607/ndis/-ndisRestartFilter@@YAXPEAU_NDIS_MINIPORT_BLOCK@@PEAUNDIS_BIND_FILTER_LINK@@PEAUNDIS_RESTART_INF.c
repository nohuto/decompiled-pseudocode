/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A2D98
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C006FC50 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C006FC9C (WPP_SF__guid_DqD.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00A6C38 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A9F40 (ndisInitializeMiniportRestartAttributes.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00E2178 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2FA4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E7974 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 */

void __fastcall ndisRestartFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_FILTER_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  NDIS_BIND_LINK_BASE *v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _NDIS_FILTER_BLOCK *BindContext; // r14
  unsigned int restarted; // edi
  Ndis::BindEngine *p_BindEngine; // rcx
  __int64 v12; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 *v13; // [rsp+38h] [rbp-D0h]

  v4 = &a2->NDIS_BIND_LINK_BASE;
  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( !*(_DWORD *)(v8 + 8) )
    ndisInitializeMiniportRestartAttributes(a1, v8);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF__guid_Dq(0x12u, v7, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisReferencePackage((__int64)&ndisPkgs);
  restarted = ndisRestartFilterInner(BindContext, a3);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF__guid_DqD(
      0x13u,
      (__int64)a2->BindState.Miniport,
      (__int64)&a2->BindDriver._p->_t.Guid,
      a2->FilterIndex,
      a2->BindState.Miniport,
      restarted);
  if ( restarted )
  {
    NdisTraceLoggingRareFilterPath(BindContext->FilterDriver, 3LL, restarted);
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    a2->BindState.m_LastErrorCode = restarted;
    if ( Ndis::BindState::SetBinding(&v4->BindState, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v12);
      if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        WPP_SF_Zq(0x15u, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v13, v12);
    }
    p_BindEngine = &a1->BindEngine;
  }
  else
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    if ( a2->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&v4->BindState, DatapathPaused, PauseReason_RestartNeeded)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v12);
      if ( (unsigned __int8)byte_1C00895E3 >= 4u )
        WPP_SF_Zq(0x14u, &WPP_95145dda949833bd55dad319dd5d3165_Traceguids, v13, v12);
    }
    a2->BindState.m_actualPauseState = DatapathRunning;
    p_BindEngine = &a1->BindEngine;
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
}
