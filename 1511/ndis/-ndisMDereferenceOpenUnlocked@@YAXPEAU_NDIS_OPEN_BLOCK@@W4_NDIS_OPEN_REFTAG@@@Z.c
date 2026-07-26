/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B444
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00059E8 (ndisQuerySetMiniportEx.c)
 *     ndisMOidRequest @ 0x1C000A1C0 (ndisMOidRequest.c)
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0038B2C (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C0038D00 (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C0041EA0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C00421E0 (ndisMDirectOidRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C004D030 (NdisMCoOidRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C00512B0 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C00521B0 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C0055D10 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 *     ndisNotifyAfRegistration @ 0x1C00ED410 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00EE7B0 (ndisMFinishQueuedPendingOpen.c)
 *     NdisMCoRequestComplete @ 0x1C00F3630 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F37F0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C000B25C (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
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
