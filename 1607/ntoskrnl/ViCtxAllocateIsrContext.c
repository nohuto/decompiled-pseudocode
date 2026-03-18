/*
 * XREFs of ViCtxAllocateIsrContext @ 0x140719CCC
 * Callers:
 *     VfCtxHookAndConnectInterrupt @ 0x140719A74 (VfCtxHookAndConnectInterrupt.c)
 *     ViCtxSetPrivateConnectParameters @ 0x14071A06C (ViCtxSetPrivateConnectParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
