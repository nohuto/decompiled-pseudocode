/*
 * XREFs of ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A9E94
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A48A8 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_DZq @ 0x1C006F730 (WPP_SF_DZq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A9F40 (ndisInitializeMiniportRestartAttributes.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 */

void __fastcall ndisMRestartMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  int v4; // edi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  _QWORD v6[20]; // [rsp+30h] [rbp-A8h] BYREF

  ndisInitializeMiniportRestartAttributes(a1, a2);
  a2->MiniportMacOptionsToPreserve = a1->MacOptions & 0x80;
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF_q(0x12u, &WPP_5f947da720a33807970d71b303d9e9f1_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = ndisMRestartMiniportInner(a1, &a2->Attributes);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895E3 >= 4u )
    WPP_SF_qD(0x13u, &WPP_5f947da720a33807970d71b303d9e9f1_Traceguids, (__int64)a1, v4);
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  if ( v4 )
  {
    a1->Bindings.Miniport.m_LastErrorCode = v4;
    if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v6);
      WPP_SF_DZq(0x14u, &WPP_5f947da720a33807970d71b303d9e9f1_Traceguids, v4, (unsigned __int16 *)v6[1], v6[0]);
    }
  }
  else
  {
    a1->Bindings.Miniport.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v5);
}
