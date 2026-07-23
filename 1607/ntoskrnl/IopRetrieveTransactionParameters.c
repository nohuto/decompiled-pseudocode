/*
 * XREFs of IopRetrieveTransactionParameters @ 0x1404A5D00
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     IopCheckStackForTransactionSupport @ 0x1401CA2A8 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
