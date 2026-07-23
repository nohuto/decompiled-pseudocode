/*
 * XREFs of ExGetBigPoolInfo @ 0x1402621DC
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1406EDFF0 (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall ExGetBigPoolInfo(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v4; // esi
  _SLIST_ENTRY *PoolPages; // rdi
  unsigned __int64 v6; // r12
  _DWORD *v7; // r13
  _DWORD *v8; // rax
  unsigned __int8 CurrentIrql; // r14
  signed __int8 v10; // cf
  const void *v11; // rdx
  unsigned __int64 v12; // rsi
  size_t v14; // rsi
  _SLIST_ENTRY *Next; // r8
  unsigned __int64 v16; // rsi
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-88h]
  unsigned int v20; // [rsp+24h] [rbp-84h]
  int v21; // [rsp+28h] [rbp-80h]
  int v22; // [rsp+2Ch] [rbp-7Ch]
  _SLIST_ENTRY *i; // [rsp+30h] [rbp-78h]
  _DWORD *v24; // [rsp+38h] [rbp-70h]
  unsigned __int64 v25; // [rsp+40h] [rbp-68h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = a3;
  PoolPages = 0LL;
  v6 = 0LL;
  v20 = 0;
  v25 = 0LL;
  if ( a3 == 1 )
  {
    v7 = a1;
    v19 = 8;
    v8 = a1 + 2;
  }
  else
  {
    v7 = a1 + 3;
    v19 = 16;
    v8 = a1 + 4;
  }
  v24 = v8;
  if ( a2 )
    *v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpLargePoolTableLock);
  }
  else
  {
    v22 = 0;
    v10 = _interlockedbittestandset(&ExpLargePoolTableLock, 0x1Fu);
    if ( v10 )
      v22 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpLargePoolTableLock);
    while ( (ExpLargePoolTableLock & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (ExpLargePoolTableLock & 0x40000000) == 0 )
        _InterlockedCompareExchange(&ExpLargePoolTableLock, ExpLargePoolTableLock | 0x40000000, ExpLargePoolTableLock);
      v18 = v22 + 1;
      v22 = v18;
      if ( (v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
  }
  while ( 1 )
  {
    if ( v4 == 1 )
    {
      v11 = (const void *)PoolBigPageTable;
      v12 = PoolBigPageTableSize;
    }
    else
    {
      v11 = (const void *)MEMORY[0xFFFFF90000001F00];
      v12 = MEMORY[0xFFFFF90000001F08];
    }
    if ( !v11 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
      else
        ExpLargePoolTableLock = 0;
      __writecr8(CurrentIrql);
      if ( PoolPages )
        MiFreePoolPages(PoolPages, v6, 1819242320);
      *a4 = 0;
      return v20;
    }
    if ( PoolPages && v25 >= v12 )
    {
      v14 = 24 * v12;
      memmove(PoolPages, v11, v14);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
      else
        ExpLargePoolTableLock = 0;
      __writecr8(CurrentIrql);
      for ( i = PoolPages; i < (_SLIST_ENTRY *)((char *)PoolPages + v14); i = (_SLIST_ENTRY *)((char *)i + 24) )
      {
        Next = i->Next;
        if ( ((__int64)i->Next & 1) == 0 )
        {
          if ( a2 )
            ++*v7;
          v19 += 24;
          if ( v19 < 0x18 )
          {
            v20 = -1073741675;
            break;
          }
          if ( v19 <= a2 )
          {
            if ( a2 )
            {
              *(_QWORD *)v24 = Next;
              if ( a3 == 1 && (*((_DWORD *)&i->Next + 3) & 0x100) == 0 )
                *(_QWORD *)v24 = (unsigned __int64)Next | 1;
              v24[4] = *(_DWORD *)(&i->Next + 1) & 0x7FFFFFFF;
              *((_QWORD *)v24 + 1) = i[1].Next;
              v24 += 6;
            }
          }
          else
          {
            v20 = -1073741820;
          }
        }
      }
      MiFreePoolPages(PoolPages, v6, 1819242320);
      *a4 = v19;
      return v20;
    }
    v25 = v12;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    else
      ExpLargePoolTableLock = 0;
    __writecr8(CurrentIrql);
    v16 = 24 * v12;
    if ( PoolPages )
      MiFreePoolPages(PoolPages, v6, 1819242320);
    PoolPages = (_SLIST_ENTRY *)MiAllocatePoolPages(0x200u, v16);
    if ( !PoolPages )
      return 3221225626LL;
    v6 = v16;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpLargePoolTableLock);
    }
    else
    {
      v21 = 0;
      v10 = _interlockedbittestandset(&ExpLargePoolTableLock, 0x1Fu);
      if ( v10 )
        v21 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpLargePoolTableLock);
      while ( (ExpLargePoolTableLock & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (ExpLargePoolTableLock & 0x40000000) == 0 )
          _InterlockedCompareExchange(&ExpLargePoolTableLock, ExpLargePoolTableLock | 0x40000000, ExpLargePoolTableLock);
        v17 = v21 + 1;
        v21 = v17;
        if ( (v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
    }
    v4 = a3;
  }
}
