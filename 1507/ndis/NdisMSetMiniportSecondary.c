/*
 * XREFs of NdisMSetMiniportSecondary @ 0x1C00D1C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C006EE8C (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportSecondary(NDIS_HANDLE MiniportHandle, NDIS_HANDLE PrimaryMiniportHandle)
{
  NDIS_STATUS v4; // edi
  _QWORD v6[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x5Du, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  if ( *((_QWORD *)MiniportHandle + 477) == *((_QWORD *)PrimaryMiniportHandle + 477)
    && *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle )
  {
    *((_DWORD *)MiniportHandle + 30) |= 0x10000000u;
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5208));
    if ( Ndis::BindState::SetBinding((Ndis::BindState *)MiniportHandle + 64, BindingDisabled, Reason_SecondaryMiniport)
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, (struct NDIS_PNPTRACE_LOCALS *)v6);
      WPP_SF_Zq(0x5Eu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, (__int64 *)v6[1], v6[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5208));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)MiniportHandle + 5208), RunSynchronous);
    *((_QWORD *)MiniportHandle + 22) = PrimaryMiniportHandle;
  }
  else
  {
    v4 = -1073741637;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x5Fu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  NdisTraceLoggingRareMiniportPath((const struct _TlgProvider_t *)MiniportHandle);
  return v4;
}
