/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1C0025204
 * Callers:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C001354C (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A7BD4 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1C00DDD90 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
