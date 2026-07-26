/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A3C0C
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C004EB44 (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C006F730 (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C006F890 (WPP_SF_ZqD.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A7010 (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00A8448 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A866C (ndisInitializeNetPnPEvent.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A9F40 (ndisInitializeMiniportRestartAttributes.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00DD208 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
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
  Rtl::KString *p; // rcx
  Rtl::KString *v12; // rcx
  Rtl::KString *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // esi
  unsigned __int16 *v17; // r8
  unsigned int v18; // [rsp+30h] [rbp-A9h]
  __int64 v19; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int16 *v20; // [rsp+48h] [rbp-91h]
  _NDIS_PROTOCOL_RESTART_PARAMETERS *p_ProtocolParameters; // [rsp+50h] [rbp-89h]
  int v22; // [rsp+58h] [rbp-81h]

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( RunningDriver->MajorNdisVersion >= 6u )
  {
    m_numElements = a2->BindState.m_bindContext.m_numElements;
    v8 = 0LL;
    v18 = m_numElements;
    while ( (_DWORD)v8 != m_numElements )
    {
      if ( (unsigned int)v8 >= a2->BindState.m_bindContext.m_numElements )
        __fastfail(0xBAD0FFu);
      v9 = a2->BindState.m_bindContext._p[v8];
      if ( (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        p = a2->BindDriver._p->_t.Name._p;
        if ( p )
          WPP_SF_Zqq(0x14u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &p->Length, a2->BindState.Miniport, v9);
        else
          WPP_SF_Zqq(0x14u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport, v9);
      }
      ndisInitializeNetPnPEvent(&v19, 0LL);
      LODWORD(v20) = 9;
      p_ProtocolParameters = &a3->ProtocolParameters;
      v22 = 56;
      ndisPnPNotifyBindingUnlocked(v9, &v19);
      if ( (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        v12 = a2->BindDriver._p->_t.Name._p;
        if ( v12 )
          WPP_SF_Zqq(0x15u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &v12->Length, a2->BindState.Miniport, v9);
        else
          WPP_SF_Zqq(0x15u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport, v9);
      }
      m_numElements = v18;
      v8 = (unsigned int)(v8 + 1);
    }
LABEL_10:
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    p_BindEngine = &a1->BindEngine;
    a2->BindState.m_actualPauseState = DatapathRunning;
    goto LABEL_11;
  }
  a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    v13 = a2->BindDriver._p->_t.Name._p;
    if ( v13 )
      WPP_SF_Zq(0x16u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &v13->Length, a2->BindState.Miniport);
    else
      WPP_SF_Zq(0x16u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport);
  }
  v14 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
  v16 = v14;
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    v17 = (unsigned __int16 *)a2->BindDriver._p->_t.Name._p;
    if ( v17 )
      v17 += 4;
    WPP_SF_ZqD(0x17u, v15, v17, a2->BindState.Miniport, v14);
  }
  if ( !v16 )
    goto LABEL_10;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
  a2->BindState.m_LastErrorCode = v16;
  if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v19);
    WPP_SF_DZq(0x18u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, v16, v20, v19);
  }
  if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
    && (unsigned __int8)byte_1C00895E3 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v19);
    WPP_SF_Zq(0x19u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, v20, v19);
  }
  p_BindEngine = &a1->BindEngine;
LABEL_11:
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
}
