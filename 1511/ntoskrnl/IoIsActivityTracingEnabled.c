/*
 * XREFs of IoIsActivityTracingEnabled @ 0x140101B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0;
}
