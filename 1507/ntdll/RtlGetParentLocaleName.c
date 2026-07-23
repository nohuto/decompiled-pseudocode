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

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int8 v5; // si
  ULONG v8; // ebp
  int NameIndex; // eax
  _WORD *v10; // r11
  const WCHAR *v11; // r11
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(LocaleName)
    || (LOBYTE(v13) = AllocateDestinationString,
        result = RtlpGetCustomCultureData(LocaleName, (v5 >> 1) & 1, v13, ParentLocaleName),
        result < 0) )
  {
    if ( !pTblPtrs && !RtlpLoadNlsData() )
      return -1073741823;
    NameIndex = RtlpNlsGetNameIndex((unsigned __int16 *)LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (v5 & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                       * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 16)
                       + 24) & 1) == 0 )
          return -1073741585;
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
          return -1073741823;
        return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v11, v15, ParentLocaleName);
      }
    }
    if ( v8 && (unsigned __int8)RtlpIsCustomLocale(LocaleName) )
    {
      LOBYTE(v14) = AllocateDestinationString;
      return RtlpGetCustomCultureData(LocaleName, (v5 >> 1) & 1, v14, ParentLocaleName);
    }
    return -1073741585;
  }
  return result;
}
