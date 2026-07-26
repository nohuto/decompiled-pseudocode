/*
 * XREFs of NdisImmediateReadPortUchar @ 0x1C00C7B40
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00C8034 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateReadPortUchar(int a1, int a2, int a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 1, 1);
}
