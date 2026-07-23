/*
 * XREFs of MiClearPartitionPageBitMap @ 0x1401F1074
 * Callers:
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  KIRQL v5; // al
  _QWORD *v6; // rcx
  KIRQL v7; // r15
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int16 *v13[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(&v13[1], 0, 0x30uLL);
  CurrentThread = KeGetCurrentThread();
  v13[3] = 0LL;
  v13[0] = (__int16 *)a1;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v6 = *a2;
  v7 = v5;
  v8 = 0LL;
  while ( v6 )
  {
    v8 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v8 )
  {
    v9 = (_QWORD *)v8[1];
    v10 = (__int64)v8;
    v11 = v8;
    if ( v9 )
    {
      do
      {
        v8 = v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v11 )
          break;
        v11 = v8;
      }
    }
    MiActOnPartitionNodePages(v10, 6, v13);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232), v7);
  MiFreePartitionTree(a1, &v13[3], 0LL);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
