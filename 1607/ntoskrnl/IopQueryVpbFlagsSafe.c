/*
 * XREFs of IopQueryVpbFlagsSafe @ 0x1400076D8
 * Callers:
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x14000758C (IoAcquireVpbSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopQueryVpbFlagsSafe(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 v3; // rax
  KIRQL Irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  IoAcquireVpbSpinLock(&Irql);
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
    v2 = *(_WORD *)(v3 + 4);
  KeReleaseQueuedSpinLock(9uLL, Irql);
  return v2;
}
