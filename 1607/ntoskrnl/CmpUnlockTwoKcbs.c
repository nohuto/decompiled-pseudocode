/*
 * XREFs of CmpUnlockTwoKcbs @ 0x140437EA0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     CmpLockTableRemove @ 0x1401B5218 (CmpLockTableRemove.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1405189D0 (CmpGetCorrectKcbLockOrder.c)
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
