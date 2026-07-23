/*
 * XREFs of ExpResizeBigPageTable @ 0x14009CF9C
 * Callers:
 *     ExpAddTagForBigPages @ 0x140012050 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpResizeBigPageTable @ 0x14009CF9C (ExpResizeBigPageTable.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     memset @ 0x140171AC0 (memset.c)
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
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r9d
  __int64 v21; // r11
  __int64 Number; // rcx
  __int64 v23; // rbp
  int v24; // r10d
  int *v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  int v28; // r8d
  _QWORD *v29; // [rsp+30h] [rbp-58h] BYREF
  int *v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+48h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  int v34; // [rsp+90h] [rbp+8h]
  int v35; // [rsp+90h] [rbp+8h]
  _QWORD *v37; // [rsp+A8h] [rbp+20h]

  *a3 = 0LL;
  v34 = a1 & 0x20;
  v29 = 0LL;
  if ( (a1 & 0x20) != 0 )
  {
    v3 = *(_QWORD *)(qword_140326958 + 8080);
    v37 = *(_QWORD **)(qword_140326958 + 8072);
    v30 = (int *)(qword_140326958 + 7936);
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
  PoolPages = MiAllocatePoolPages(512LL, v6);
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
        v13 = v11 & ((40543 * (unsigned int)(*v10 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(*v10 >> 12)) >> 32));
        if ( (*(_BYTE *)(PoolPages + 24 * v13) & 1) == 0 )
        {
          do
          {
            v13 = (unsigned int)(v13 + 1);
            if ( (unsigned int)v13 > v11 )
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
  if ( v30 == &ExpPoolBigEntriesInUse )
  {
    v16 = PoolPages;
    goto LABEL_19;
  }
  v15 = PoolBigPageTableSize;
  if ( ExpPoolBigEntriesInUse == PoolBigPageTableSize )
  {
    if ( (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v29) )
    {
      v15 = PoolBigPageTableSize;
      goto LABEL_18;
    }
    MiFreePoolPages((unsigned __int64 *)PoolPages, v6);
    return 0LL;
  }
LABEL_18:
  v16 = PoolBigPageTable;
  v11 = v15 - 1;
LABEL_19:
  v17 = v11 & ((40543 * (unsigned int)(PoolPages >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(PoolPages >> 12)) >> 32));
  if ( (*(_QWORD *)(v16 + 24 * v17) & 1) == 0 )
  {
    do
    {
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 > v11 )
        v17 = 0LL;
    }
    while ( (*(_QWORD *)(v16 + 24 * v17) & 1) == 0 );
    PoolPages = v32;
  }
  v18 = 3 * v17;
  strcpy((char *)(v16 + 8 * v18 + 8), "Pool");
  *(_QWORD *)(v16 + 8 * v18) = PoolPages;
  v19 = (unsigned __int8)*(_DWORD *)(v16 + 8 * v18 + 12) | 0x20000;
  *(_QWORD *)(v16 + 8 * v18 + 16) = v6;
  *(_DWORD *)(v16 + 8 * v18 + 12) = v19;
  _InterlockedAdd(&ExpPoolBigEntriesInUse, 1u);
  _InterlockedAdd(&dword_14033B940, 1u);
  _InterlockedExchangeAdd64(&qword_14033B950, (int)(v6 >> 12));
  _InterlockedExchangeAdd64(&qword_14033B958, v6);
  if ( v34 )
  {
    *(_QWORD *)(qword_140326958 + 8072) = PoolPages;
    *(_QWORD *)(qword_140326958 + 8080) = v4;
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
  v20 = PoolTrackTableMask;
  v21 = PoolTrackTableSize;
  Number = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask & 0x40DEDA5;
  v32 = PoolTrackTableMask;
  v31 = PoolTrackTableSize;
  v24 = PoolTrackTableMask & 0x40DEDA5;
  v35 = PoolTrackTableMask & 0x40DEDA5;
  v25 = (int *)*(&ExPoolTagTables + Number);
  v30 = v25;
  while ( 1 )
  {
    v26 = v25[10 * v23];
    if ( v26 == 1819242320 )
      break;
    if ( v26 )
    {
LABEL_29:
      v23 = v20 & (unsigned int)(v23 + 1);
      if ( (_DWORD)v23 == v24 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v6, 0x200u);
        goto LABEL_36;
      }
    }
    else
    {
      v28 = *(_DWORD *)(PoolTrackTable + 40 * v23);
      if ( v28 )
      {
        v25[10 * v23] = v28;
      }
      else
      {
        if ( (unsigned int)v23 == v21 - 1 )
          goto LABEL_29;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 40 * v23) )
        {
          *(_DWORD *)(PoolTrackTable + 40 * v23) = 1819242320;
          v30[10 * v23] = 1819242320;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v25 = v30;
        v20 = v32;
        v24 = v35;
        v21 = v31;
      }
    }
  }
  _InterlockedIncrement(&v25[10 * v23 + 1]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[10 * v23 + 4], v6);
LABEL_36:
  v27 = v37;
  if ( v37 )
    *v37 = v29;
  else
    v27 = v29;
  result = 1LL;
  *a3 = v27;
  return result;
}
