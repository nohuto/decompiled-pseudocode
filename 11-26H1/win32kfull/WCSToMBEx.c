/*
 * XREFs of WCSToMBEx @ 0x140129570
 * Callers:
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 * Callees:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 */

ULONG __fastcall WCSToMBEx(
        unsigned __int16 a1,
        WCHAR *a2,
        int a3,
        PCHAR *a4,
        int MaxBytesInMultiByteString,
        ULONG BytesInMultiByteString)
{
  int BytesInUnicodeString; // r8d
  NTSTATUS v7; // eax
  ULONG result; // eax
  __int64 v9; // r8

  BytesInMultiByteString = 0;
  if ( !MaxBytesInMultiByteString || !a3 || !a2 )
    return 0;
  if ( a3 == -1 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    a3 = v9 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0;
  }
  if ( MaxBytesInMultiByteString < 0 )
    return 0;
  BytesInUnicodeString = 2 * a3;
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v7 = RtlUnicodeToMultiByteN(*a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, BytesInUnicodeString);
    if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
      return BytesInMultiByteString;
    return 0;
  }
  result = ConvertToAndFromWideChar(a1, a2, BytesInUnicodeString, *a4, MaxBytesInMultiByteString, 0);
  if ( result == -1 )
    return 0;
  return result;
}
