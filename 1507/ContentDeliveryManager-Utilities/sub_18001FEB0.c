/*
 * XREFs of sub_18001FEB0 @ 0x18001FEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18001FEB0(IRpcStubBuffer *a1)
{
  return NdrCStdStubBuffer2_Release(a1, (IPSFactoryBuffer *)&pPSFactoryBuffer);
}
