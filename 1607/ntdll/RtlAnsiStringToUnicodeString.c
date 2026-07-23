/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1800182D0
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x180011C90 (RtlIntegerToUnicodeString.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180013208 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180073D70 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpReportError @ 0x18007AF78 (LdrpReportError.c)
 *     RtlInt64ToUnicodeString @ 0x1800E5080 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     RtlMultiByteToUnicodeN @ 0x180018440 (RtlMultiByteToUnicodeN.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x180088360 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  wchar_t *StringRoutine; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbCodePageTag )
    v6 = RtlxOemStringToUnicodeSize(SourceString);
  else
    v6 = 2 * SourceString->Length + 2;
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v8 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
