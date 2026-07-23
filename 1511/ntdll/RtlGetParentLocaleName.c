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

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int8 v5; // bp
  ULONG v8; // r14d
  __int64 v9; // rbx
  int NameIndex; // eax
  _WORD *v11; // r11
  const WCHAR *v12; // r11
  NTSTATUS result; // eax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

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
    || (LOBYTE(v14) = AllocateDestinationString,
        result = RtlpGetCustomCultureData(LocaleName, (v5 >> 1) & 1, v14, ParentLocaleName),
        result < 0) )
  {
    v9 = pTblPtrs;
    if ( !pTblPtrs )
    {
      if ( !(unsigned __int8)RtlpLoadNlsData() )
        return -1073741823;
      v9 = pTblPtrs;
    }
    NameIndex = RtlpNlsGetNameIndex((unsigned __int16 *)LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (v5 & 2) == 0
        && (*(_BYTE *)(*(unsigned __int16 *)(v9 + 56)
                     * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v9 + 32) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(v9 + 16)
                     + 24) & 1) == 0 )
      {
        return -1073741585;
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
          return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v12, v16, ParentLocaleName);
        return -1073741823;
      }
    }
    if ( v8 && (unsigned __int8)RtlpIsCustomLocale(LocaleName) )
    {
      LOBYTE(v15) = AllocateDestinationString;
      return RtlpGetCustomCultureData(LocaleName, (v5 >> 1) & 1, v15, ParentLocaleName);
    }
    return -1073741585;
  }
  return result;
}
