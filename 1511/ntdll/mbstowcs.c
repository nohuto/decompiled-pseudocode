/*
 * XREFs of mbstowcs @ 0x1800991D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180014CA0 (RtlMultiByteToUnicodeN.c)
 *     _errno @ 0x180082280 (_errno.c)
 *     _mbstrlen @ 0x18009E758 (_mbstrlen.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  int *v7; // rax
  signed int v8; // ecx
  size_t v9; // rcx
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
      v8 = BytesInUnicodeString;
      if ( !Dest[BytesInUnicodeString - 1] )
        return (signed int)(BytesInUnicodeString - 1);
    }
    else
    {
      v7 = errno();
      v8 = -1;
      *v7 = 42;
      *Dest = 0;
    }
    return v8;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Source[v9] );
    return v9;
  }
}
