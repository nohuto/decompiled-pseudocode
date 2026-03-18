/*
 * XREFs of IopRetrieveTransactionParameters @ 0x140488530
 * Callers:
 *     IopAllocRealFileObject @ 0x140488940 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x14015C7D4 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
