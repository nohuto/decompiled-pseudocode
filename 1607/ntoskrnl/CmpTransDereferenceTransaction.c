/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1403FF128
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FDAD8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140490828 (CmpCreateKeyBody.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpTransInitializeTransaction @ 0x1404DA4B8 (CmpTransInitializeTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1404DEB08 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x1404E0B28 (NtCreateKeyTransacted.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404E9890 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404EC2F0 (CmRmFinalizeRecovery.c)
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
