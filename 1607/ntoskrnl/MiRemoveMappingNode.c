/*
 * XREFs of MiRemoveMappingNode @ 0x14011103C
 * Callers:
 *     MmFreeMappingAddress @ 0x14052C764 (MmFreeMappingAddress.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
  v4 = ExAcquireSpinLockExclusive(&dword_1403275A8);
  v5 = (_QWORD *)qword_1403275B0;
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
  RtlAvlRemoveNode(&qword_1403275B0, (__int64)v5);
  ExReleaseSpinLockExclusive(&dword_1403275A8, v7);
  return v5;
}
