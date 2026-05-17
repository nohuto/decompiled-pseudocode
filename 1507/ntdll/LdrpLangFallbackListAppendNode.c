/*
 * XREFs of LdrpLangFallbackListAppendNode @ 0x18001EF08
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18001C0BC (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlpAddNeutralsToMergedList @ 0x18001D184 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x18001E368 (LdrpMergeLangFallbackLists.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800D44C0 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpLangFallbackListFindNode @ 0x18001F008 (LdrpLangFallbackListFindNode.c)
 */

__int64 __fastcall LdrpLangFallbackListAppendNode(__int64 *a1, __int64 a2, char a3, __int16 *a4, const WCHAR *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  int Node; // edx
  __int16 v12; // cx

  if ( a1 && (v9 = *a1) != 0 && a5 && a4 )
  {
    v10 = -1LL;
    *a4 = -1;
    Node = LdrpLangFallbackListFindNode(a2, v9, a5);
    if ( Node < 0 || *a4 < 0 )
    {
      do
        ++v10;
      while ( a5[v10] );
      Node = RtlpMuiRegAddMultiSzToLangFallbackList(a2, a5, (int)v10 + 1, a3 == 0 ? 2 : 0, 2, 1u, a1);
      if ( Node >= 0 )
      {
        v12 = *(_WORD *)(*a1 + 4);
        if ( v12 )
          *a4 = v12 - 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Node;
}
