/*
 * XREFs of MiDeleteControlAreaList @ 0x1401DEA38
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140141554 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteControlArea @ 0x1400A4F50 (MiDeleteControlArea.c)
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
