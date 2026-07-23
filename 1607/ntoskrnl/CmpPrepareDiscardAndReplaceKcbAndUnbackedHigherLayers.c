/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060BE64
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x14060BEC4 (CmpPrepareDiscardReplacePost.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx

  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = BugCheckParameter4;
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter4,
    (__int64)CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(_QWORD, _QWORD))CmpPrepareDiscardReplacePost,
    a2,
    1,
    0);
  result = *(unsigned int *)(a2 + 8);
  if ( (int)result >= 0 )
  {
    CmpPrepareDiscardReplacePost(BugCheckParameter4);
    v5 = *(_DWORD *)(a2 + 8);
    result = 0LL;
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  return result;
}
