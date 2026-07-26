/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C0019810
 * Callers:
 *     NdisFOidRequest @ 0x1C00068D0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000A1C0 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C0019A80 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C0043090 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C00432E0 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0044090 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C0058130 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C005A27C (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005A620 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA2C (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C005ABD8 (ndisMResetMiniportInternal.c)
 *     ndisIndicatePMCapabilities @ 0x1C00C3048 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00C3E00 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00C467C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00C487C (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00EF3B0 (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = 136LL * *(int *)(*((_QWORD *)MiniportAdapterHandle + 477) + 904LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 672),
    MiniportAdapterHandle,
    StatusIndication);
}
