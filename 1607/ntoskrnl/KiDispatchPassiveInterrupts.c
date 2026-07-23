/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1401D8408
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 * Callees:
 *     <none>
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
