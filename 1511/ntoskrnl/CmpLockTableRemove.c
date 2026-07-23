/*
 * XREFs of CmpLockTableRemove @ 0x1401AA120
 * Callers:
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpUnlockTwoKcbs @ 0x1403FDDA0 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall CmpLockTableRemove(__int64 a1, int a2)
{
  _SLIST_HEADER *v4; // rcx
  __int64 v5; // r11
  int v6; // r10d
  __int64 v7; // rdi
  unsigned __int64 Region; // rax
  int v9; // edx
  __int64 v10; // r8
  unsigned __int64 *p_Region; // rcx
  _SLIST_ENTRY *v12; // rdx

  v4 = CmpLockTable;
  v5 = a1 | 1;
  v6 = -1;
  v7 = *((int *)&CmpLockTable[1].HeaderX64 + 1);
  if ( (struct _KTHREAD *)CmpLockTable[a2 + 2].Alignment != KeGetCurrentThread()
    || (Region = CmpLockTable[a2 + 2].Region, Region != a1) && Region != v5
    || (v6 = a2, a2 == -1) )
  {
    v9 = 0;
    v10 = 0LL;
    if ( (int)v7 >= 0 )
    {
      p_Region = &CmpLockTable[2].Region;
      while ( (struct _KTHREAD *)*(p_Region - 1) != KeGetCurrentThread() || *p_Region != a1 && *p_Region != v5 )
      {
        ++v9;
        ++v10;
        p_Region += 2;
        if ( v10 > v7 )
          goto LABEL_13;
      }
      v6 = v9;
LABEL_13:
      v4 = CmpLockTable;
    }
  }
  v12 = (_SLIST_ENTRY *)&v4[v6 + 2];
  v4[v6 + 2].Region = 0LL;
  v12->Next = 0LL;
  return RtlpInterlockedPushEntrySList(v4, v12);
}
