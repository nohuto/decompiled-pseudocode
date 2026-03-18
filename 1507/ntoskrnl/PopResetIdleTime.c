/*
 * XREFs of PopResetIdleTime @ 0x14012DF68
 * Callers:
 *     PopSetSystemState @ 0x14012DEA8 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x14012DEE4 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14015A758 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1404E3E64 (PopPolicySystemIdle.c)
 *     PopIdleCheckForUserInput @ 0x1404E420C (PopIdleCheckForUserInput.c)
 *     PopInitSIdle @ 0x1405813E0 (PopInitSIdle.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PopResetIdleTime(unsigned int a1, __int64 a2)
{
  char v3; // di
  unsigned __int8 CurrentIrql; // si
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !PopPlatformAoAc || a1 - 3 > 1 )
    dword_14032E1A8 = 0;
  dword_14032E1D8 = 0;
  v3 = 0;
  if ( ((a1 - 3) & 0xFFFFFFFD) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PopIdleAoAcDozeS4Lock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopIdleAoAcDozeS4Lock);
    }
    if ( byte_14032E1DC )
    {
      KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer);
      byte_14032E1DC = 0;
      v3 = 1;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PopIdleAoAcDozeS4Lock, retaddr);
    else
      _InterlockedAnd64(&PopIdleAoAcDozeS4Lock, 0LL);
    __writecr8(CurrentIrql);
  }
  LOBYTE(a2) = v3;
  return PopTraceSystemIdleTimeReset(a1, a2);
}
