/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A0368
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C006AC00 (WPP_SF_ZqD.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A522C (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rax
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r13
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r15d
  NDIS_BIND_LINK_BASE *v9; // rcx
  unsigned int m_bindSources; // r8d
  Rtl::KString *v11; // rcx
  __int64 *v12; // r8
  Rtl::KString *v13; // rcx
  NDIS_BIND_LINK_BASE *v14; // rcx
  unsigned __int16 v15; // cx
  bool v16; // cf
  unsigned __int16 v17; // cx
  __int64 v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-51h]

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v13 = p->_t.Name._p;
      if ( v13 )
        WPP_SF_Zq(
          0x20u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v13->_UNICODE_STRING,
          a2->BindState.Miniport);
      else
        WPP_SF_Zq(0x20u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport);
    }
    v8 = 0;
    a2->BindState.PretendBindingActive = 1;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v11 = a2->BindDriver._p->_t.Name._p;
      if ( v11 )
        WPP_SF_Zq(
          0x1Eu,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v11->_UNICODE_STRING,
          a2->BindState.Miniport);
      else
        WPP_SF_Zq(0x1Eu, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport);
    }
    v6 = ndisBindNdis6Protocol(a1, RunningDriver);
    v8 = v6;
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v12 = (__int64 *)a2->BindDriver._p->_t.Name._p;
      if ( v12 )
        ++v12;
      WPP_SF_ZqD(0x1Fu, v7, v12, a2->BindState.Miniport, v6);
    }
  }
  if ( v8 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
    a2->BindState.m_LastErrorCode = v8;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v18);
      WPP_SF_DZq(0x21u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v8, v19, v18);
    }
    m_bindSources = a2->BindState.m_bindSources;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
      goto LABEL_13;
    if ( (unsigned __int8)byte_1C0083723 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    v14 = &a2->NDIS_BIND_LINK_BASE;
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&v14->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0083723 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0083723 < 4u )
      {
        goto LABEL_38;
      }
      v15 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&v14->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0083723 < 4u )
      {
LABEL_38:
        v16 = (unsigned __int8)byte_1C0083723 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v16 )
        {
          ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v18);
          WPP_SF_Zq(0x22u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v19, v18);
        }
        goto LABEL_13;
      }
      v15 = 13;
    }
    WPP_SF_Zq(v15, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
    goto LABEL_38;
  }
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  v9 = &a2->NDIS_BIND_LINK_BASE;
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    if ( !Ndis::BindState::SetPause(&v9->BindState, DatapathRunning, PauseReason_InitialPause)
      || (unsigned __int8)byte_1C0083723 < 4u )
    {
      goto LABEL_13;
    }
    ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v18);
    v17 = 35;
LABEL_44:
    WPP_SF_Zq(v17, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v19, v18);
    goto LABEL_13;
  }
  if ( Ndis::BindState::SetPause(&v9->BindState, DatapathRunning, PauseReason_InitialPause)
    && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v18);
    v17 = 36;
    goto LABEL_44;
  }
LABEL_13:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
