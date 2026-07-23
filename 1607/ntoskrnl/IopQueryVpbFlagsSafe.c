/*
 * XREFs of IopQueryVpbFlagsSafe @ 0x140007848
 * Callers:
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
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
