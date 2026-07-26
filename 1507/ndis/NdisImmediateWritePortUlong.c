/*
 * XREFs of NdisImmediateWritePortUlong @ 0x1C00CE7E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00CEC24 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateWritePortUlong(int a1, int a2, int a3)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ndisImmediateReadWritePort(a1, a2, (unsigned int)&v4, 4, 0);
}
