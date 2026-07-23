/*
 * XREFs of CmpLockTwoKcbsShared @ 0x140437AF0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401B50E8 (CmpLockTableAdd.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1405189D0 (CmpGetCorrectKcbLockOrder.c)
 */

void __fastcall CmpLockTwoKcbsShared(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  if ( a1 )
  {
    if ( !a2 || a1 == a2 )
    {
      CmpLockKcbShared(a1);
    }
    else
    {
      CmpGetCorrectKcbLockOrder(a1, a2, &v4, &v5);
      CmpLockKcbShared(v4);
      CmpLockKcbShared(v5);
    }
  }
  else if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 0x100000) != 0 )
      *(_DWORD *)(a2 + 60) = CmpLockTableAdd(a2, 0);
    v3 = KeAbPreAcquire(a2 + 40, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(a2 + 40), v3, a2 + 40);
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
  }
}
