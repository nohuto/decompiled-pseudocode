/*
 * XREFs of IoIsActivityTracingEnabled @ 0x140118AD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0;
}
