/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A65A4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C006BB00 (WPP_SF_ZqD.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A5948 (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // r12
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r15
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r13d
  unsigned int m_pauseReasons; // r8d
  char v10; // cl
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  unsigned int m_unbindReasons; // r8d
  _NDIS_MINIPORT_BLOCK *v13; // rax
  unsigned int m_bindSources; // r8d
  Rtl::KString *v15; // rcx
  __int64 *v16; // r8
  Rtl::KString *v17; // r8
  __int64 *v18; // r8
  Rtl::KString *v19; // rcx
  __int64 *v20; // r8
  NDIS_BIND_LINK_BASE *v21; // rcx
  unsigned __int16 v22; // cx
  _NDIS_MINIPORT_BLOCK *v23; // rax
  unsigned __int16 v24; // cx
  __int64 v25; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-61h]

  p = a2->BindDriver._p;
  v4 = a1;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      v19 = p->_t.Name._p;
      v20 = (__int64 *)&v19->_UNICODE_STRING;
      if ( !v19 )
        v20 = 0LL;
      WPP_SF_Zq(0x20u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v20, a2->BindState.Miniport);
    }
    a2->BindState.PretendBindingActive = 1;
    v8 = 0;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      v15 = a2->BindDriver._p->_t.Name._p;
      v16 = (__int64 *)&v15->_UNICODE_STRING;
      if ( !v15 )
        v16 = 0LL;
      WPP_SF_Zq(0x1Eu, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v16, a2->BindState.Miniport);
    }
    v6 = ndisBindNdis6Protocol(v4, RunningDriver);
    v8 = v6;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      v17 = a2->BindDriver._p->_t.Name._p;
      if ( v17 )
        v18 = (__int64 *)&v17->_UNICODE_STRING;
      else
        v18 = 0LL;
      WPP_SF_ZqD(0x1Fu, v7, v18, a2->BindState.Miniport, v6);
    }
  }
  if ( !v8 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&v4->BindEngine.m_lock, 0LL);
    if ( RunningDriver->MajorNdisVersion < 6u )
    {
      if ( !Ndis::BindState::SetPause(&a2->BindState, DatapathRunning, PauseReason_InitialPause)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_12;
      }
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v25);
      v24 = 36;
    }
    else
    {
      m_pauseReasons = a2->BindState.m_pauseReasons;
      a2->BindState.m_pauseReasons = m_pauseReasons & 0xFFFFFFFE;
      if ( (m_pauseReasons != 0) == ((m_pauseReasons & 0xFFFFFFFE) != 0) && a2->BindState.Miniport )
        goto LABEL_12;
      v10 = byte_1C0085323;
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_pauseReasons, m_pauseReasons & 0xFFFFFFFE);
        v10 = byte_1C0085323;
        v4 = a1;
      }
      Miniport = a2->BindState.Miniport;
      if ( !Miniport->BindEngine.m_isBeingDestroyed )
        Miniport->BindEngine.m_isDirty = 1;
      if ( (unsigned __int8)v10 < 4u )
        goto LABEL_12;
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v25);
      v24 = 35;
    }
    WPP_SF_Zq(v24, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v26, v25);
LABEL_12:
    Ndis::BindEngine::ApplyRules(&v4->BindEngine);
    ExReleasePushLockExclusiveEx(&v4->BindEngine.m_lock, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  Ndis::BindEngine::BeginPolicyUpdates(&v4->BindEngine);
  Rtl::KArray<void *>::resize((__int64)&a2->BindState.m_bindContext);
  a2->BindState.m_LastErrorCode = v8;
  m_unbindReasons = a2->BindState.m_unbindReasons;
  a2->BindState.m_unbindReasons = m_unbindReasons | 4;
  if ( m_unbindReasons == 0 || !a2->BindState.Miniport )
  {
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_unbindReasons, m_unbindReasons | 4);
    v13 = a2->BindState.Miniport;
    if ( !v13->BindEngine.m_isBeingDestroyed )
      v13->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v25);
      WPP_SF_DZq(0x21u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v8, v26, v25);
    }
  }
  m_bindSources = a2->BindState.m_bindSources;
  a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
  if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFB) != 0) )
  {
    if ( (unsigned __int8)byte_1C0085323 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    v21 = &a2->NDIS_BIND_LINK_BASE;
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&v21->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_51;
      }
      v22 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&v21->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0085323 < 4u )
      {
        goto LABEL_51;
      }
      v22 = 13;
    }
    WPP_SF_Zq(v22, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
LABEL_51:
    v23 = a2->BindState.Miniport;
    if ( !v23->BindEngine.m_isBeingDestroyed )
      v23->BindEngine.m_isDirty = 1;
    if ( (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v25);
      WPP_SF_Zq(0x22u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v26, v25);
    }
  }
  Ndis::BindEngine::EndPolicyUpdates(&v4->BindEngine);
}
