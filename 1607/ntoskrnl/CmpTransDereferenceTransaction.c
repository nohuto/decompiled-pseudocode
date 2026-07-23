/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1403FDFE8
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FC998 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404912B8 (CmpCreateKeyBody.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x1404BDABC (CmpTransInitializeTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1404C210C (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x1404C412C (NtCreateKeyTransacted.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404CB980 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
