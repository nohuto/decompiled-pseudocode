/*
 * XREFs of MiTrimSection @ 0x1400FA79C
 * Callers:
 *     MmTrimSection @ 0x1400F8B8C (MmTrimSection.c)
 *     MiTrimSharedPage @ 0x1400FA3E8 (MiTrimSharedPage.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     MiViewMayContainPage @ 0x1400FA970 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x1400FB898 (MiUnlockControlAreaFileObjectShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimSection(__int64 a1, int a2, int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v9; // r15
  _QWORD *v10; // rbp
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r9
  _DWORD *v14; // rbx
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v16; // ett
  _QWORD *i; // rbx
  _QWORD *MayContainPage; // rax
  _QWORD *j; // rbx
  _QWORD *v20; // rax
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v23; // [rsp+80h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 24);
  v23 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)v4;
  v6 = MiStartingOffset((__int64 *)v4, v23, 0xFFFFFFFF);
  v7 = MiStartingOffset(*(__int64 **)(a1 + 32), *(_QWORD *)(a1 + 16), 0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v9 = v7;
  v10 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v12 = KeAbPreAcquire(v5 + 112, 0LL, 0LL, v11);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 112), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 112), v12, v5 + 112, v13);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v14 = (_DWORD *)(v5 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v5 + 72);
  }
  else
  {
    _m_prefetchw(v14);
    v16 = *v14 & 0x7FFFFFFF;
    if ( v16 != _InterlockedCompareExchange(v14, v16 + 1, v16) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v5 + 72));
  }
  if ( *(_QWORD *)(v5 + 40) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5 + 72, retaddr);
    }
    else
    {
      _InterlockedAnd(v14, 0xBFFFFFFF);
      _InterlockedDecrement(v14);
    }
    __writecr8(CurrentIrql);
    if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 && *(_QWORD *)(v5 + 64) )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v4 + 34) & 8) == 0 )
        {
          for ( i = *(_QWORD **)(v4 + 80); i != (_QWORD *)(v4 + 80); i = (_QWORD *)*i )
          {
            MayContainPage = (_QWORD *)MiViewMayContainPage(v5, i, v6, v9 + 4096);
            if ( MayContainPage )
            {
              *MayContainPage = v10;
              v10 = MayContainPage;
            }
          }
        }
        if ( v4 == *(_QWORD *)(a1 + 32) )
          break;
        v4 = *(_QWORD *)(v4 + 16);
      }
    }
    for ( j = *(_QWORD **)(v5 + 8); j != (_QWORD *)(v5 + 8); j = (_QWORD *)*j )
    {
      v20 = (_QWORD *)MiViewMayContainPage(v5, j, v6, v9 + 4096);
      if ( v20 )
      {
        *v20 = v10;
        v10 = v20;
      }
    }
    MiUnlockControlAreaFileObjectShared(v5);
    return MiTrimSharedPageFromViews((_DWORD)v10, a2, a3, v5, v23);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5 + 72, retaddr);
    }
    else
    {
      _InterlockedAnd(v14, 0xBFFFFFFF);
      _InterlockedDecrement(v14);
    }
    __writecr8(CurrentIrql);
    MiUnlockControlAreaFileObjectShared(v5);
    return 0LL;
  }
}
