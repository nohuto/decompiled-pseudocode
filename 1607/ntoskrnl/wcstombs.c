/*
 * XREFs of wcstombs @ 0x14014F774
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x1403F6310 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteSize @ 0x1404C4C5C (RtlUnicodeToMultiByteSize.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  __int64 v3; // rax
  NTSTATUS v4; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  v3 = -1LL;
  BytesInMultiByteString = 0LL;
  if ( Dest )
  {
    do
      ++v3;
    while ( Source[v3] );
    v4 = RtlUnicodeToMultiByteN(Dest, MaxCount, (PULONG)&BytesInMultiByteString, Source, 2 * v3 + 2);
  }
  else
  {
    do
      ++v3;
    while ( Source[v3] );
    v4 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, Source, 2 * v3 + 2);
  }
  if ( v4 >= 0 )
    return BytesInMultiByteString - 1;
  gbl_errno = 42;
  return -1LL;
}
