/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x14054CECC
 * Callers:
 *     RtlxAnsiStringToUnicodeSize @ 0x14054CEA8 (RtlxAnsiStringToUnicodeSize.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406858D4 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG v3; // r9d
  __int64 v5; // rax

  v3 = 0;
  if ( (_BYTE)NlsMbCodePageTag )
  {
    while ( BytesInMultiByteString )
    {
      v5 = *(unsigned __int8 *)MultiByteString;
      --BytesInMultiByteString;
      ++MultiByteString;
      if ( NlsLeadByteInfoTable[v5] )
      {
        if ( !BytesInMultiByteString )
        {
          v3 += 2;
          break;
        }
        --BytesInMultiByteString;
        ++MultiByteString;
      }
      v3 += 2;
    }
    *BytesInUnicodeString = v3;
  }
  else
  {
    *BytesInUnicodeString = 2 * BytesInMultiByteString;
  }
  return 0;
}
