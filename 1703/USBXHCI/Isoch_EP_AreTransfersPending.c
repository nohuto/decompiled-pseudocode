/*
 * XREFs of Isoch_EP_AreTransfersPending @ 0x1C00279B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Isoch_EP_AreTransfersPending(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 88);
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_BYTE *)(v2 + 96) = v3;
  LOBYTE(v2) = *(_QWORD *)(v2 + 336) != v2 + 336;
  KeReleaseSpinLock(v1, v3);
  return v2;
}
