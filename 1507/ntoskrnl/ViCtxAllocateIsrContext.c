/*
 * XREFs of ViCtxAllocateIsrContext @ 0x14074E950
 * Callers:
 *     VerifierIoConnectInterrupt @ 0x140739A0C (VerifierIoConnectInterrupt.c)
 *     ViCtxSetPrivateConnectParameters @ 0x14074ECF0 (ViCtxSetPrivateConnectParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ViCtxAllocateIsrContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72734956u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
