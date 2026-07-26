/*
 * XREFs of NdisImmediateWritePortUchar @ 0x1C00CD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00CD904 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateWritePortUchar(int a1, int a2, char a3)
{
  char v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ndisImmediateReadWritePort(a1, a2, (unsigned int)&v4, 1, 0);
}
