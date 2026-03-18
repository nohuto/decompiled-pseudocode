/*
 * XREFs of CmpLockTwoKcbsShared @ 0x1404C6EF0
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     CmpLockTableAdd @ 0x1401DFF3C (CmpLockTableAdd.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 */

void __fastcall CmpLockTwoKcbsShared(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  v5 = a1;
  if ( !a1 )
  {
    if ( !a2 )
      return;
    v5 = a2;
LABEL_4:
    if ( (*(_DWORD *)(v5 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v5 + 64) = CmpLockTableAdd(v5, 0);
    v6 = KeAbPreAcquire(v5 + 48, 0LL, 0LL, a4);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 48), 17LL, 0LL) )
      goto LABEL_7;
    goto LABEL_25;
  }
  if ( !a2 )
    goto LABEL_4;
  v8 = *(_DWORD *)(a1 + 4);
  v9 = *(unsigned int *)(a2 + 4);
  v10 = ((unsigned int)v9 >> 21) & 0x3FF;
  v11 = (v8 >> 21) & 0x3FF;
  if ( v11 > v10 )
  {
    CmpLockKcbShared(a2, v9, a3, a4);
    goto LABEL_27;
  }
  if ( v11 < v10 || v5 < a2 )
  {
    CmpLockKcbShared(v5, v9, a3, a4);
    CmpLockKcbShared(a2, v14, v15, v16);
    return;
  }
  if ( v5 <= a2 )
  {
LABEL_27:
    CmpLockKcbShared(v5, v9, a3, a4);
    return;
  }
  if ( (v9 & 0x100000) != 0 )
    *(_DWORD *)(a2 + 64) = CmpLockTableAdd(a2, 0);
  v12 = KeAbPreAcquire(a2 + 48, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a2 + 48), v12, a2 + 48, v13);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 56));
  if ( (*(_DWORD *)(v5 + 4) & 0x100000) != 0 )
    *(_DWORD *)(v5 + 64) = CmpLockTableAdd(v5, 0);
  v6 = KeAbPreAcquire(v5 + 48, 0LL, 0LL, v13);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 48), 17LL, 0LL) )
    goto LABEL_7;
LABEL_25:
  ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 48), v6, v5 + 48, v7);
LABEL_7:
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 56));
}
