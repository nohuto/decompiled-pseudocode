/*
 * XREFs of NdisImmediateWritePortUshort @ 0x1C00CE810
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWritePort @ 0x1C00CEC24 (ndisImmediateReadWritePort.c)
 */

__int64 __fastcall NdisImmediateWritePortUshort(int a1, int a2, __int16 a3)
{
  __int16 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ndisImmediateReadWritePort(a1, a2, (unsigned int)&v4, 2, 0);
}
