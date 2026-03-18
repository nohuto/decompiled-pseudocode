/*
 * XREFs of CmpTransReferenceTransaction @ 0x1403FF0D8
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FDAD8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140490828 (CmpCreateKeyBody.c)
 *     CmpTransInitializeTransaction @ 0x1404DA4B8 (CmpTransInitializeTransaction.c)
 * Callees:
 *     TmIsTransactionActive @ 0x140001198 (TmIsTransactionActive.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  struct _KTRANSACTION *v1; // rbx
  bool v2; // zf
  void *v3; // rcx
  unsigned int v4; // edi

  v1 = (struct _KTRANSACTION *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  v2 = (a1 & 1) == 0;
  v3 = (void *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v2 )
  {
    v4 = 0;
    ObfReferenceObject(v3);
    if ( !TmIsTransactionActive(v1) )
    {
      ObfDereferenceObject(v1);
      return (unsigned int)-1072103421;
    }
  }
  else
  {
    ObfReferenceObject(v3);
    return v1->OutcomeEvent.Header.LockNV != 0 ? 0xC0190003 : 0;
  }
  return v4;
}
