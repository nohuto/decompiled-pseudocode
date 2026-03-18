/*
 * XREFs of PopPepGetMinimumDevicePowerState @ 0x14023B858
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepGetMinimumDevicePowerState(_DWORD *a1, char a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v6; // r14d
  _DWORD *v7; // rdi
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v9; // ett
  bool v10; // bp
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v6 = 1 << a2;
  v7 = a1 + 16;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 16);
  }
  else
  {
    _m_prefetchw(v7);
    v9 = *v7 & 0x7FFFFFFF;
    if ( v9 != _InterlockedCompareExchange(v7, v9 + 1, v9) )
      ExpWaitForSpinLockSharedAndAcquire(a1 + 16);
  }
  v10 = a1[40] == 2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 16, retaddr);
  }
  else
  {
    _InterlockedAnd(v7, 0xBFFFFFFF);
    _InterlockedDecrement(v7);
  }
  __writecr8(CurrentIrql);
  if ( v10 )
  {
    v11 = a1 + 36;
    do
    {
      if ( (v6 & *v11) == 0 )
        break;
      ++v3;
      ++v11;
    }
    while ( v3 < 3 );
    v12 = v3 + 1;
    LOBYTE(v3) = 1;
    *a3 = v12;
  }
  return v3;
}
