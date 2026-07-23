/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x18007E8C0
 * Callers:
 *     RtlxUnicodeStringToOemSize @ 0x18007E890 (RtlxUnicodeStringToOemSize.c)
 *     wcstombs @ 0x18009CB70 (wcstombs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r9d
  ULONG v4; // r8d
  __int64 v6; // rax

  v3 = 0;
  v4 = BytesInUnicodeString >> 1;
  if ( NlsMbCodePageTag )
  {
    while ( v4 )
    {
      v6 = *UnicodeString;
      --v4;
      ++UnicodeString;
      if ( HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2 * v6)) )
        v3 += 2;
      else
        ++v3;
    }
    *BytesInMultiByteString = v3;
  }
  else
  {
    *BytesInMultiByteString = v4;
  }
  return 0;
}
