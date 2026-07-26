/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C0019ED0
 * Callers:
 *     NdisFOidRequest @ 0x1C000A750 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C000C910 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C0019700 (ndisOidPostPacketFilter.c)
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     ndisMResetCompleteStage2 @ 0x1C0023B9C (ndisMResetCompleteStage2.c)
 *     ndisOidPostLinkSpeed @ 0x1C00465B0 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C0046800 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C00475D0 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C005C8C0 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C005E698 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisIndicatePMCapabilities @ 0x1C00C82D8 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00C9720 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00CA02C (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00CA220 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00E5F90 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
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
