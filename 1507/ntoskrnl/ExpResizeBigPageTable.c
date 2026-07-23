/*
 * XREFs of ExpResizeBigPageTable @ 0x140118C5C
 * Callers:
 *     ExpAddTagForBigPages @ 0x140046960 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x140118C5C (ExpResizeBigPageTable.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     ExpResizeBigPageTable @ 0x140118C5C (ExpResizeBigPageTable.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  ULONG_PTR PoolPages; // rbx
  __int64 result; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // r11
  __int64 Number; // rcx
  __int64 v22; // rbp
  int v23; // r10d
  int *v24; // rcx
  int v25; // eax
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
  v11 = (unsigned int)(v4 - 1);
  v12 = &v37[3 * v3];
  v31 = (__int64)v12;
  if ( v37 != v12 )
  {
    do
    {
      if ( (*v10 & 1) == 0 )
      {
        v13 = (unsigned int)v11 & ((40543 * (unsigned int)(*v10 >> 12)) ^ ((40543
                                                                          * (unsigned __int64)(unsigned int)(*v10 >> 12)) >> 32));
        if ( (*(_BYTE *)(PoolPages + 24 * v13) & 1) == 0 )
        {
          do
          {
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 > (unsigned int)v11 )
              v13 = 0LL;
          }
          while ( (*(_BYTE *)(PoolPages + 24 * v13) & 1) == 0 );
          v12 = (_QWORD *)v31;
        }
        v14 = 3 * v13;
        *(_OWORD *)(PoolPages + 8 * v14) = *(_OWORD *)v10;
        *(_QWORD *)(PoolPages + 8 * v14 + 16) = v10[2];
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
LABEL_43:
      v15 = PoolBigPageTable;
      LODWORD(v11) = v27 - 1;
      goto LABEL_18;
    }
    if ( (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v29, v11) )
    {
      v27 = PoolBigPageTableSize;
      goto LABEL_43;
    }
    MiFreePoolPages((_SLIST_ENTRY *)PoolPages, v6, 1819242320);
    return 0LL;
  }
  v15 = PoolPages;
LABEL_18:
  v16 = (unsigned int)v11 & ((40543 * (unsigned int)(PoolPages >> 12)) ^ ((40543
                                                                         * (unsigned __int64)(unsigned int)(PoolPages >> 12)) >> 32));
  if ( (*(_QWORD *)(v15 + 24 * v16) & 1) == 0 )
  {
    do
    {
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 > (unsigned int)v11 )
        v16 = 0LL;
    }
    while ( (*(_QWORD *)(v15 + 24 * v16) & 1) == 0 );
    PoolPages = v32;
  }
  v17 = 3 * v16;
  strcpy((char *)(v15 + 8 * v17 + 8), "Pool");
  *(_QWORD *)(v15 + 8 * v17) = PoolPages;
  v18 = (unsigned __int8)*(_DWORD *)(v15 + 8 * v17 + 12) | 0x20000;
  *(_QWORD *)(v15 + 8 * v17 + 16) = v6;
  *(_DWORD *)(v15 + 8 * v17 + 12) = v18;
  _InterlockedAdd(&ExpPoolBigEntriesInUse, 1u);
  _InterlockedExchangeAdd(&dword_140367FC8, v6 >> 12);
  _InterlockedExchangeAdd64(qword_140367FD0, v6);
  _InterlockedAdd(&dword_140367FC0, 1u);
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
  v19 = PoolTrackTableMask;
  v20 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v22 = PoolTrackTableMask & 0x40DEDA5;
  v32 = PoolTrackTableMask;
  v31 = PoolTrackTableSize;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v35 = PoolTrackTableMask & 0x40DEDA5;
  v24 = (int *)*(&ExPoolTagTables + Number);
  v30 = v24;
  while ( 1 )
  {
    v25 = v24[10 * v22];
    if ( v25 == 1819242320 )
      break;
    if ( v25 )
    {
LABEL_28:
      v22 = v19 & (unsigned int)(v22 + 1);
      if ( (_DWORD)v22 == v23 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
        goto LABEL_35;
      }
    }
    else
    {
      v28 = *(_DWORD *)(PoolTrackTable + 40 * v22);
      if ( v28 )
      {
        v24[10 * v22] = v28;
      }
      else
      {
        if ( (unsigned int)v22 == v20 - 1 )
          goto LABEL_28;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v22) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v22) = 1819242320;
          v30[10 * v22] = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v24 = v30;
        v19 = v32;
        v23 = v35;
        v20 = v31;
      }
    }
  }
  _InterlockedIncrement(&v24[10 * v22 + 1]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v24[10 * v22 + 4], v6);
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
