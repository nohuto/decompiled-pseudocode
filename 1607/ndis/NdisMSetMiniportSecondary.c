/*
 * XREFs of NdisMSetMiniportSecondary @ 0x1C00D09E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C0073158 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportSecondary(NDIS_HANDLE MiniportHandle, NDIS_HANDLE PrimaryMiniportHandle)
{
  NDIS_STATUS v4; // edi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  _QWORD v7[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x60u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  if ( *((_QWORD *)MiniportHandle + 477) == *((_QWORD *)PrimaryMiniportHandle + 477)
    && *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle )
  {
    *((_DWORD *)MiniportHandle + 30) |= 0x10000000u;
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5208));
    if ( Ndis::BindState::SetBinding((Ndis::BindState *)MiniportHandle + 64, BindingDisabled, Reason_SecondaryMiniport)
      && (unsigned __int8)byte_1C00895E3 >= 4u )
    {
      ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, (struct NDIS_PNPTRACE_LOCALS *)v7);
      WPP_SF_Zq(0x61u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, (unsigned __int16 *)v7[1], v7[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5208), v5);
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)MiniportHandle + 5208), RunSynchronous, 0);
    *((_QWORD *)MiniportHandle + 22) = PrimaryMiniportHandle;
  }
  else
  {
    v4 = -1073741637;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x62u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, MiniportHandle, PrimaryMiniportHandle);
  NdisTraceLoggingRareMiniportPath((const struct _TlgProvider_t *)MiniportHandle);
  return v4;
}
