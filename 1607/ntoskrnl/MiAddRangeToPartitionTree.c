/*
 * XREFs of MiAddRangeToPartitionTree @ 0x1401F0BB8
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x1401F0B10 (MiAddMdlToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 *PoolWithTag; // rdi
  PVOID v13; // rbx
  __int64 v14; // r14
  __int64 *v15; // rbx
  _QWORD *v16; // rdx
  bool v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v23; // [rsp+38h] [rbp-40h]
  int v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v4 = a3;
  v6 = a2 & 0x7FFFFFFFFFFC0000LL | v23 & 0x8000000000000000uLL;
  v7 = a2;
  v8 = (((a3 + a2 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) - (a2 & 0x7FFFFFFFFFFC0000LL)) >> 18;
  if ( !v8 )
    return 1LL;
  while ( 2 )
  {
    v9 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_9;
    v10 = v6 & 0x7FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v11 = v9[3] & 0x7FFFFFFFFFFFFFFFLL;
      if ( v10 < v11 )
      {
        v9 = (_QWORD *)*v9;
        goto LABEL_8;
      }
      if ( v10 <= v11 )
        break;
      v9 = (_QWORD *)v9[1];
LABEL_8:
      if ( !v9 )
        goto LABEL_9;
    }
    if ( v9 )
    {
      v15 = v9 + 3;
      v14 = (__int64)(v9 + 4);
      v19 = v9[3];
      if ( (v19 & 0x8000000000000000uLL) == 0 || a4 != 1 )
        *v15 = v19 & 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_25;
    }
LABEL_9:
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x7070694Du);
    if ( PoolWithTag )
    {
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x8000uLL, 0x6270694Du);
      if ( v13 )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        memset(v13, 0, 0x8000uLL);
        v14 = (__int64)(PoolWithTag + 4);
        PoolWithTag[5] = (__int64)v13;
        v15 = PoolWithTag + 3;
        PoolWithTag[4] = 0x40000LL;
        PoolWithTag[3] ^= (v6 ^ PoolWithTag[3]) & 0x7FFFFFFFFFFFFFFFLL;
        if ( v24 == 1 )
          *v15 |= 0x8000000000000000uLL;
        v16 = (_QWORD *)*a1;
        v17 = 0;
        if ( *a1 )
        {
          while ( 1 )
          {
            if ( (*v15 & 0x7FFFFFFFFFFFFFFFuLL) < (v16[3] & 0x7FFFFFFFFFFFFFFFuLL) )
            {
              v18 = (_QWORD *)*v16;
              if ( !*v16 )
              {
                v17 = 0;
                break;
              }
            }
            else
            {
              v18 = (_QWORD *)v16[1];
              if ( !v18 )
              {
                v17 = 1;
                break;
              }
            }
            v16 = v18;
          }
        }
        RtlAvlInsertNodeEx(a1, (unsigned __int64)v16, v17, (unsigned __int64)PoolWithTag);
LABEL_25:
        v20 = *v15 & 0x7FFFFFFFFFFFFFFFLL;
        v21 = v20 - v7 + 0x40000;
        if ( v21 > v4 )
          v21 = v4;
        RtlSetBitsEx(v14, v7 - v20, v21);
        a4 = v24;
        v7 += v21;
        v4 -= v21;
        v6 ^= (v6 ^ (v6 + 0x40000)) & 0x7FFFFFFFFFFFFFFFLL;
        if ( !--v8 )
          return 1LL;
        continue;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    return 0LL;
  }
}
