/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00184DC
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000A5C0 (ndisQuerySetMiniportEx.c)
 *     ndisMOidRequest @ 0x1C000C910 (ndisMOidRequest.c)
 *     ndisAllocateReceiveQueue @ 0x1C003C4EC (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C003CAA8 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003CC7C (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C00459A0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0045CE0 (ndisMDirectOidRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C0051A90 (NdisMCoOidRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0055E80 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C0056D80 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C005A500 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00F2BA8 (ndisHandleProtocolReconfigNotification.c)
 *     ndisNotifyAfRegistration @ 0x1C00F4100 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F5440 (ndisMFinishQueuedPendingOpen.c)
 *     NdisMCoRequestComplete @ 0x1C00F9620 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97E0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017670 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  KIRQL v5; // al
  KIRQL v6; // bl

  v2 = *(_QWORD *)(a1 + 16);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  v6 = v5;
  *(_DWORD *)(v2 + 1856) = 1442229;
  ndisMDereferenceOpenLocked(a1, a2);
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
}
