/*
 * XREFs of IopRetrieveTransactionParameters @ 0x1404B9FD0
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14007AE90 (IopGetSetSpecificExtension.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     IopCheckStackForTransactionSupport @ 0x1401CA408 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 IopRetrieveTransactionParameters()
{
  __int64 result; // rax
  unsigned int v1; // edi

  result = TmCurrentTransaction();
  v1 = result;
  if ( (_DWORD)result == -1073741637 )
    return 0;
  if ( (int)result >= 0 )
    return v1;
  return result;
}
