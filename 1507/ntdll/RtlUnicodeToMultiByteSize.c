/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x180070350
 * Callers:
 *     wcstombs @ 0x18008A030 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800D24B0 (RtlxUnicodeStringToOemSize.c)
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
