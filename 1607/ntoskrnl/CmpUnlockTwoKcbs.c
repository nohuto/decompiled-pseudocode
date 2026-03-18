/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140438FD0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1404A01C8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FF9F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401B5334 (CmpLockTableRemove.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1404A05C4 (CmpGetCorrectKcbLockOrder.c)
 */

void __fastcall CmpUnlockTwoKcbs(char *a1, unsigned __int64 a2)
{
  signed __int64 v3; // rcx
  bool v4; // si
  signed __int64 v5; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF
  PVOID v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != (char *)a2 )
      {
        CmpGetCorrectKcbLockOrder(a1, a2, &v7, &P);
        CmpUnlockKcb((char *)P);
        a1 = (char *)v7;
      }
    }
    CmpUnlockKcb(a1);
  }
  else if ( a2 )
  {
    v3 = 0LL;
    v4 = (*(_DWORD *)(a2 + 4) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(a2 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(a2 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 48));
    _m_prefetchw((const void *)(a2 + 40));
    v5 = *(_QWORD *)(a2 + 40);
    if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v5 - 16;
    if ( (v5 & 2) != 0 || v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), v3, v5) )
      ExfReleasePushLock((_QWORD *)(a2 + 40));
    KeAbPostRelease(a2 + 40);
    if ( (*(_DWORD *)(a2 + 4) & 0x100000) != 0 )
      CmpLockTableRemove(a2, *(_DWORD *)(a2 + 60));
    if ( v4 && (*(_DWORD *)(a2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(a2);
  }
}
