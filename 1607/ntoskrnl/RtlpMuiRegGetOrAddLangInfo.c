/*
 * XREFs of RtlpMuiRegGetOrAddLangInfo @ 0x14057CDFC
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1405610C0 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405612B0 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1406E77C8 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlpMuiRegGetLangInfoIndex @ 0x14057CEC0 (RtlpMuiRegGetLangInfoIndex.c)
 *     RtlpMuiRegResizeLanguages @ 0x1406E74A0 (RtlpMuiRegResizeLanguages.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddLangInfo(__int64 *a1, __int64 a2, _WORD *a3)
{
  __int64 v6; // rbx
  __int16 LangInfoIndex; // ax
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rdx

  if ( !a1 )
    return 3221225485LL;
  v6 = *a1;
  if ( !*a1 || !a2 || !*(_WORD *)(a2 + 4) && *(__int16 *)(a2 + 6) < 0 )
    return 3221225485LL;
  LangInfoIndex = RtlpMuiRegGetLangInfoIndex(*a1);
  v8 = (unsigned __int16)LangInfoIndex;
  if ( LangInfoIndex < 0 )
  {
    v9 = *(_WORD *)(v6 + 6);
    v10 = *(_WORD *)(v6 + 4);
    if ( v9 >= v10 )
    {
      v14 = (unsigned int)v9 + 4;
      if ( (int)v14 >= v10 )
        v6 = RtlpMuiRegResizeLanguages(v6, v14, v8);
      if ( !v6 )
        return 3221225495LL;
      *a1 = v6;
    }
    LOWORD(v8) = *(_WORD *)(v6 + 6);
    v11 = *(_QWORD *)(v6 + 16);
    v12 = 28LL * (__int16)v8;
    *(_WORD *)(v6 + 6) = v8 + 1;
    *(_OWORD *)(v12 + v11) = *(_OWORD *)a2;
    *(_QWORD *)(v12 + v11 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v12 + v11 + 24) = *(_DWORD *)(a2 + 24);
  }
  if ( a3 )
    *a3 = v8;
  return 0LL;
}
