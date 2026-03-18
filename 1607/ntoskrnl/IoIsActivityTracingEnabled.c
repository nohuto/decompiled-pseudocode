/*
 * XREFs of IoIsActivityTracingEnabled @ 0x1400D1390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0;
}
