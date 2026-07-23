/*
 * XREFs of RtlHashUnicodeString @ 0x180026F30
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     RtlpFindUnicodeStringInSection @ 0x1800256D0 (RtlpFindUnicodeStringInSection.c)
 *     LdrpHashUnicodeString @ 0x180040B80 (LdrpHashUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlHashUnicodeString(
        PUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  ULONG v4; // eax
  unsigned __int16 *Buffer; // r10
  int v7; // r9d
  unsigned __int16 v8; // r11
  int v9; // ecx
  int v11; // ecx

  v4 = 0;
  if ( !String )
    return -1073741811;
  if ( !HashValue )
    return -1073741811;
  Buffer = String->Buffer;
  *HashValue = 0;
  v7 = String->Length >> 1;
  if ( HashAlgorithm > 1 )
    return -1073741811;
  if ( CaseInSensitive )
  {
    for ( ; v7; v4 = v9 + 65599 * v4 )
    {
      v8 = *Buffer++;
      --v7;
      if ( v8 < 0x61u )
      {
        v9 = v8;
      }
      else if ( v8 > 0x7Au )
      {
        v9 = (unsigned __int16)(v8
                              + *(_WORD *)(Nls844UnicodeUpcaseTable
                                         + 2LL
                                         * ((v8 & 0xF)
                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                              + 2LL
                                                                              * (((v8 >> 4) & 0xF)
                                                                               + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v8 >> 8)))))));
      }
      else
      {
        v9 = v8 - 32;
      }
    }
  }
  else
  {
    for ( ; v7; --v7 )
    {
      v11 = *Buffer++;
      v4 = v11 + 65599 * v4;
    }
  }
  *HashValue = v4;
  return 0;
}
