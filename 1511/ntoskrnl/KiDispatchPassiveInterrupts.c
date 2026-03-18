/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1401C9E00
 * Callers:
 *     KiScanInterruptObjectList @ 0x140154E30 (KiScanInterruptObjectList.c)
 * Callees:
 *     <none>
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
