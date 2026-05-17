/*
 * XREFs of RtlGetParentLocaleName @ 0x18003EA20
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18003E524 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlGetNeutralFallback @ 0x18003E900 (RtlGetNeutralFallback.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18001C260 (RtlpNlsGetNameIndex.c)
 *     RtlStringCchLengthW @ 0x18001C914 (RtlStringCchLengthW.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001CBC4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpLoadNlsData @ 0x18003ED7C (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800E5D94 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800E6104 (RtlpIsCustomLocale.c)
 */

__int64 __fastcall RtlGetParentLocaleName(unsigned __int16 *SourceString, __int64 a2, int a3, char a4)
{
  unsigned __int8 v5; // bp
  int v8; // r14d
  __int64 v9; // rbx
  int NameIndex; // eax
  _WORD *v11; // r11
  _WORD *v12; // r11
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

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
    v9 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !(unsigned __int8)RtlpLoadNlsData() )
        return 3221225473LL;
      v9 = pTblPtrs;
    }
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex >= 0 )
    {
      if ( (v5 & 2) == 0
        && (*(_BYTE *)(*(unsigned __int16 *)(v9 + 56)
                     * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v9 + 32) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(v9 + 16)
                     + 24) & 1) == 0 )
      {
        return 3221225711LL;
      }
      v11 = (_WORD *)(*(_QWORD *)(v9 + 40)
                    + 2
                    * (*(unsigned int *)(*(unsigned __int16 *)(v9 + 56)
                                       * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v9 + 32)
                                                                               + 8LL * NameIndex
                                                                               + 2)
                                       + *(_QWORD *)(v9 + 16)
                                       + 184)
                     + 1LL));
      if ( v11 )
      {
        if ( (int)RtlStringCchLengthW(v11, 0x55uLL, &v16) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(a4, v12, v16, a2);
        return 3221225473LL;
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
