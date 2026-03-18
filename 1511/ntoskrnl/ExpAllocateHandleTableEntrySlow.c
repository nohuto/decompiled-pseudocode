/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C
 * Callers:
 *     ExDupHandleTable @ 0x1403E2B60 (ExDupHandleTable.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ExpAllocateHandleTableEntry @ 0x140425030 (ExpAllocateHandleTableEntry.c)
 * Callees:
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1403E3198 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x1403E32DC (ExpAllocateLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x1404AE3D0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateMidLevelTable @ 0x1404B5F30 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1404B5F94 (ExpAllocateTablePagedPool.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, unsigned __int64 *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v9; // rbp
  __int64 TablePagedPool; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *LowLevelTable; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*((_QWORD *)a1 + 1) & 3) != 0 )
  {
    if ( (a1[2] & 3) == 1 )
    {
      v9 = (unsigned int)v3 >> 10;
      if ( (unsigned int)v9 >= 0x200 )
      {
        TablePagedPool = ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 1024LL);
        if ( TablePagedPool )
        {
          v11 = ExpAllocateMidLevelTable(a1, &LowLevelTable, v3);
          if ( v11 )
          {
            *(_QWORD *)TablePagedPool = v4;
            *(_QWORD *)(TablePagedPool + 8) = v11;
            _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
            goto LABEL_4;
          }
          ExpFreeTablePagedPool(*((struct _KPROCESS **)a1 + 2), (void *)TablePagedPool, 1024LL);
        }
      }
      else
      {
        LowLevelTable = ExpAllocateLowLevelTable((__int64)a1, *a1);
        v7 = LowLevelTable;
        if ( LowLevelTable )
        {
          *(_QWORD *)(v4 + 8 * v9) = LowLevelTable;
          goto LABEL_5;
        }
      }
    }
    else
    {
      v12 = (unsigned int)v3 >> 19;
      if ( (unsigned int)v12 < 0x80 )
      {
        v13 = *(_QWORD *)(v4 + 8 * v12);
        v14 = (unsigned int)v12;
        if ( v13 )
        {
          v16 = ExpAllocateLowLevelTable((__int64)a1, *a1);
          LowLevelTable = v16;
          v7 = v16;
          if ( v16 )
          {
            *(_QWORD *)(v13 + 8LL * (((unsigned int)v3 >> 10) & 0x1FF)) = v16;
            goto LABEL_5;
          }
        }
        else
        {
          v15 = ExpAllocateMidLevelTable(a1, &LowLevelTable, *a1);
          if ( v15 )
          {
            *(_QWORD *)(v4 + 8 * v14) = v15;
            goto LABEL_4;
          }
        }
      }
    }
  }
  else
  {
    v6 = ExpAllocateMidLevelTable(a1, &LowLevelTable, (unsigned int)v3);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 8) = *(_QWORD *)v6;
      *(_QWORD *)v6 = v4;
      _InterlockedExchange64((volatile __int64 *)a1 + 1, v6 | 1);
LABEL_4:
      v7 = LowLevelTable;
LABEL_5:
      ExpInsertLowLevelTableIntoFreeList((volatile signed __int32 *)a1, v7, a2, a2 != 0LL);
      return 1;
    }
  }
  return 0;
}
