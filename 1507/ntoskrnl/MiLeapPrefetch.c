/*
 * XREFs of MiLeapPrefetch @ 0x14015C0CC
 * Callers:
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x140219414 (MiPrefetchJumpVad.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  char v8; // al
  __int64 Process; // rdi
  ULONG_PTR v10; // rsi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int16 v17; // ax
  _DWORD *v18; // rdx
  signed __int32 v19; // ett
  _QWORD *i; // rax
  __int64 j; // r8
  _QWORD *v22; // rax
  unsigned __int64 v23; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( a2 )
  {
LABEL_60:
    v22 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v23 = *v22 & 0xFFFFFFFFFFFFF000uLL;
    if ( v4 < v23 || v4 >= v23 + (((*(_DWORD *)v22 & 0xFFF) + v22[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
LABEL_57:
      ++a1[3];
      a1[4] = 0LL;
    }
    else
    {
      a1[4] = (v4 - v23) >> 12;
    }
    return 1LL;
  }
  v6 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v6 > (unsigned __int64)MmHighestUserAddress )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  v8 = BYTE4(CurrentThread[1].Queue);
  if ( v8 < 0 || (v8 & 3) != 0 )
    return 1LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(Process + 872, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(Process + 872), 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)(Process + 872)) )
  {
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    BYTE4(CurrentThread[1].Queue) |= 2u;
    CurrentIrql = 17;
  }
  else
  {
    if ( v10 )
      KeAbPostReleaseEx(Process + 872, v10);
    v17 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v18 = (_DWORD *)(Process + 1272);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(Process + 1272);
    }
    else
    {
      _m_prefetchw(v18);
      v19 = *v18 & 0x7FFFFFFF;
      if ( v19 != _InterlockedCompareExchange(v18, v19 + 1, v19) )
        ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(Process + 1272));
    }
  }
  if ( (*(_DWORD *)(Process + 772) & 0x20) == 0 && *(_QWORD *)(Process + 1568) )
  {
    v12 = *(_QWORD *)(Process + 1544);
    v13 = v6 >> 12;
    while ( 1 )
    {
      v15 = v12;
      if ( !v12 )
        goto LABEL_55;
      if ( v13 < (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
      {
        v14 = *(_QWORD *)v12;
      }
      else
      {
        if ( v13 <= (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) )
        {
          if ( CurrentIrql == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Process + 1272, retaddr);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)(Process + 1272), 0xBFFFFFFF);
              _InterlockedDecrement((volatile signed __int32 *)(Process + 1272));
            }
            __writecr8(CurrentIrql);
          }
          return 1LL;
        }
        v14 = *(_QWORD *)(v12 + 8);
      }
      if ( !v14 )
        break;
      v12 = v14;
    }
    if ( (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) < v13 )
    {
      v15 = *(_QWORD *)(v12 + 8);
      if ( v15 )
      {
        for ( i = *(_QWORD **)v15; i; i = (_QWORD *)*i )
          v15 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(v12 + 16); ; j = *(_QWORD *)(v15 + 16) )
        {
          v15 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v15 || *(_QWORD *)v15 == v12 )
            break;
          v12 = v15;
        }
      }
      if ( !v15 )
      {
LABEL_55:
        if ( CurrentIrql == 17 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Process + 1272, retaddr);
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)(Process + 1272), 0xBFFFFFFF);
            _InterlockedDecrement((volatile signed __int32 *)(Process + 1272));
          }
          __writecr8(CurrentIrql);
        }
        goto LABEL_57;
      }
    }
    v4 = (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12;
    if ( CurrentIrql == 17 )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Process + 1272, retaddr);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(Process + 1272), 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)(Process + 1272));
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_60;
  }
  if ( CurrentIrql == 17 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(Process + 1272, retaddr);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(Process + 1272), 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)(Process + 1272));
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
