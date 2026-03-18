/*
 * XREFs of mbstowcs @ 0x140144970
 * Callers:
 *     <none>
 * Callees:
 *     _mbstrlen @ 0x140147B04 (_mbstrlen.c)
 *     RtlMultiByteToUnicodeN @ 0x1403E14E0 (RtlMultiByteToUnicodeN.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  signed int v7; // ecx
  size_t v8; // rcx
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( Dest )
  {
    BytesInUnicodeString = mbstrlen(Source);
    if ( RtlMultiByteToUnicodeN(Dest, 2 * v3, &BytesInUnicodeString, Source, BytesInUnicodeString + 1) >= 0 )
    {
      BytesInUnicodeString = (unsigned __int64)(int)BytesInUnicodeString >> 1;
      v7 = BytesInUnicodeString;
      if ( !Dest[BytesInUnicodeString - 1] )
        return (signed int)(BytesInUnicodeString - 1);
    }
    else
    {
      gbl_errno = 42;
      v7 = -1;
      *Dest = 0;
    }
    return v7;
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( Source[v8] );
    return v8;
  }
}
