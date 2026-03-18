/*
 * XREFs of CmListGetNextElement @ 0x1404F1644
 * Callers:
 *     CmGetVisibleSubkeyCount @ 0x140446FB4 (CmGetVisibleSubkeyCount.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpLogCheckpoint @ 0x1404EEB78 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x1404EF218 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1404EF7E8 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404F07F0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpSearchForTrans @ 0x1404F15D8 (CmpSearchForTrans.c)
 *     CmpTransMgrRollback @ 0x1405640A8 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x14065D144 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
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
