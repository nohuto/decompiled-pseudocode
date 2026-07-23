/*
 * XREFs of MiDeleteEmptySubsections @ 0x14008FAE0
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReduceUnusedSubsectionCount @ 0x14008FC84 (MiReduceUnusedSubsectionCount.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // r14
  _QWORD *v5; // rdx
  KIRQL v6; // si
  _QWORD *v7; // rdi
  __int64 v8; // r12
  void *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx

  v1 = (volatile LONG *)(a1 + 1664);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
  v4 = (_QWORD *)(a1 + 1576);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    v6 = v3;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = v5 - 10;
    v8 = *(v5 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
    {
      if ( (*((_BYTE *)v7 + 34) & 8) != 0 )
      {
        v9 = (void *)v7[1];
        v10 = v7 + 10;
        v7[1] = 0LL;
        v11 = v7[10];
        v12 = (_QWORD *)v7[11];
        if ( *(_QWORD **)(v11 + 8) != v7 + 10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *((_WORD *)v7 + 17) &= ~8u;
        v7[11] = v7 + 10;
        *v10 = v10;
        MiReduceUnusedSubsectionCount(v7);
      }
      else
      {
        v9 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72), v6);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      ExReleaseSpinLockExclusive(v1, v6);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1264) = 0LL;
  ExReleaseSpinLockExclusive(v1, v3);
}
