/*
 * XREFs of ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C006BEE4 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C006BF30 (WPP_SF__guid_DqD.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A0674 (ndisInitializeMiniportRestartAttributes.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00A3344 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00E2588 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2E2C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E96F0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
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
  unsigned int restarted; // esi
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  char v12; // bl
  bool m_isDirty; // al
  struct _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  _QWORD v15[20]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v16[20]; // [rsp+D0h] [rbp-D8h] BYREF

  v4 = &a2->NDIS_BIND_LINK_BASE;
  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( !*(_DWORD *)(v8 + 8) )
    ndisInitializeMiniportRestartAttributes((__int64)a1, v8);
  if ( (unsigned __int8)byte_1C0085323 >= 4u )
    WPP_SF__guid_Dq(0x12u, v7, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisReferencePackage((__int64)&ndisPkgs);
  restarted = ndisRestartFilterInner(BindContext, a3);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085323 >= 4u )
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
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v16);
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
        WPP_SF_Zq(0x15u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64 *)v16[1], v16[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    if ( a2->BindState.NeedsPauseAction
      && Ndis::BindState::SetPause(&v4->BindState, DatapathPaused, PauseReason_RestartNeeded)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v15);
      if ( (unsigned __int8)byte_1C0085323 >= 4u )
        WPP_SF_Zq(0x14u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64 *)v15[1], v15[0]);
    }
    a2->BindState.m_actualPauseState = DatapathRunning;
    v12 = 0;
    m_isDirty = a1->BindEngine.m_isDirty;
    do
    {
      m_miniport = a1->BindEngine.m_miniport;
      v12 |= m_isDirty;
      a1->BindEngine.m_isDirty = 0;
      Ndis::BindRules::Apply(m_miniport, v11);
      m_isDirty = a1->BindEngine.m_isDirty;
    }
    while ( m_isDirty );
    a1->BindEngine.m_isDirty = v12;
    ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
  }
}
