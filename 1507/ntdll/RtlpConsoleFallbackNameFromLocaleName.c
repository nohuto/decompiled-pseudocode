/*
 * XREFs of RtlpConsoleFallbackNameFromLocaleName @ 0x18006A20C
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18001C0BC (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlpNlsGetLcidIndex @ 0x18001F630 (RtlpNlsGetLcidIndex.c)
 *     RtlpNlsGetNameIndex @ 0x18001F7B0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180048DB4 (RtlpLoadNlsData.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 *     RtlpGetAlternateCodePage @ 0x1800E059C (RtlpGetAlternateCodePage.c)
 */

__int64 __fastcall RtlpConsoleFallbackNameFromLocaleName(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v10; // zf
  int LcidIndex; // eax
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  int NameIndex; // eax
  int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  int v18; // r15d
  int v19; // ebp
  const WCHAR *v20; // rdx
  wchar_t *v22; // rbx
  const wchar_t *v23; // rsi
  int v24; // eax
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  int AlternateCodePage; // eax
  int v28; // ecx
  __int16 v29; // r8
  int v30; // eax
  int v31; // [rsp+20h] [rbp-38h]
  _QWORD v32[6]; // [rsp+28h] [rbp-30h] BYREF
  int v33; // [rsp+60h] [rbp+8h]

  v32[0] = 0LL;
  if ( !String2 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  v10 = pTblPtrs == 0;
  *a3 = 0;
  if ( !v10 || RtlpLoadNlsData() )
  {
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v12 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 4)
          * (unsigned __int64)*(unsigned __int16 *)(pTblPtrs + 56);
      v13 = *(_QWORD *)(pTblPtrs + 16);
      v33 = *(unsigned __int16 *)(v12 + v13 + 110);
      v31 = *(unsigned __int16 *)(v12 + v13 + 112);
      NameIndex = RtlpNlsGetNameIndex(String2);
      if ( NameIndex >= 0 )
      {
        _mm_lfence();
        v15 = 149;
        v16 = *(_QWORD *)(pTblPtrs + 16);
        v17 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
            * (unsigned __int64)*(unsigned __int16 *)(pTblPtrs + 56);
        v18 = *(unsigned __int16 *)(v17 + v16 + 112);
        v19 = *(unsigned __int16 *)(v17 + v16 + 110);
        if ( (unsigned int)(v18 - 1250) <= 7 && _bittest(&v15, v18 - 1250)
          || (unsigned int)(v19 - 1250) <= 7 && _bittest(&v15, v19 - 1250) )
        {
          *a3 = 0;
          v20 = String2;
LABEL_12:
          RtlInitUnicodeString(a4, v20);
          return 0LL;
        }
        v22 = (wchar_t *)(*(_QWORD *)(pTblPtrs + 40) + 2LL + 2LL * *(unsigned int *)(v17 + v16 + 276));
        if ( a2 && !wcsicmp(v22, String2) )
        {
          v23 = String2;
          *a3 = 0;
LABEL_45:
          v20 = v23;
          goto LABEL_12;
        }
        v23 = L"en-US";
        if ( !wcsicmp(v22, L"en") || !wcsicmp(v22, L"en-US") )
          goto LABEL_42;
        if ( wcsicmp(v22, String2) )
        {
          v24 = RtlpNlsGetNameIndex(v22);
          if ( v24 < 0 )
            goto LABEL_41;
          _mm_lfence();
          v25 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * v24 + 2)
              * (unsigned __int64)*(unsigned __int16 *)(pTblPtrs + 56);
          v26 = *(_QWORD *)(pTblPtrs + 16);
          v19 = *(unsigned __int16 *)(v25 + v26 + 110);
          v18 = *(unsigned __int16 *)(v25 + v26 + 112);
        }
        AlternateCodePage = RtlpGetAlternateCodePage(a5, v22, v32);
        v28 = AlternateCodePage;
        if ( !a6 || AlternateCodePage || a6 == v19 || a6 == v18 )
        {
          if ( v19 == v33 || v19 == v31 || v18 == v33 || v18 == v31 )
            goto LABEL_42;
          if ( AlternateCodePage )
          {
            if ( AlternateCodePage != -1 )
            {
              v29 = 0;
              if ( AlternateCodePage > 0 )
              {
                while ( 1 )
                {
                  if ( *(__int16 *)(v32[0] + 2LL * v29) > 0 )
                  {
                    v30 = *(__int16 *)(v32[0] + 2LL * v29);
                    if ( v30 == v33 || v30 == v31 )
                      goto LABEL_42;
                  }
                  if ( ++v29 >= v28 )
                    goto LABEL_41;
                }
              }
              goto LABEL_41;
            }
LABEL_42:
            if ( wcsicmp(v22, L"en") )
              v23 = v22;
            *a3 = wcsicmp(v23, String2) != 0;
            goto LABEL_45;
          }
        }
LABEL_41:
        v22 = L"en-US";
        goto LABEL_42;
      }
      return 3221225711LL;
    }
  }
  return 3221225473LL;
}
