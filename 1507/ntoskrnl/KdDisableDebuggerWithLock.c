/*
 * XREFs of KdDisableDebuggerWithLock @ 0x14017069C
 * Callers:
 *     KdDisableDebugger @ 0x140170694 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KdpAllowDisable @ 0x14072D334 (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x14072DEAC (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // di
  int v2; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KdDebuggerLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdDebuggerLock);
  }
  if ( KdDisableCount )
    goto LABEL_17;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled )
    goto LABEL_17;
  v2 = KdpAllowDisable();
  if ( v2 >= 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      MEMORY[0xFFFFF780000002D4] = 0;
      LOBYTE(KdDebuggerEnabled) = 0;
      KiDebugRoutine = (__int64 (*)(_DWORD, _DWORD, _DWORD, _DWORD, char, ...))KdpStub;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdPowerTransition(4LL);
    }
LABEL_17:
    ++KdDisableCount;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
    else
      _InterlockedAnd64(&KdDebuggerLock, 0LL);
    v2 = 0;
    goto LABEL_21;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
  else
    _InterlockedAnd64(&KdDebuggerLock, 0LL);
LABEL_21:
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
