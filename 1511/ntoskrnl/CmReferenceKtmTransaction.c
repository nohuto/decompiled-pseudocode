/*
 * XREFs of CmReferenceKtmTransaction @ 0x1404B8A10
 * Callers:
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 */

__int64 __fastcall CmReferenceKtmTransaction(struct _KTRANSACTION *Object)
{
  unsigned int v2; // ebx

  v2 = 0;
  ObfReferenceObject(Object);
  if ( !TmIsTransactionActive(Object) )
  {
    ObfDereferenceObject(Object);
    return (unsigned int)-1072103421;
  }
  return v2;
}
