/*
 * XREFs of MiClearChildPartitionMdl @ 0x1401D9088
 * Callers:
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 */

__int64 __fastcall MiClearChildPartitionMdl(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rbp
  KIRQL v7; // al
  unsigned __int64 v8; // r11
  __int64 **v9; // r8
  int v10; // r10d
  unsigned __int64 v11; // rbx
  signed int v12; // ecx
  __int64 *v13; // rbx
  int v14; // edx
  unsigned __int64 v15; // r9
  __int64 *v16; // rcx
  __int64 *v17; // rcx

  v2 = (unsigned __int64 *)(a2 + 48);
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v6 = a2 + 48 + 8 * v5;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  *(_QWORD *)(a1 + 5712) -= v5;
  do
  {
    v8 = *v2;
    v9 = *(__int64 ***)(a1 + 48);
    while ( 2 )
    {
      v10 = 0;
      v11 = *((unsigned int *)v9 + 10);
      v12 = ((unsigned int)v11 >> 12) - 1;
      v13 = (__int64 *)&v9[(v11 >> 12) + 6];
      if ( v12 < 0 )
      {
LABEL_10:
        v16 = 0LL;
        goto LABEL_11;
      }
      while ( 1 )
      {
        v14 = (v12 + v10) >> 1;
        v15 = (unsigned __int64)v9[v14 + 6] & 0x7FFFFFFFFFFFFFFFLL;
        if ( v8 < v15 )
        {
          if ( !v14 )
            goto LABEL_12;
          v12 = v14 - 1;
          goto LABEL_9;
        }
        if ( v8 <= v15 )
          break;
        v10 = v14 + 1;
LABEL_9:
        if ( v12 < v10 )
          goto LABEL_10;
      }
      v16 = (__int64 *)&v9[v14 + 6];
LABEL_11:
      if ( !v16 )
      {
LABEL_12:
        v9 = (__int64 **)*v9;
        continue;
      }
      break;
    }
    *v16 |= 0x8000000000000000uLL;
    ++v2;
    v17 = v16 + 1;
    if ( v2 == (unsigned __int64 *)v6 )
      break;
    do
    {
      if ( v17 == v13 )
        break;
      if ( *v2 != *v17 )
        break;
      ++v2;
      *v17++ |= 0x8000000000000000uLL;
    }
    while ( v2 != (unsigned __int64 *)v6 );
  }
  while ( v2 != (unsigned __int64 *)v6 );
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224), v7);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
