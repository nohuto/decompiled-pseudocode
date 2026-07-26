/*
 * XREFs of ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00A2EE4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C006F730 (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C006F890 (WPP_SF_ZqD.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C00A6C50 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?resize@?$KArray@PEAX@Rtl@@QEAA_N_K@Z @ 0x1C00A7010 (-resize@-$KArray@PEAX@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisBindProtocol(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_PROTOCOL_LINK *a2)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rax
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r12
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r15d
  NDIS_BIND_LINK_BASE *v9; // rcx
  Rtl::KString *v10; // rcx
  unsigned __int16 *v11; // r8
  Rtl::KString *v12; // rcx
  unsigned __int16 v13; // cx
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int16 *v15; // [rsp+40h] [rbp-41h]

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      v12 = p->_t.Name._p;
      if ( v12 )
        WPP_SF_Zq(0x20u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &v12->Length, a2->BindState.Miniport);
      else
        WPP_SF_Zq(0x20u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport);
    }
    a2->BindState.PretendBindingActive = 1;
    v8 = 0;
  }
  else
  {
    p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      v10 = a2->BindDriver._p->_t.Name._p;
      if ( v10 )
        WPP_SF_Zq(0x1Eu, &WPP_9d58b71ad31e34326812744187916088_Traceguids, &v10->Length, a2->BindState.Miniport);
      else
        WPP_SF_Zq(0x1Eu, &WPP_9d58b71ad31e34326812744187916088_Traceguids, 0LL, a2->BindState.Miniport);
    }
    v6 = ndisBindNdis6Protocol(a1, RunningDriver);
    v8 = v6;
    if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      v11 = (unsigned __int16 *)a2->BindDriver._p->_t.Name._p;
      if ( v11 )
        v11 += 4;
      WPP_SF_ZqD(0x1Fu, v7, v11, a2->BindState.Miniport, v6);
    }
  }
  if ( v8 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    Rtl::KArray<void *>::resize(&a2->BindState.m_bindContext);
    a2->BindState.m_LastErrorCode = v8;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      WPP_SF_DZq(0x21u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, v8, v15, v14);
    }
    if ( Ndis::BindState::SetSource(&a2->BindState, RemoveBindSource, UnsolicitedOpen)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      WPP_SF_Zq(0x22u, &WPP_9d58b71ad31e34326812744187916088_Traceguids, v15, v14);
    }
  }
  else
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    v9 = &a2->NDIS_BIND_LINK_BASE;
    if ( RunningDriver->MajorNdisVersion >= 6u )
    {
      if ( !Ndis::BindState::SetPause(&v9->BindState, DatapathRunning, PauseReason_InitialPause)
        || (unsigned __int8)byte_1C00895E3 < 4u )
      {
        goto LABEL_8;
      }
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      v13 = 35;
LABEL_31:
      WPP_SF_Zq(v13, &WPP_9d58b71ad31e34326812744187916088_Traceguids, v15, v14);
      goto LABEL_8;
    }
    if ( Ndis::BindState::SetPause(&v9->BindState, DatapathRunning, PauseReason_InitialPause)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)&v14);
      v13 = 36;
      goto LABEL_31;
    }
  }
LABEL_8:
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
