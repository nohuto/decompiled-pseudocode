/*
 * XREFs of MiRemoveMappingNode @ 0x140110AD8
 * Callers:
 *     MmFreeMappingAddress @ 0x14052C224 (MmFreeMappingAddress.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rbx
  ULONG_PTR v6; // r8
  KIRQL v7; // bp
  ULONG_PTR v8; // rcx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_140327568);
  v5 = (_QWORD *)qword_140327570;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v5 )
        KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
      v8 = v5[3];
      if ( v6 <= v8 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    if ( v6 >= v8 )
      break;
    v5 = (_QWORD *)*v5;
  }
  RtlAvlRemoveNode(&qword_140327570, (__int64)v5);
  ExReleaseSpinLockExclusive(&dword_140327568, v7);
  return v5;
}
