/*
 * XREFs of MiHotAddPartitionMemory @ 0x140624578
 * Callers:
 *     MiManagePartition @ 0x14062480C (MiManagePartition.c)
 * Callees:
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiAddPhysicalMemoryChunks @ 0x140622644 (MiAddPhysicalMemoryChunks.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(int *a1, __int64 *a2)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v7; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  _QWORD *v11; // rdx
  int v12; // ebp
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  _DWORD *v16; // r8
  _DWORD *v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2[1];
  v3 = 0LL;
  v4 = *a2;
  if ( !v2 )
  {
LABEL_12:
    v20 = *a2 << 12;
    v19 = a2[1] << 12;
    v12 = MiAddPhysicalMemoryChunks(a1, &v20, &v19);
    if ( v12 < 0 )
    {
      if ( v3 )
      {
        do
        {
          v13 = (_QWORD *)*v3;
          ExFreePoolWithTag(v3, 0);
          v3 = v13;
        }
        while ( v13 );
      }
      return (unsigned int)v12;
    }
    v14 = v19 / 4096;
    if ( v19 / 4096 == a2[1] || (v15 = 0LL, (v16 = v3) == 0LL) )
    {
LABEL_24:
      MiInsertPartitionPages(MiSystemPartition, (__int64)a1, (unsigned int *)v3, 0);
      a2[1] = v14;
      return (unsigned int)v12;
    }
    while ( 1 )
    {
      v17 = *(_DWORD **)v16;
      v18 = v15 + ((unsigned __int64)(unsigned int)v16[10] >> 12);
      if ( v18 <= v14 )
        goto LABEL_22;
      if ( v15 < v14 )
        break;
      ExFreePoolWithTag(v16, 0);
LABEL_23:
      v16 = v17;
      if ( !v17 )
        goto LABEL_24;
    }
    v16[10] = v14 - v15;
LABEL_22:
    v15 = v18;
    goto LABEL_23;
  }
LABEL_2:
  v7 = v2;
  if ( v2 > 0xFFFFF )
    v7 = 0xFFFFFLL;
  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v7 + 48, 0x69646D4Du);
    if ( PoolWithTag )
    {
      PoolWithTag[4] = 0LL;
      *((_DWORD *)PoolWithTag + 11) = 0;
      v2 -= v7;
      *PoolWithTag = v3;
      v3 = PoolWithTag;
      *((_DWORD *)PoolWithTag + 10) = (_DWORD)v7 << 12;
      *((_WORD *)PoolWithTag + 4) = 8 * ((((v7 << 12) + 4095) >> 12) + 6);
      *((_WORD *)PoolWithTag + 5) = 2;
      v11 = PoolWithTag + 6;
      do
      {
        *v11++ = v4++;
        --v7;
      }
      while ( v7 );
      if ( !v2 )
        goto LABEL_12;
      goto LABEL_2;
    }
    v7 >>= 1;
  }
  while ( v7 );
  if ( v3 )
  {
    do
    {
      v9 = (_QWORD *)*v3;
      ExFreePoolWithTag(v3, 0);
      v3 = v9;
    }
    while ( v9 );
  }
  return 3221225626LL;
}
