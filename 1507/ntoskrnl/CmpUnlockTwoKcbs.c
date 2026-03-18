/*
 * XREFs of CmpUnlockTwoKcbs @ 0x1404C6A80
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401E006C (CmpLockTableRemove.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockTwoKcbs(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // rcx
  signed __int64 v5; // rax
  __int64 v6; // rtt
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  char *v10; // rcx

  v3 = a1;
  if ( !a1 )
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
    if ( *(struct _KTHREAD **)(v3 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v3 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
    _m_prefetchw((const void *)(v3 + 48));
    v5 = *(_QWORD *)(v3 + 48);
    if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = v5 - 16;
    if ( (v5 & 2) != 0
      || (v6 = *(_QWORD *)(v3 + 48), v6 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 48), v4, v5)) )
    {
      ExfReleasePushLock((_QWORD *)(v3 + 48), v5 & 0xFFFFFFFFFFFFFFF0uLL);
    }
    KeAbPostRelease(v3 + 48);
    if ( (*(_DWORD *)(v3 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(v3, *(_DWORD *)(v3 + 64));
    if ( (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock((PVOID)v3);
    return;
  }
  v7 = *(_DWORD *)(a1 + 4);
  v8 = (*(_DWORD *)(a2 + 4) >> 21) & 0x3FF;
  v9 = (v7 >> 21) & 0x3FF;
  if ( v9 < v8 )
    goto LABEL_16;
  if ( v9 > v8 )
  {
    CmpUnlockKcb((char *)v3);
    CmpUnlockKcb((char *)a2);
    return;
  }
  if ( v3 < a2 )
  {
LABEL_16:
    CmpUnlockKcb((char *)a2);
    CmpUnlockKcb((char *)v3);
    return;
  }
  v10 = (char *)v3;
  if ( v3 > a2 )
  {
    CmpUnlockKcb((char *)v3);
    v10 = (char *)a2;
  }
  CmpUnlockKcb(v10);
}
