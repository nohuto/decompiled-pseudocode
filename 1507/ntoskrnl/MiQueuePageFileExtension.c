/*
 * XREFs of MiQueuePageFileExtension @ 0x140221F24
 * Callers:
 *     MiIssuePageExtendRequest @ 0x140221B0C (MiIssuePageExtendRequest.c)
 *     MiIssuePageExtendRequestNoWait @ 0x140221D54 (MiIssuePageExtendRequestNoWait.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiQueuePageFileExtension(_QWORD *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1[3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
    while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E740 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  v8 = *(_QWORD *)(v4 + 1256);
  v9 = a1 + 1;
  a1[1] = v8;
  a1[2] = v4 + 1256;
  if ( *(_QWORD *)(v8 + 8) != v4 + 1256 )
    __fastfail(3u);
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)(v4 + 1256) = v9;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
  else
    dword_14034E740 = 0;
  __writecr8(CurrentIrql);
  return KeReleaseSemaphoreEx(v4 + 1224, 0, 1, a4, a2);
}
