/*
 * XREFs of CmListGetNextElement @ 0x1403D72EC
 * Callers:
 *     CmpIsCmRm @ 0x1403D5A78 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1403D6A44 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmpSearchForTrans @ 0x1403D7280 (CmpSearchForTrans.c)
 *     CmGetVisibleSubkeyCount @ 0x1403DB0B4 (CmGetVisibleSubkeyCount.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmSnapshotRMTxArray @ 0x14049B3B0 (CmSnapshotRMTxArray.c)
 *     CmpTransMgrRollback @ 0x1404BA9E8 (CmpTransMgrRollback.c)
 *     CmpLogCheckpoint @ 0x1404BAB0C (CmpLogCheckpoint.c)
 *     CmUnRegisterCallback @ 0x1405DD2C0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1405E5F84 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1405E6328 (CmpRmUnDoPhase.c)
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
