/*
 * XREFs of LdrpAppendAnsiStringToFilenameBuffer @ 0x18007A3B8
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18007A1FC (LdrpLoadForwardedDll.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800215E4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlAnsiStringToUnicodeString @ 0x1800239A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800D2480 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall LdrpAppendAnsiStringToFilenameBuffer(unsigned __int16 *a1, const ANSI_STRING *a2)
{
  int FileNameBufferIfNeeded; // edi
  int v5; // eax
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FileNameBufferIfNeeded = 0;
  if ( a2->Length )
  {
    if ( NlsMbCodePageTag )
      v5 = RtlxOemStringToUnicodeSize(a2);
    else
      v5 = 2 * a2->Length + 2;
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, v5 + (unsigned int)*a1);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      v6 = *a1;
      v7 = *a1;
      DestinationString.Length = 0;
      DestinationString.Buffer = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + v7);
      DestinationString.MaximumLength = a1[1] - v6;
      RtlAnsiStringToUnicodeString(&DestinationString, a2, 0);
      *a1 += DestinationString.Length;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
