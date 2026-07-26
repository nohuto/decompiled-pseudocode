/*
 * XREFs of NdisImmediateReadPortUchar @ 0x1C00CD420
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00CD904 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateReadPortUchar(int a1, int a2, int a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 1, 1);
}
