/*
 * XREFs of ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0003024
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C00036D0 (ndisQuerySetMiniportEx.c)
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 *     ndisAllocateReceiveQueue @ 0x1C003787C (ndisAllocateReceiveQueue.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0037E38 (ndisDereferenceReceiveFilter.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003800C (ndisDereferenceReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C0039558 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C00407A0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0040AE0 (ndisMDirectOidRequest.c)
 *     NdisMCoOidRequestComplete @ 0x1C004C7F0 (NdisMCoOidRequestComplete.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0050D10 (ndisMSendPacketCompleteToOpen.c)
 *     ndisSendCompleteWithPause @ 0x1C0051DE0 (ndisSendCompleteWithPause.c)
 *     ?ndisUnbindAdapterWorkItem@@YAXPEAX@Z @ 0x1C0055E70 (-ndisUnbindAdapterWorkItem@@YAXPEAX@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 *     ndisNotifyAfRegistration @ 0x1C00F3430 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F4650 (ndisMFinishQueuedPendingOpen.c)
 *     NdisMCoRequestComplete @ 0x1C00F9630 (NdisMCoRequestComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00F97F0 (ndisCoIndicateStatusInternal.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenUnlocked(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // r15
  bool v5; // zf
  bool v6; // bl

  v1 = *(_QWORD *)(a1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  v4 = v3;
  *(_DWORD *)(v1 + 1856) = 1442229;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  ndisDereferenceWithTag(*(_QWORD *)(a1 + 688));
  v5 = (*(_DWORD *)(a1 + 228))-- == 1;
  v6 = v5;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 696));
  if ( v6 )
    ndisMFinishClose(a1);
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
}
