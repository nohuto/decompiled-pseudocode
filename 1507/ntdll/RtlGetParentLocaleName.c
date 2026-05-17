/*
 * XREFs of RtlGetParentLocaleName @ 0x18004A190
 * Callers:
 *     RtlGetNeutralFallback @ 0x18001D068 (RtlGetNeutralFallback.c)
 *     LdrpGetParentLangId @ 0x180047C8C (LdrpGetParentLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180049FE8 (_RtlpMuiRegAddNeutralLanguage.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001F554 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlStringCchLengthW @ 0x18001F5CC (RtlStringCchLengthW.c)
 *     RtlpNlsGetNameIndex @ 0x18001F7B0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180048DB4 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800E0640 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800E09B0 (RtlpIsCustomLocale.c)
 */

__int64 __fastcall RtlGetParentLocaleName(unsigned __int16 *SourceString, __int64 a2, int a3, char a4)
{
  unsigned __int8 v5; // si
  int v8; // ebp
  int NameIndex; // eax
  _WORD *v10; // r11
  const void *v11; // r11
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

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
    || (LOBYTE(v13) = a4, result = RtlpGetCustomCultureData(SourceString, (v5 >> 1) & 1, v13, a2), (int)result < 0) )
  {
    if ( !pTblPtrs && !RtlpLoadNlsData() )
      return 3221225473LL;
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex >= 0 )
    {
      if ( (v5 & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                       * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 16)
                       + 24) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v10 = (_WORD *)(*(_QWORD *)(pTblPtrs + 40)
                    + 2LL
                    + 2LL
                    * *(unsigned int *)(*(unsigned __int16 *)(pTblPtrs + 56)
                                      * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32)
                                                                              + 8LL * NameIndex
                                                                              + 2)
                                      + *(_QWORD *)(pTblPtrs + 16)
                                      + 184));
      if ( v10 )
      {
        if ( (int)RtlStringCchLengthW(v10, 0x55uLL, &v15) < 0 )
          return 3221225473LL;
        return RtlpInitUnicodeStringUsingBuffer(a4, v11, v15, a2);
      }
    }
    if ( v8 && (unsigned __int8)RtlpIsCustomLocale(SourceString) )
    {
      LOBYTE(v14) = a4;
      return RtlpGetCustomCultureData(SourceString, (v5 >> 1) & 1, v14, a2);
    }
    return 3221225711LL;
  }
  return result;
}
