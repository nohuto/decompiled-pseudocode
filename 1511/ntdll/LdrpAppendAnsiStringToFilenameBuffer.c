/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x180010FF8
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180010DF8 (LdrpLoadForwardedDll.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180010FB4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlAnsiStringToUnicodeString @ 0x180014B30 (RtlAnsiStringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x180083120 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(const void **a1, const ANSI_STRING *a2)
{
  int FileNameBufferIfNeeded; // edi
  int v5; // eax
  __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( a2->Length )
  {
    if ( NlsMbCodePageTag )
      v5 = RtlxOemStringToUnicodeSize(a2);
    else
      v5 = 2 * a2->Length + 2;
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, v5 + (unsigned int)*(unsigned __int16 *)a1);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      v6 = *(_WORD *)a1;
      v7 = *(unsigned __int16 *)a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (unsigned __int16 *)((char *)a1[1] + v7);
      DestinationString.MaximumLength = *((_WORD *)a1 + 1) - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
      *(_WORD *)a1 += DestinationString.Length;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
