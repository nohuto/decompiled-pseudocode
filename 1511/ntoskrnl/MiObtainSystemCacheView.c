/*
 * XREFs of MiObtainSystemCacheView @ 0x1400B1590
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x14053263C (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400073F4 (MiCompareTbFlushTimeStamp.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     RemoveListHeadPte @ 0x1400B1A94 (RemoveListHeadPte.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14012D628 (MiWaitForSystemCacheViewFlush.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT @ 0x1401D574C (MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 MiObtainSystemCacheView()
{
  struct _KLOCK_QUEUE_HANDLE *v0; // rbp
  unsigned int v1; // r14d
  __int64 CurrentIrql; // rsi
  unsigned __int64 v3; // r12
  __int64 v4; // r15
  unsigned int v5; // r13d
  __int64 v6; // rcx
  int v7; // r12d
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rdi
  _KPROCESS *v10; // rdx
  unsigned __int8 v12; // di
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  struct _KLOCK_QUEUE_HANDLE *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // rdi
  signed __int64 v27; // rax
  signed __int32 v28[16]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp+0h] BYREF

  v0 = (struct _KLOCK_QUEUE_HANDLE *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( !(unsigned int)MiChargeWsles((ULONG_PTR)&dword_1402FF880, 64LL, 0LL) )
    return 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 20LL;
  *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0;
  v1 = 0;
  *(_WORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) = 0;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1402FE9E8, v0 + 1);
  v3 = ((unsigned __int64)&qword_1402FE9D0 >> 9) & 0x7FFFFFFFF8LL;
  if ( (unsigned __int64)qword_1402FE9D0 >> 28 != (__int64)(v3 - qword_1402FE9E0 - 0x98000000000LL) >> 3 )
  {
LABEL_5:
    v4 = RemoveListHeadPte(&qword_1402FE9D0);
    MI_INCREMENT_SYSTEM_CACHE_VIEW_COUNT(v4 << 25 >> 16);
    v5 = 1;
    v6 = *(_QWORD *)(v4 + 24) >> 28;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v7 = 1;
        goto LABEL_32;
      }
      _InterlockedOr(v28, 0);
      v13 = (KiTbFlushTimeStamp - (*(_QWORD *)(v4 + 16) >> 28)) & 0xFFFFF;
      if ( v13 <= 2 && ((*(_QWORD *)(v4 + 16) & 0x10000000LL) != 0 || v13 < 2) )
      {
        v14 = v4;
        v15 = (__int64 *)(v4 + 24);
        do
        {
          if ( *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) )
          {
            v16 = v1++;
            *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0 + 8 * v16) = v14;
          }
          v17 = v14 << 25 >> 16;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v17;
          MiInsertTbFlushEntry((__int64)&v0[2], v17, 64LL, 0);
          *v15 = *(_DWORD *)v15 & 0xFFFFFFF | 0x10000000LL;
          if ( v1 == 12 )
            break;
          v18 = *(_QWORD *)v14 >> 28;
          if ( v18 == (__int64)(v3 - qword_1402FE9E0 - 0x98000000000LL) >> 3 )
            break;
          v14 = qword_1402FE9E0 + 8 * v18;
          v15 = (__int64 *)(v14 + 24);
        }
        while ( (*(_QWORD *)(v14 + 24) & 0xFFFFFFFFF0000000uLL) == 0x20000000 );
      }
    }
    v7 = 0;
LABEL_32:
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v0[1]);
    if ( !*(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) )
    {
LABEL_52:
      __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
      if ( v7 == 1 )
        MiWaitForSystemCacheViewFlush(v4);
      *(_QWORD *)v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4) )
        MiWritePteShadow(v4, 0LL);
      *(_QWORD *)(v4 + 8) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4 + 8) )
        MiWritePteShadow(v4 + 8, 0LL);
      *(_QWORD *)(v4 + 16) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4 + 16) )
        MiWritePteShadow(v4 + 16, 0LL);
      *(_QWORD *)(v4 + 24) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4 + 24) )
        MiWritePteShadow(v4 + 24, 0LL);
      return v4;
    }
    v20 = qword_1402FE720;
    if ( (*(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 2) != 0 )
    {
      v21 = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    }
    else
    {
      v21 = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[2].ActiveProcessors.Bitmap[12] )
      {
        if ( !Process->SecurePid )
          goto LABEL_39;
        if ( (_DWORD)v21 != 1 )
        {
LABEL_41:
          if ( *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x35)
            || *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) > v20 )
          {
            if ( (*(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 1) != 0 )
              KeFlushCurrentTbOnly(v21, Process, v20);
            else
              KeFlushTb(v21, v5);
            *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x35) = 0;
          }
          else
          {
            v22 = v0 + 3;
            v23 = (unsigned int)v21;
            v24 = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C);
            if ( (*(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x34) & 1) != 0 )
              KeFlushMultipleRangeCurrentTb(v24, v22, v23);
            else
              KeFlushMultipleRangeTb(v24, v22, v23, v5);
          }
          *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0;
          v25 = 0;
          *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
          if ( v1 )
          {
            do
            {
              v26 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0 + 8LL * v25);
              v27 = MI_READ_PTE_LOCK_FREE(v26 + 24);
              _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 24), v27 & 0xFFFFFFF, v27);
              ++v25;
            }
            while ( v25 != v1 );
          }
          goto LABEL_52;
        }
      }
      v20 = -1LL;
    }
LABEL_39:
    if ( (_DWORD)v21 == 1 )
      v5 = 0;
    goto LABEL_41;
  }
  while ( MiExpandSystemCache() )
  {
    if ( (unsigned __int64)qword_1402FE9D0 >> 28 != (__int64)(v3 - qword_1402FE9E0 - 0x98000000000LL) >> 3 )
      goto LABEL_5;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v0[1]);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (unsigned int)CcUnmapInactiveViews(64LL, 0LL, &v0->OldIrql) != 1 )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v12;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1402FE9E8, v0 + 1);
    if ( (unsigned __int64)qword_1402FE9D0 >> 28 == (__int64)(v3 - qword_1402FE9E0 - 0x98000000000LL) >> 3 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v0[1]);
      __writecr8(v12);
      MiChargeWsles((ULONG_PTR)&dword_1402FF880, -64LL, 0LL);
      return 0LL;
    }
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  v9 = (_QWORD *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiChargeWsles((ULONG_PTR)&dword_1402FF880, -64LL, 0LL);
  if ( (v9[3] & 0xFFFFFFFFF0000000uLL) == 0x20000000 && MiCompareTbFlushTimeStamp(v9[2] >> 28, 0xFFFFF) )
  {
    MiInsertTbFlushEntry((__int64)&v0[2], v8, 64LL, 0);
    MiFlushTbList((__int64)&v0[2], v10);
  }
  *v9 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v9) )
    MiWritePteShadow(v9, 0LL);
  v9[1] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v9 + 1) )
    MiWritePteShadow(v9 + 1, 0LL);
  v9[2] = 0LL;
  if ( (unsigned int)MiPteInShadowRange(v9 + 2) )
    MiWritePteShadow(v9 + 2, 0LL);
  return ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
