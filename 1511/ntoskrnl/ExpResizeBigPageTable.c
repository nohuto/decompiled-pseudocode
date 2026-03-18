/*
 * XREFs of ExpResizeBigPageTable @ 0x140104978
 * Callers:
 *     ExpAddTagForBigPages @ 0x140041A10 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x140104978 (ExpResizeBigPageTable.c)
 * Callees:
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140104978 (ExpResizeBigPageTable.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 PoolPages; // rbx
  __int64 result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  unsigned int v11; // r9d
  _QWORD *v12; // r10
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r9d
  __int64 v18; // r11
  __int64 Number; // rcx
  __int64 v20; // rbp
  int v21; // r10d
  int *v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  int v27; // ecx
  int v28; // r8d
  _QWORD *v29; // [rsp+30h] [rbp-58h] BYREF
  int *v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+48h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v34; // [rsp+90h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+8h]
  _QWORD *v37; // [rsp+A8h] [rbp+20h]

  v29 = 0LL;
  v34 = a1 & 0x20;
  *a3 = 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    v3 = MEMORY[0xFFFFF90000001F08];
    v37 = (_QWORD *)MEMORY[0xFFFFF90000001F00];
    v30 = (int *)0xFFFFF90000001E80LL;
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v3 = PoolBigPageTableSize;
    v37 = (_QWORD *)PoolBigPageTable;
    v30 = &ExpPoolBigEntriesInUse;
  }
  if ( v3 )
  {
    v4 = 2 * v3;
    if ( 2 * v3 <= v3 || v4 > 0xAAAAAAAAAAAAAAALL )
      return 0LL;
    v5 = 48 * v3;
  }
  else
  {
    v4 = 512LL;
    v5 = 12288LL;
  }
  if ( v5 >= v5 + 4095 )
    return 0LL;
  v6 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  PoolPages = MiAllocatePoolPages(0x200u, v6);
  v32 = PoolPages;
  result = 0LL;
  if ( !PoolPages )
    return result;
  memset((void *)PoolPages, 0, v6);
  v9 = (_QWORD *)PoolPages;
  do
  {
    *v9 = 1LL;
    v9 += 3;
  }
  while ( v9 != (_QWORD *)(PoolPages + 24 * v4) );
  v10 = v37;
  v11 = v4 - 1;
  v12 = &v37[3 * v3];
  v31 = (__int64)v12;
  if ( v37 != v12 )
  {
    do
    {
      if ( (*v10 & 1) == 0 )
      {
        v24 = v11 & ((40543 * (unsigned int)(*v10 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(*v10 >> 12)) >> 32));
        if ( (*(_BYTE *)(PoolPages + 24 * v24) & 1) == 0 )
        {
          do
          {
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 > v11 )
              v24 = 0LL;
          }
          while ( (*(_BYTE *)(PoolPages + 24 * v24) & 1) == 0 );
          v12 = (_QWORD *)v31;
        }
        v25 = 3 * v24;
        *(_OWORD *)(PoolPages + 8 * v25) = *(_OWORD *)v10;
        *(_QWORD *)(PoolPages + 8 * v25 + 16) = v10[2];
      }
      v10 += 3;
    }
    while ( v10 != v12 );
  }
  if ( v30 != &ExpPoolBigEntriesInUse )
  {
    v27 = PoolBigPageTableSize;
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize )
    {
LABEL_48:
      v13 = PoolBigPageTable;
      v11 = v27 - 1;
      goto LABEL_16;
    }
    if ( (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v29) )
    {
      v27 = PoolBigPageTableSize;
      goto LABEL_48;
    }
    MiFreePoolPages(PoolPages, v6);
    return 0LL;
  }
  v13 = PoolPages;
LABEL_16:
  v14 = v11 & ((40543 * (unsigned int)(PoolPages >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(PoolPages >> 12)) >> 32));
  if ( (*(_QWORD *)(v13 + 24 * v14) & 1) == 0 )
  {
    do
    {
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 > v11 )
        v14 = 0LL;
    }
    while ( (*(_QWORD *)(v13 + 24 * v14) & 1) == 0 );
    PoolPages = v32;
  }
  v15 = 3 * v14;
  strcpy((char *)(v13 + 8 * v15 + 8), "Pool");
  *(_QWORD *)(v13 + 8 * v15) = PoolPages;
  v16 = (unsigned __int8)*(_DWORD *)(v13 + 8 * v15 + 12) | 0x20000;
  *(_QWORD *)(v13 + 8 * v15 + 16) = v6;
  *(_DWORD *)(v13 + 8 * v15 + 12) = v16;
  _InterlockedAdd(&ExpPoolBigEntriesInUse, 1u);
  _InterlockedExchangeAdd(&dword_140317C88, v6 >> 12);
  _InterlockedExchangeAdd64(&qword_140317C90, v6);
  _InterlockedAdd(&dword_140317C80, 1u);
  if ( v34 )
  {
    MEMORY[0xFFFFF90000001F00] = PoolPages;
    MEMORY[0xFFFFF90000001F08] = v4;
  }
  else
  {
    PoolBigPageTable = PoolPages;
    PoolBigPageTableSize = v4;
  }
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(3616, 512, 1819242320, PoolPages, v6);
  v17 = PoolTrackTableMask;
  v18 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v20 = PoolTrackTableMask & 0x40DEDA5;
  v32 = PoolTrackTableMask;
  v31 = PoolTrackTableSize;
  v21 = PoolTrackTableMask & 0x40DEDA5;
  v35 = PoolTrackTableMask & 0x40DEDA5;
  v22 = (int *)*(&ExPoolTagTables + Number);
  v30 = v22;
  while ( 1 )
  {
    v23 = v22[10 * v20];
    if ( v23 == 1819242320 )
      break;
    if ( v23 )
    {
LABEL_26:
      v20 = v17 & (unsigned int)(v20 + 1);
      if ( (_DWORD)v20 == v21 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
        goto LABEL_35;
      }
    }
    else
    {
      v28 = *(_DWORD *)(PoolTrackTable + 40 * v20);
      if ( v28 )
      {
        v22[10 * v20] = v28;
      }
      else
      {
        if ( (unsigned int)v20 == v18 - 1 )
          goto LABEL_26;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v20) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v20) = 1819242320;
          v30[10 * v20] = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v22 = v30;
        v17 = v32;
        v21 = v35;
        v18 = v31;
      }
    }
  }
  _InterlockedIncrement(&v22[10 * v20 + 1]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v22[10 * v20 + 4], v6);
LABEL_35:
  v26 = v37;
  if ( v37 )
    *v37 = v29;
  else
    v26 = v29;
  result = 1LL;
  *a3 = v26;
  return result;
}
