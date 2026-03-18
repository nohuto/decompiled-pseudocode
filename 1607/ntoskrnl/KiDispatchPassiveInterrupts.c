/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1401D85DC
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015ED60 (KiScanInterruptObjectList.c)
 * Callees:
 *     <none>
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
