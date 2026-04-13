/*
 * XREFs of CStdStubBuffer2_Release @ 0x18003A1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall CStdStubBuffer2_Release(IRpcStubBuffer *This)
{
  return NdrCStdStubBuffer2_Release(This, (IPSFactoryBuffer *)&gPFactory);
}
