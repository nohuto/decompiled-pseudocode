/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x1403FC01C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053A9D4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E464 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EEE4 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404F14AC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplacePost @ 0x14060B85C (CmpCleanupDiscardReplacePost.c)
 */

__int64 __fastcall CmpCleanupDiscardReplaceContext(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1 + 2;
    if ( (_QWORD *)*v3 != v3 )
    {
      result = CmpEnumerateAllHigherLayerKcbs(
                 v2,
                 (unsigned int)CmpCleanupDiscardReplacePre,
                 (unsigned int)CmpCleanupDiscardReplacePost,
                 (_DWORD)a1,
                 1,
                 0);
      if ( (_QWORD *)*v3 != v3 )
        return CmpCleanupDiscardReplacePost(*a1, a1);
    }
  }
  return result;
}
