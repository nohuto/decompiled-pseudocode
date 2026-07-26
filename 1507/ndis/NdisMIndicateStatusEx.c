/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C0018460
 * Callers:
 *     NdisFOidRequest @ 0x1C0004DC0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C00186D0 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C0041AD0 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C0041D20 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0042B00 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C0058440 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C005A2DC (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005A680 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C005AA8C (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C005AC38 (ndisMResetMiniportInternal.c)
 *     ndisIndicatePMCapabilities @ 0x1C00C9C28 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00CA9E0 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00CB25C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00CB45C (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5B90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = 136LL * *(int *)(*((_QWORD *)MiniportAdapterHandle + 477) + 904LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 674),
    MiniportAdapterHandle,
    StatusIndication);
}
