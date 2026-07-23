/*
 * XREFs of RtlpConsoleFallbackNameFromLocaleName @ 0x180070F64
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x180070DA0 (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18001C260 (RtlpNlsGetNameIndex.c)
 *     RtlpNlsGetLcidIndex @ 0x18001CC3C (RtlpNlsGetLcidIndex.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlpLoadNlsData @ 0x18003ED7C (RtlpLoadNlsData.c)
 *     _wcsicmp @ 0x180096F90 (_wcsicmp.c)
 *     RtlpGetAlternateCodePage @ 0x1800E5CF0 (RtlpGetAlternateCodePage.c)
 */

__int64 __fastcall RtlpConsoleFallbackNameFromLocaleName(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  __int64 v9; // rbx
  int LcidIndex; // eax
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  int NameIndex; // eax
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // r15d
  int v18; // ebp
  const WCHAR *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  wchar_t *v23; // rbx
  const wchar_t *v24; // rsi
  int v25; // eax
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  int AlternateCodePage; // eax
  int v29; // ecx
  __int16 v30; // r8
  int v31; // eax
  int v32; // [rsp+20h] [rbp-48h]
  _QWORD v33[8]; // [rsp+28h] [rbp-40h] BYREF
  int v34; // [rsp+70h] [rbp+8h]

  v33[0] = 0LL;
  if ( !String2 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v9 = pTblPtrs;
  *a3 = 0;
  if ( v9 )
    goto LABEL_5;
  if ( RtlpLoadNlsData() )
  {
    v9 = pTblPtrs;
LABEL_5:
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex >= 0 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(unsigned __int16 *)(v9 + 56);
      v13 = v12 * *(unsigned __int16 *)(*(_QWORD *)(v9 + 24) + 8LL * LcidIndex + 4);
      v34 = *(unsigned __int16 *)(v13 + v11 + 110);
      v32 = *(unsigned __int16 *)(v13 + v11 + 112);
      NameIndex = RtlpNlsGetNameIndex(String2);
      if ( NameIndex >= 0 )
      {
        v15 = 149;
        v16 = v12 * *(unsigned __int16 *)(*(_QWORD *)(v9 + 32) + 8LL * NameIndex + 2);
        v17 = *(unsigned __int16 *)(v16 + v11 + 112);
        v18 = *(unsigned __int16 *)(v16 + v11 + 110);
        if ( (unsigned int)(v17 - 1250) <= 7 && _bittest(&v15, v17 - 1250)
          || (unsigned int)(v18 - 1250) <= 7 && _bittest(&v15, v18 - 1250) )
        {
          *a3 = 0;
          v19 = String2;
LABEL_12:
          RtlInitUnicodeString(a4, v19);
          return 0LL;
        }
        v21 = *(_QWORD *)(v9 + 40);
        v22 = *(unsigned int *)(v16 + v11 + 276);
        v23 = (wchar_t *)(v21 + 2 * (v22 + 1));
        if ( a2 && !wcsicmp((const wchar_t *)(v21 + 2 * (v22 + 1)), String2) )
        {
          v24 = String2;
          *a3 = 0;
LABEL_46:
          v19 = v24;
          goto LABEL_12;
        }
        v24 = L"en-US";
        if ( !wcsicmp(v23, L"en") || !wcsicmp(v23, L"en-US") )
          goto LABEL_43;
        if ( wcsicmp(v23, String2) )
        {
          v25 = RtlpNlsGetNameIndex(v23);
          if ( v25 < 0 )
            goto LABEL_42;
          v26 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * v25 + 2)
              * (unsigned __int64)*(unsigned __int16 *)(pTblPtrs + 56);
          v27 = *(_QWORD *)(pTblPtrs + 16);
          v18 = *(unsigned __int16 *)(v26 + v27 + 110);
          v17 = *(unsigned __int16 *)(v26 + v27 + 112);
        }
        AlternateCodePage = RtlpGetAlternateCodePage(a5, v23, v33);
        v29 = AlternateCodePage;
        if ( !a6 || AlternateCodePage || a6 == v18 || a6 == v17 )
        {
          if ( v18 == v34 || v18 == v32 || v17 == v34 || v17 == v32 )
            goto LABEL_43;
          if ( AlternateCodePage )
          {
            if ( AlternateCodePage != -1 )
            {
              v30 = 0;
              if ( AlternateCodePage > 0 )
              {
                while ( 1 )
                {
                  if ( *(__int16 *)(v33[0] + 2LL * v30) > 0 )
                  {
                    v31 = *(__int16 *)(v33[0] + 2LL * v30);
                    if ( v31 == v34 || v31 == v32 )
                      goto LABEL_43;
                  }
                  if ( ++v30 >= v29 )
                    goto LABEL_42;
                }
              }
              goto LABEL_42;
            }
LABEL_43:
            if ( wcsicmp(v23, L"en") )
              v24 = v23;
            *a3 = wcsicmp(v24, String2) != 0;
            goto LABEL_46;
          }
        }
LABEL_42:
        v23 = L"en-US";
        goto LABEL_43;
      }
      return 3221225711LL;
    }
  }
  return 3221225473LL;
}
