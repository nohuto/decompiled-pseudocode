/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x1404E1658
 * Callers:
 *     wcstombs @ 0x14014F1B4 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x140685814 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v3; // r9d
  ULONG v4; // r8d
  __int64 v6; // rax

  v3 = 0;
  v4 = BytesInUnicodeString >> 1;
  if ( (_BYTE)NlsMbCodePageTag )
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
