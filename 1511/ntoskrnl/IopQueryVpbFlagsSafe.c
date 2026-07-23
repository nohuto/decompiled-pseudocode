/*
 * XREFs of IopQueryVpbFlagsSafe @ 0x1400D0AD4
 * Callers:
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireVpbSpinLock @ 0x1400D0DAC (IoAcquireVpbSpinLock.c)
 */

__int64 __fastcall IopQueryVpbFlagsSafe(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 v3; // rax
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  IoAcquireVpbSpinLock(&Irql);
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
    v2 = *(_WORD *)(v3 + 4);
  KeReleaseQueuedSpinLock(9uLL, Irql);
  return v2;
}
