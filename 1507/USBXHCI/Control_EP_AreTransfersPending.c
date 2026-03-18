/*
 * XREFs of Control_EP_AreTransfersPending @ 0x1C0020FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Control_EP_AreTransfersPending(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  __int64 v4; // rbx

  v1 = (KSPIN_LOCK *)(a1 + 88);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_BYTE *)(a1 + 96) = v3;
  v4 = *(_QWORD *)(a1 + 296);
  KeReleaseSpinLock(v1, v3);
  return v4 != 0;
}
