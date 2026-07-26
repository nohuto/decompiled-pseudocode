/*
 * XREFs of NdisImmediateReadPortUshort @ 0x1C00C7B80
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00C8034 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateReadPortUshort(int a1, int a2, int a3)
{
  return ndisImmediateReadWritePort(a1, a2, a3, 2, 1);
}
