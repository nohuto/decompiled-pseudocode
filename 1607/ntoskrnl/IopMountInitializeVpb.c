/*
 * XREFs of IopMountInitializeVpb @ 0x140007960
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     IopIncrementVpbRefCount @ 0x1400079F8 (IopIncrementVpbRefCount.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

ULONG_PTR __fastcall IopMountInitializeVpb(__int64 a1, __int64 a2, int a3, char a4)
{
  ULONG_PTR v8; // rbx
  KIRQL OldIrql; // [rsp+48h] [rbp+20h] BYREF

  IoAcquireVpbSpinLock(&OldIrql);
  v8 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(v8 + 4) = 1;
  if ( a3 )
    *(_WORD *)(v8 + 4) = 17;
  if ( a4 )
    *(_WORD *)(v8 + 4) |= 0x20u;
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + 76LL) = *(_BYTE *)(a2 + 76) + 1;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 312LL) + 72LL) = v8;
  IopIncrementVpbRefCount(v8);
  KeReleaseQueuedSpinLock(9uLL, OldIrql);
  return v8;
}
