/*
 * XREFs of KdEnableDebuggerWithLock @ 0x1401FDCD4
 * Callers:
 *     KdEnableDebugger @ 0x1401FDC58 (KdEnableDebugger.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     KdpRestoreAllBreakpoints @ 0x14072DCE4 (KdpRestoreAllBreakpoints.c)
 */

__int64 __fastcall KdEnableDebuggerWithLock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  int v4; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = 0;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  if ( a1 )
  {
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
  }
  v4 = KdDisableCount;
  if ( KdDisableCount )
  {
    --KdDisableCount;
    if ( v4 == 1 && KdPreviouslyEnabled )
    {
      if ( a1 )
      {
        KdPowerTransition(1LL);
        LOBYTE(KdDebuggerEnabled) = 1;
        KiDebugRoutine = (__int64 (*)(_DWORD, _DWORD, _DWORD, _DWORD, char, ...))KdpTrap;
        MEMORY[0xFFFFF780000002D4] = 1;
        KdpRestoreAllBreakpoints();
      }
      else
      {
        PoHiberInProgress = 1;
        KdInitSystem(0LL, 0LL);
        KdpRestoreAllBreakpoints();
        PoHiberInProgress = 0;
      }
    }
    if ( a1 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
      else
        _InterlockedAnd64(&KdDebuggerLock, 0LL);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( !a1 )
  {
    KdInitSystem(0LL, 0LL);
    return 0LL;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
  else
    _InterlockedAnd64(&KdDebuggerLock, 0LL);
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
