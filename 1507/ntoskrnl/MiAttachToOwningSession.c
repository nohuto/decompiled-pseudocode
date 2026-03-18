/*
 * XREFs of MiAttachToOwningSession @ 0x1400FD2E0
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCapturePfnVm @ 0x140227228 (MiCapturePfnVm.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FD3FC (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MmAttachSession @ 0x1400FD5A0 (MmAttachSession.c)
 *     MiSelectSessionAttachProcess @ 0x1400FD6CC (MiSelectSessionAttachProcess.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

ULONG_PTR __fastcall MiAttachToOwningSession(__int64 a1, unsigned __int8 a2)
{
  __int64 TopLevelPfn; // rax
  __int64 v5; // r14
  unsigned int v6; // ebx
  ULONG_PTR v7; // r14
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int64 *v12; // [rsp+28h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+18h]

  TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
  if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v5 = *(_QWORD *)TopLevelPfn;
  if ( TopLevelPfn != a1 )
    _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = 0;
  if ( (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &v11) )
  {
    v7 = MiSelectSessionAttachProcess(v5);
    if ( a2 == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
        _m_prefetchw(&v11);
        v10 = v11;
        if ( !v11 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v12, 0LL, (signed __int64)&v11) == &v11 )
            return v7;
          v10 = KxWaitForLockChainValid(&v11);
        }
        v11 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
        return v7;
      }
      KiReleaseQueuedSpinLockInstrumented(&v11, retaddr);
      return v7;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v11, retaddr);
    }
    else
    {
      _m_prefetchw(&v11);
      v8 = v11;
      if ( !v11 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v12, 0LL, (signed __int64)&v11) == &v11 )
          goto LABEL_9;
        v8 = KxWaitForLockChainValid(&v11);
      }
      v11 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
    }
LABEL_9:
    __writecr8(a2);
    if ( v7 )
    {
      if ( (int)MmAttachSession(v7) >= 0 )
        return v7;
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
        while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      }
    }
    else
    {
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
        while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      }
    }
  }
  return 0LL;
}
