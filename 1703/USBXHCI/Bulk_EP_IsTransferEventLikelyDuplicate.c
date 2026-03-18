/*
 * XREFs of Bulk_EP_IsTransferEventLikelyDuplicate @ 0x1C002AAB0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002AFCC (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 */

char __fastcall Bulk_EP_IsTransferEventLikelyDuplicate(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  LOBYTE(a2) = Bulk_IsTransferEventLikelyDuplicate_Internal(a1, a2, a3);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return a2;
}
