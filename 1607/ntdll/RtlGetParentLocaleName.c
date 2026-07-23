/*
 * XREFs of RtlGetParentLocaleName @ 0x18003E5E0
 * Callers:
 *     RtlGetNeutralFallback @ 0x18003F58C (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180071D70 (_RtlpMuiRegAddNeutralLanguage.c)
 *     LdrpGetParentLangId @ 0x1800885C8 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180040BBC (RtlStringCchLengthW.c)
 *     RtlpNlsGetNameIndex @ 0x180040E40 (RtlpNlsGetNameIndex.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180042FD4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpLoadNlsData @ 0x18008069C (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800EF054 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
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
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r11
  NTSTATUS result; // eax
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

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
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (v5 & 2) == 0 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                       * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 16)
                       + 24LL) & 1) == 0 )
          return -1073741585;
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
          return -1073741823;
        LOBYTE(v11) = AllocateDestinationString;
        return RtlpInitUnicodeStringUsingBuffer(v11, v12, v16, ParentLocaleName);
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
