/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x140661218
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(__int16 *a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int16 *v12[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v12[1], 0, 0x30uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v12[0] = a1;
  MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  v6 = *a2;
  v7 = 0LL;
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v7 )
  {
    v8 = (_QWORD *)v7[1];
    v9 = (__int64)v7;
    v10 = v7;
    if ( v8 )
    {
      do
      {
        v7 = v8;
        v8 = (_QWORD *)*v8;
      }
      while ( v8 );
    }
    else
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v7 || (_QWORD *)*v7 == v10 )
          break;
        v10 = v7;
      }
    }
    MiActOnPartitionNodePages(v9, 2, v12);
    if ( SHIDWORD(v12[2]) < 0 )
    {
      v5 = HIDWORD(v12[2]);
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  return v5;
}
