/*
 * XREFs of NdisImmediateReadPortUlong @ 0x1C00C7B60
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00C8034 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateReadPortUlong(int a1, int a2, int a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 4, 1);
}
