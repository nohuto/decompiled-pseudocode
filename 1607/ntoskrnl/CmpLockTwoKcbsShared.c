/*
 * XREFs of CmpLockTwoKcbsShared @ 0x140438C20
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmEnumerateKey @ 0x1404390C0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1404A01C8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FF9F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401B5204 (CmpLockTableAdd.c)
 *     CmpLockKcbShared @ 0x140435440 (CmpLockKcbShared.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1404A05C4 (CmpGetCorrectKcbLockOrder.c)
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
