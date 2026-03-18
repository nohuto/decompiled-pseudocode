/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14020770C
 * Callers:
 *     KiScanInterruptObjectList @ 0x140183B70 (KiScanInterruptObjectList.c)
 * Callees:
 *     <none>
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
