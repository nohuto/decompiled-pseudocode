/*
 * XREFs of MiHotAddPartitionMemory @ 0x1406606BC
 * Callers:
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     RtlAreBitsClearEx @ 0x140211DE8 (RtlAreBitsClearEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140661218 (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiHotAddPartitionMemory(__int16 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned int v3; // esi
  int updated; // ebx
  __int16 *v7; // r14
  __int64 result; // rax
  unsigned int v9; // r14d
  int v10; // r12d
  unsigned __int64 v11; // r15
  __int16 *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  PVOID *v15; // rax
  int v16; // r15d
  PVOID *v17; // rdi
  PVOID *v18; // rax
  PVOID *v19; // rsi
  PVOID *v20; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int16 *v23[8]; // [rsp+40h] [rbp-40h] BYREF
  PVOID *v25; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  memset(v23, 0, 0x38uLL);
  v25 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    updated = -1073741727;
LABEL_3:
    v7 = a1;
LABEL_4:
    MiFreePartitionTree(v7, (unsigned __int64 *)&v25, 0);
    return (unsigned int)updated;
  }
  v9 = *(_DWORD *)(a3 + 4);
  v10 = *(_BYTE *)a3 & 1;
  *(_QWORD *)(a3 + 8) = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = *a2;
      if ( *a2 < v11 )
        break;
      v14 = a2[1];
      v11 = v14 + v13;
      if ( v14 + v13 <= v13 || (__int16 *)((char *)v12 + v14) <= v12 )
        break;
      v12 = (__int16 *)((char *)v12 + v14);
      if ( !(unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)&v25, v13, v14, 0) )
      {
        updated = -1073741670;
        goto LABEL_3;
      }
      ++v3;
      a2 += 2;
      if ( v3 >= v9 )
        goto LABEL_13;
    }
    updated = -1073741811;
    goto LABEL_3;
  }
LABEL_13:
  v7 = a1;
  updated = MiUpdatePartitionLargePfnBitMap(a1, &v25);
  if ( updated < 0 )
    goto LABEL_4;
  updated = 0;
  if ( v10 )
  {
    v15 = v25;
    v16 = 0;
    v17 = 0LL;
    v23[0] = a1;
    while ( v15 )
    {
      v17 = v15;
      v15 = (PVOID *)*v15;
    }
    while ( v17 )
    {
      v18 = (PVOID *)v17[1];
      v19 = v17;
      v20 = v17;
      if ( v18 )
      {
        do
        {
          v17 = v18;
          v18 = (PVOID *)*v18;
        }
        while ( v18 );
      }
      else
      {
        while ( 1 )
        {
          v17 = (PVOID *)((unsigned __int64)v17[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v17 || *v17 == v20 )
            break;
          v20 = v17;
        }
      }
      if ( v16 == 1 )
      {
        RtlAvlRemoveNode((unsigned __int64 *)&v25, (__int64)v19);
        ExFreePoolWithTag(v19[5], 0);
        ExFreePoolWithTag(v19, 0);
      }
      else
      {
        MiActOnPartitionNodePages((__int64)v19, 8, v23);
        if ( SHIDWORD(v23[2]) < 0 )
        {
          v16 = 1;
          if ( RtlAreBitsClearEx((__int64)(v19 + 4), 0LL, 0x40000uLL) )
            v17 = v19;
        }
      }
    }
    v12 = v23[5];
    if ( !v23[5] )
      goto LABEL_4;
  }
  if ( (*(_DWORD *)a3 & 2) == 0 )
    LODWORD(v22) = v22 | 1;
  v21[0] = &v25;
  MiInsertPartitionPages((__int16 *)MiSystemPartition, (__int64)a1, (unsigned __int64)v21);
  result = 0LL;
  *(_QWORD *)(a3 + 8) = v12;
  return result;
}
