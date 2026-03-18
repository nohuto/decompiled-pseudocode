/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1403FDDA0
 * Callers:
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 */

void __fastcall CmpUnlockTwoKcbs(char *P, char *a2)
{
  char *v3; // rbx
  signed __int64 v4; // rcx
  signed __int64 v5; // rax
  __int64 v6; // rtt
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  char *v10; // rcx

  v3 = P;
  if ( !P )
  {
    if ( !a2 )
      return;
    v3 = a2;
    goto LABEL_4;
  }
  if ( !a2 )
  {
LABEL_4:
    v4 = 0LL;
    if ( *((struct _KTHREAD **)v3 + 7) == KeGetCurrentThread() )
      *((_QWORD *)v3 + 7) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)v3 + 14);
    _m_prefetchw(v3 + 48);
    v5 = *((_QWORD *)v3 + 6);
    if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v5 - 16;
    if ( (v5 & 2) != 0
      || (v6 = *((_QWORD *)v3 + 6), v6 != _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 6, v4, v5)) )
    {
      ExfReleasePushLock((_QWORD *)v3 + 6);
    }
    KeAbPostRelease((ULONG_PTR)(v3 + 48));
    if ( (*((_DWORD *)v3 + 1) & 0x100000) != 0 )
      CmpLockTableRemove((__int64)v3, *((_DWORD *)v3 + 16));
    if ( (*((_DWORD *)v3 + 1) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((unsigned __int64)v3);
    return;
  }
  v7 = *((_DWORD *)P + 1);
  v8 = (*((_DWORD *)a2 + 1) >> 21) & 0x3FF;
  v9 = (v7 >> 21) & 0x3FF;
  if ( v9 < v8 )
    goto LABEL_16;
  if ( v9 > v8 )
  {
    CmpUnlockKcb(v3);
    CmpUnlockKcb(a2);
    return;
  }
  if ( v3 < a2 )
  {
LABEL_16:
    CmpUnlockKcb(a2);
    CmpUnlockKcb(v3);
    return;
  }
  v10 = v3;
  if ( v3 > a2 )
  {
    CmpUnlockKcb(v3);
    v10 = a2;
  }
  CmpUnlockKcb(v10);
}
