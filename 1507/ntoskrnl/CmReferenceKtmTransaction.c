/*
 * XREFs of CmReferenceKtmTransaction @ 0x140554498
 * Callers:
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
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
