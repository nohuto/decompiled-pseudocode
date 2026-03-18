/*
 * XREFs of KdReleaseDebuggerLock @ 0x1401FDF04
 * Callers:
 *     <none>
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KdReleaseDebuggerLock(unsigned __int8 a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KdDebuggerLock, retaddr);
  else
    _InterlockedAnd64(&KdDebuggerLock, 0LL);
  result = a1;
  __writecr8(a1);
  return result;
}
