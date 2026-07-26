/*
 * XREFs of NdisImmediateReadPortUshort @ 0x1C00CD460
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00CD904 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateReadPortUshort(int a1, int a2, int a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 2, 1);
}
