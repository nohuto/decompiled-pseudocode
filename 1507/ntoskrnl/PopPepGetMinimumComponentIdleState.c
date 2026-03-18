/*
 * XREFs of PopPepGetMinimumComponentIdleState @ 0x14023B754
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepGetMinimumComponentIdleState(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  char v4; // bl
  __int64 v5; // r13
  int v8; // r14d
  _DWORD *v9; // rdi
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v11; // ett
  bool v12; // bp
  unsigned int v13; // edx
  unsigned int v14; // r8d
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = a2;
  v8 = 1 << a3;
  v9 = (_DWORD *)(a1 + 64);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    _m_prefetchw(v9);
    v11 = *v9 & 0x7FFFFFFF;
    if ( v11 != _InterlockedCompareExchange(v9, v11 + 1, v11) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(a1 + 64));
  }
  v12 = *(_DWORD *)(a1 + 160) == 2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 64, retaddr);
  }
  else
  {
    _InterlockedAnd(v9, 0xBFFFFFFF);
    _InterlockedDecrement(v9);
  }
  __writecr8(CurrentIrql);
  if ( v12 )
  {
    v13 = 0;
    v14 = *(_DWORD *)(200 * v5 + a1 + 364);
    if ( v14 )
    {
      do
      {
        if ( (v8 & *(_DWORD *)(*(_QWORD *)(200 * v5 + a1 + 368) + 24LL * v13 + 16)) == 0 )
          break;
        ++v13;
      }
      while ( v13 < v14 );
    }
    if ( v13 < v14 )
    {
      *a4 = v13;
      return 1;
    }
  }
  return v4;
}
