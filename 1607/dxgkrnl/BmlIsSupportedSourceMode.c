/*
 * XREFs of BmlIsSupportedSourceMode @ 0x1C00C0410
 * Callers:
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00C03A4 (BmlDoesSourceModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01ABAA4 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedSourceMode(__int64 a1, char a2, char a3)
{
  char v3; // bl
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // rax

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = *(unsigned int *)(a1 + 72);
  if ( !a3 )
  {
    if ( (_DWORD)v6 == 1 )
      goto LABEL_4;
    return 0;
  }
  if ( (unsigned int)(v6 - 3) > 1 )
    return 0;
LABEL_4:
  if ( (((_DWORD)v6 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v6 == 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a2 )
    return 1;
  v7 = *(_DWORD *)(a1 + 96);
  if ( v7 >= 20 && (v7 <= 23 || v7 == 32 || v7 == 41) )
    return 1;
  return v3;
}
