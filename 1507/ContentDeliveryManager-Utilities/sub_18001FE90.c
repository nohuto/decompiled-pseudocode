/*
 * XREFs of sub_18001FE90 @ 0x18001FE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18001FE90(IRpcStubBuffer *a1)
{
  return NdrCStdStubBuffer_Release(a1, (IPSFactoryBuffer *)&pPSFactoryBuffer);
}
