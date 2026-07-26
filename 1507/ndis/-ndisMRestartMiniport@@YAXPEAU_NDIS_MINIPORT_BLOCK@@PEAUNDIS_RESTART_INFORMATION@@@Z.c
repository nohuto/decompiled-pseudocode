/*
 * XREFs of ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A04E4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00A0674 (ndisInitializeMiniportRestartAttributes.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 */

void __fastcall ndisMRestartMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  int v4; // edi
  _QWORD v5[21]; // [rsp+30h] [rbp-A8h] BYREF

  ndisInitializeMiniportRestartAttributes();
  a2->MiniportMacOptionsToPreserve = a1->MacOptions & 0x80;
  if ( (unsigned __int8)byte_1C0085323 >= 4u )
    WPP_SF_q(0x12u, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = ndisMRestartMiniportInner(a1, &a2->Attributes);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085323 >= 4u )
    WPP_SF_qD(0x13u, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)a1, v4);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v4 )
  {
    a1->Bindings.Miniport.m_LastErrorCode = v4;
    if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v5);
      WPP_SF_DZq(0x14u, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, v4, (__int64 *)v5[1], v5[0]);
    }
  }
  else
  {
    a1->Bindings.Miniport.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
