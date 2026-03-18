/*
 * XREFs of KdAcquireDebuggerLock @ 0x1401FDAD0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 */

__int64 __fastcall KdAcquireDebuggerLock(_BYTE *a1)
{
  __int64 result; // rax

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  *a1 = result;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireSpinLockInstrumented(&KdDebuggerLock);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
    return KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KdDebuggerLock);
  return result;
}
