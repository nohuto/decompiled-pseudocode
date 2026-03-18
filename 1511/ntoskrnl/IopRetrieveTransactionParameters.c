/*
 * XREFs of IopRetrieveTransactionParameters @ 0x140491000
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x14012F35C (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
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
