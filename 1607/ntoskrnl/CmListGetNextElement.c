/*
 * XREFs of CmListGetNextElement @ 0x140401CEC
 * Callers:
 *     CmGetVisibleSubkeyCount @ 0x1403FAE50 (CmGetVisibleSubkeyCount.c)
 *     CmpSearchForTrans @ 0x1403FE1D4 (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404A7724 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpIsCmRm @ 0x1404BD670 (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x1404BD8D8 (CmpLogCheckpoint.c)
 *     CmpTransMgrPrepare @ 0x1404BDEEC (CmpTransMgrPrepare.c)
 *     CmpTransMgrRollback @ 0x1404CBA14 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmpCleanupLightWeightPrepare @ 0x14053AED8 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053B03C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053B14C (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14053B9E0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmUnRegisterCallback @ 0x1405FB1F0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140605680 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140605A30 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14060F964 (CmpLightWeightUpdateModificationActions.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  char *result; // rax

  if ( !*a2 )
    *a2 = *a1;
  v3 = (_QWORD *)*a2;
  if ( a1 == (_QWORD *)*a2 )
    return 0LL;
  result = (char *)v3 - a3;
  *a2 = *v3;
  return result;
}
