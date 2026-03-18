/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x1404C12B4
 * Callers:
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     ExDupHandleTable @ 0x14045E7E0 (ExDupHandleTable.c)
 *     ExpAllocateHandleTableEntry @ 0x14050DCD0 (ExpAllocateHandleTableEntry.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x14045F21C (ExpFreeTablePagedPool.c)
 *     ExpAllocateMidLevelTable @ 0x1404C1120 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1404C1184 (ExpAllocateTablePagedPool.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1404C1484 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x1404C15C8 (ExpAllocateLowLevelTable.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v10; // rax
  unsigned __int64 TablePagedPool; // r14
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 LowLevelTable; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*((_QWORD *)a1 + 1) & 3) == 0 )
  {
    v10 = ExpAllocateMidLevelTable((__int64)a1, &v18, *a1);
    if ( !v10 )
      return 0;
    v10[1] = *v10;
    *v10 = v4;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, (unsigned __int64)v10 | 1);
    goto LABEL_9;
  }
  if ( (a1[2] & 3) != 1 )
  {
    v13 = (unsigned int)v3 >> 19;
    if ( (unsigned int)v13 >= 0x80 )
      return 0;
    v14 = *(_QWORD *)(v4 + 8 * v13);
    v15 = (unsigned int)v13;
    if ( v14 )
    {
      LowLevelTable = ExpAllocateLowLevelTable(a1, *a1);
      v18 = LowLevelTable;
      v8 = LowLevelTable;
      if ( LowLevelTable )
      {
        *(_QWORD *)(v14 + 8LL * (((unsigned int)v3 >> 10) & 0x1FF)) = LowLevelTable;
        goto LABEL_6;
      }
      return 0;
    }
    v16 = ExpAllocateMidLevelTable((__int64)a1, &v18, *a1);
    if ( !v16 )
      return 0;
    *(_QWORD *)(v4 + 8 * v15) = v16;
LABEL_9:
    v8 = v18;
    goto LABEL_6;
  }
  v6 = (unsigned int)v3 >> 10;
  if ( (unsigned int)v6 >= 0x200 )
  {
    TablePagedPool = (unsigned __int64)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x400uLL);
    if ( !TablePagedPool )
      return 0;
    v12 = ExpAllocateMidLevelTable((__int64)a1, &v18, v3);
    if ( !v12 )
    {
      ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), (void *)TablePagedPool, 0x400uLL);
      return 0;
    }
    *(_QWORD *)TablePagedPool = v4;
    *(_QWORD *)(TablePagedPool + 8) = v12;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
    goto LABEL_9;
  }
  v18 = ExpAllocateLowLevelTable(a1, (unsigned int)v3);
  v8 = v18;
  if ( v18 )
  {
    *(_QWORD *)(v4 + 8 * v6) = v18;
LABEL_6:
    LOBYTE(v7) = a2 != 0;
    ExpInsertLowLevelTableIntoFreeList(a1, v8, a2, v7);
    return 1;
  }
  return 0;
}
