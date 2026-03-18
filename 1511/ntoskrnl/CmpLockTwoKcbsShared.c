/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1403FD8E0
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmEnumerateKey @ 0x1403FDED0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpLockTableAdd @ 0x1401A9FF0 (CmpLockTableAdd.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 */

void __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rsi

  v3 = a1;
  if ( !a1 )
  {
    if ( !a2 )
      return;
    v3 = a2;
LABEL_4:
    if ( (*(_DWORD *)(v3 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v3 + 64) = CmpLockTableAdd(v3, 0);
    v4 = KeAbPreAcquire(v3 + 48, 0LL, 0LL);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 48), 17LL, 0LL) )
      goto LABEL_7;
    goto LABEL_25;
  }
  if ( !a2 )
    goto LABEL_4;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = (v6 >> 21) & 0x3FF;
  v8 = (v5 >> 21) & 0x3FF;
  if ( v8 > v7 )
  {
    CmpLockKcbShared(a2);
    goto LABEL_27;
  }
  if ( v8 < v7 || v3 < a2 )
  {
    CmpLockKcbShared(v3);
    CmpLockKcbShared(a2);
    return;
  }
  if ( v3 <= a2 )
  {
LABEL_27:
    CmpLockKcbShared(v3);
    return;
  }
  if ( (v6 & 0x100000) != 0 )
    *(_DWORD *)(a2 + 64) = CmpLockTableAdd(a2, 0);
  v9 = KeAbPreAcquire(a2 + 48, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a2 + 48), v9, a2 + 48);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 56));
  if ( (*(_DWORD *)(v3 + 4) & 0x100000) != 0 )
    *(_DWORD *)(v3 + 64) = CmpLockTableAdd(v3, 0);
  v4 = KeAbPreAcquire(v3 + 48, 0LL, 0LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 48), 17LL, 0LL) )
    goto LABEL_7;
LABEL_25:
  ExfAcquirePushLockSharedEx((unsigned __int64 *)(v3 + 48), v4, v3 + 48);
LABEL_7:
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 56));
}
