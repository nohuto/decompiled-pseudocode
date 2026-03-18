/*
 * XREFs of PopDisksRegisteredForIdle @ 0x1400D1FA4
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 i; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (PopSimulate & 2) != 0 )
    return 1;
  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopDopeGlobalLock);
  }
  for ( i = PopIdleDetectList; (__int64 *)i != &PopIdleDetectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
  else
    _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
  __writecr8(CurrentIrql);
  return v0;
}
