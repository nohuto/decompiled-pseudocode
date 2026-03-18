/*
 * XREFs of IopReferenceVerifyVpb @ 0x1401C539C
 * Callers:
 *     IoVerifyVolume @ 0x140623CF0 (IoVerifyVolume.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x14000758C (IoAcquireVpbSpinLock.c)
 *     IopIncrementVpbRefCount @ 0x140007888 (IopIncrementVpbRefCount.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

char __fastcall IopReferenceVerifyVpb(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  char v6; // di
  ULONG_PTR v7; // rcx
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  IoAcquireVpbSpinLock(&OldIrql);
  v7 = *(_QWORD *)(a1 + 56);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( v7 && (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    *a3 = *(_QWORD *)(v7 + 8);
    v6 = 1;
    *a2 = v7;
    IopIncrementVpbRefCount(v7, 0);
  }
  KeReleaseQueuedSpinLock(9uLL, OldIrql);
  return v6;
}
