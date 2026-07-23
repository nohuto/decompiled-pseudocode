/*
 * XREFs of MiDeleteControlAreaList @ 0x1401DE864
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x1400A34C8 (MiDeleteControlArea.c)
 */

void __fastcall MiDeleteControlAreaList(__int64 a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  _QWORD *v4; // rbx

  v2 = (volatile LONG *)(a1 + 1664);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *(_QWORD **)(a1 + 1616);
    if ( v4 )
      *(_QWORD *)(a1 + 1616) = *v4;
    ExReleaseSpinLockExclusive(v2, v3);
    if ( !v4 )
      break;
    MiDeleteControlArea((__int64)v4);
  }
}
