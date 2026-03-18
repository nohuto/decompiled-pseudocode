/*
 * XREFs of KdReleaseDebuggerLock @ 0x1401C21F4
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void __fastcall KdReleaseDebuggerLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&KdDebuggerLock);
  __writecr8(v1);
}
