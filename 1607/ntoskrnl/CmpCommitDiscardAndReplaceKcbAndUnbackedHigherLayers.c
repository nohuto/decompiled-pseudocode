/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060B908
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E464 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404F14AC (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter4,
    (__int64)CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpCommitDiscardReplacePost,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter4);
}
