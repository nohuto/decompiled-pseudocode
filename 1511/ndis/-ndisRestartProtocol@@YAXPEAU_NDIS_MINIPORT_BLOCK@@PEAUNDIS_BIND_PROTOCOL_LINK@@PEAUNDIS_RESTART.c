/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A21D8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C004A1D4 (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C006AC00 (WPP_SF_ZqD.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C009E9B4 (ndisInitializeMiniportRestartAttributes.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A522C (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00A55FC (ndisPnPNotifyBindingUnlocked.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00D7258 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD07C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rsi
  unsigned int m_numElements; // eax
  __int64 v8; // rsi
  void *v9; // r12
  Ndis::BindEngine *p_BindEngine; // rcx
  Rtl::KString *v11; // rcx
  Rtl::KString *v12; // rcx
  Rtl::KString *p; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // r15d
  __int64 *v17; // r8
  unsigned int m_bindSources; // r8d
  NDIS_BIND_LINK_BASE *v19; // rcx
  unsigned __int16 v20; // cx
  bool v21; // cf
  unsigned int v22; // [rsp+30h] [rbp-A9h]
  __int64 v23; // [rsp+40h] [rbp-99h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-91h]
  _NDIS_PROTOCOL_RESTART_PARAMETERS *p_ProtocolParameters; // [rsp+50h] [rbp-89h]
  int v26; // [rsp+58h] [rbp-81h]

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes((__int64)a1, (__int64)a3);
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      p = a2->BindDriver._p->_t.Name._p;
      if ( p )
        WPP_SF_Zq(
          0x16u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&p->_UNICODE_STRING,
          a2->BindState.Miniport);
      else
        WPP_SF_Zq(0x16u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport);
    }
    v14 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
    v16 = v14;
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v17 = (__int64 *)a2->BindDriver._p->_t.Name._p;
      if ( v17 )
        ++v17;
      WPP_SF_ZqD(0x17u, v15, v17, a2->BindState.Miniport, v14);
    }
    if ( !v16 )
      goto LABEL_10;
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
    a2->BindState.m_LastErrorCode = v16;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v23);
      WPP_SF_DZq(0x18u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v16, v24, v23);
    }
    m_bindSources = a2->BindState.m_bindSources;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
LABEL_47:
      p_BindEngine = &a1->BindEngine;
      goto LABEL_11;
    }
    if ( (unsigned __int8)byte_1C0083723 >= 5u )
      WPP_SF_dd(0xAu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    v19 = &a2->NDIS_BIND_LINK_BASE;
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&v19->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
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
        goto LABEL_45;
      }
      v20 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&v19->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0083723 < 4u )
      {
LABEL_45:
        v21 = (unsigned __int8)byte_1C0083723 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v21 )
        {
          ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v23);
          WPP_SF_Zq(0x19u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, v24, v23);
        }
        goto LABEL_47;
      }
      v20 = 13;
    }
    WPP_SF_Zq(v20, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, 0LL, 0LL);
    goto LABEL_45;
  }
  m_numElements = a2->BindState.m_bindContext.m_numElements;
  v8 = 0LL;
  v22 = m_numElements;
  while ( (_DWORD)v8 != m_numElements )
  {
    if ( (unsigned int)v8 >= a2->BindState.m_bindContext.m_numElements )
      __fastfail(0xBAD0FFu);
    v9 = a2->BindState.m_bindContext._p[v8];
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v11 = a2->BindDriver._p->_t.Name._p;
      if ( v11 )
        WPP_SF_Zqq(
          0x14u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v11->_UNICODE_STRING,
          a2->BindState.Miniport,
          v9);
      else
        WPP_SF_Zqq(0x14u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v9);
    }
    ndisInitializeNetPnPEvent(&v23, 0LL);
    LODWORD(v24) = 9;
    p_ProtocolParameters = &a3->ProtocolParameters;
    v26 = 56;
    ndisPnPNotifyBindingUnlocked(v9, &v23);
    if ( (unsigned __int8)byte_1C0083723 >= 4u )
    {
      v12 = a2->BindDriver._p->_t.Name._p;
      if ( v12 )
        WPP_SF_Zqq(
          0x15u,
          &WPP_6e95c490e51e9748073b6395c0120650_Traceguids,
          (__int64 *)&v12->_UNICODE_STRING,
          a2->BindState.Miniport,
          v9);
      else
        WPP_SF_Zqq(0x15u, &WPP_6e95c490e51e9748073b6395c0120650_Traceguids, 0LL, a2->BindState.Miniport, v9);
    }
    m_numElements = v22;
    v8 = (unsigned int)(v8 + 1);
  }
LABEL_10:
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  p_BindEngine = &a1->BindEngine;
  a2->BindState.m_actualPauseState = DatapathRunning;
LABEL_11:
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
}
