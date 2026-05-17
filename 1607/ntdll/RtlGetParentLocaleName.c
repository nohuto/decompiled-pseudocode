/*
 * XREFs of RtlGetParentLocaleName @ 0x18003E5F0
 * Callers:
 *     RtlGetNeutralFallback @ 0x18003F59C (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D80 (_RtlpMuiRegAddNeutralLanguage.c)
 *     LdrpGetParentLangId @ 0x1800885D8 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180040BCC (RtlStringCchLengthW.c)
 *     RtlpNlsGetNameIndex @ 0x180040E50 (RtlpNlsGetNameIndex.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180042FE4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpLoadNlsData @ 0x1800806AC (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800EF054 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 */

__int64 __fastcall RtlGetParentLocaleName(PCWSTR SourceString, __int64 a2, int a3, char a4)
{
  unsigned __int8 v5; // si
  int v8; // ebp
  int NameIndex; // eax
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r11
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 || !*(_QWORD *)(a2 + 8) )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFF9) != 0 )
    return 3221225713LL;
  v8 = a3 & 4;
  if ( (a3 & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(SourceString)
    || (LOBYTE(v14) = a4, result = RtlpGetCustomCultureData(SourceString, (v5 >> 1) & 1, v14, a2), (int)result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return 3221225473LL;
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex >= 0 )
    {
      if ( (v5 & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 16)
                       + 24LL) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v10 = *(_QWORD *)(pTblPtrs + 40)
          + 2LL
          + 2LL
          * *(unsigned int *)(*(unsigned __int16 *)(pTblPtrs + 56)
                            * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                            + *(_QWORD *)(pTblPtrs + 16)
                            + 184LL);
      if ( v10 )
      {
        if ( (int)RtlStringCchLengthW(v10, 85LL, &v16) < 0 )
          return 3221225473LL;
        LOBYTE(v11) = a4;
        return RtlpInitUnicodeStringUsingBuffer(v11, v12, v16, a2);
      }
    }
    if ( v8 && (unsigned __int8)RtlpIsCustomLocale(SourceString) )
    {
      LOBYTE(v15) = a4;
      return RtlpGetCustomCultureData(SourceString, (v5 >> 1) & 1, v15, a2);
    }
    return 3221225711LL;
  }
  return result;
}
