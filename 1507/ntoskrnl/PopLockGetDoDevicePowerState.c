/*
 * XREFs of PopLockGetDoDevicePowerState @ 0x14023B14C
 * Callers:
 *     PiControlGetDevicePowerData @ 0x1406943EC (PiControlGetDevicePowerData.c)
 *     NtGetDevicePowerState @ 0x1406B83F4 (NtGetDevicePowerState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PopLockGetDoDevicePowerState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PopIrpSerialLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopIrpSerialLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopIrpSerialLock);
  }
  v3 = (*(_DWORD *)(a1 + 16) >> 4) & 0xF;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopIrpSerialLock, retaddr);
  else
    _InterlockedAnd64(&PopIrpSerialLock, 0LL);
  __writecr8(CurrentIrql);
  return v3;
}
