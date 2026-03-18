/*
 * XREFs of CmListGetNextElement @ 0x140402E2C
 * Callers:
 *     CmGetVisibleSubkeyCount @ 0x1403FBF90 (CmGetVisibleSubkeyCount.c)
 *     CmpSearchForTrans @ 0x1403FF314 (CmpSearchForTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140405110 (CmpIsKeyStackDeleted.c)
 *     CmpFindSubKeyByNumberEx @ 0x140438CE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404BB9F4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpIsCmRm @ 0x1404DA06C (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x1404DA2D4 (CmpLogCheckpoint.c)
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrRollback @ 0x1404E9924 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmpCleanupLightWeightPrepare @ 0x14053A998 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053AAFC (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053AC0C (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14053B4A0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1406055CC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14060597C (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14060F8B0 (CmpLightWeightUpdateModificationActions.c)
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
