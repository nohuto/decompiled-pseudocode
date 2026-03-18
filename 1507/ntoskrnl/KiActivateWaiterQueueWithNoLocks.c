/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x14000C528
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14000A02C (KiPriQueueThreadPriorityChanged.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiSwitchQueue @ 0x1401229BC (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x14012EFC4 (KiSwitchPriQueue.c)
 * Callees:
 *     KiActivateWaiterKQueue @ 0x14000C6D8 (KiActivateWaiterKQueue.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiActivateWaiterPriQueue @ 0x140119EAC (KiActivateWaiterPriQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _DWORD *v5; // rdi
  __int64 result; // rax
  signed __int32 v7; // ett
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (_DWORD *)((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  }
  else
  {
    _m_prefetchw(v5);
    v7 = *v5 & 0x7FFFFFFF;
    result = (unsigned int)_InterlockedCompareExchange(v5, v7 + 1, v7);
    if ( v7 != (_DWORD)result )
      result = ExpWaitForSpinLockSharedAndAcquire((char *)&KiObjectRundownLocks + 64 * ((a2 >> 4) & 0x3F));
  }
  v8 = *(volatile signed __int32 **)(a1 + 232);
  if ( v8 )
  {
    v9 = 0;
    while ( _interlockedbittestandset(v8, 7u) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*v8 & 0x80u) != 0 );
    }
    result = *(_QWORD *)(a1 + 232);
    if ( !result )
    {
      _InterlockedAnd(v8, 0xFFFFFF7F);
      v8 = 0LL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v5, retaddr);
  }
  else
  {
    _InterlockedAnd(v5, 0xBFFFFFFF);
    _InterlockedDecrement(v5);
  }
  if ( v8 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      {
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
          {
            if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v10);
          }
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v8[v11 + 134]);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement(v8 + 10);
      }
      v12 = *a3;
      v13 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v13 != a3 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      return KiActivateWaiterPriQueue(v8);
    else
      return KiActivateWaiterKQueue(v8);
  }
  return result;
}
