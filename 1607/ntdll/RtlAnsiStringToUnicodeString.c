/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1800182E0
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x180011CA0 (RtlIntegerToUnicodeString.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180013218 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800155AC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180073D80 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpReportError @ 0x18007AF88 (LdrpReportError.c)
 *     RtlInt64ToUnicodeString @ 0x1800E4FC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlMultiByteToUnicodeN @ 0x180018450 (RtlMultiByteToUnicodeN.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x180088370 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  NTSTATUS v8; // edi
  wchar_t *StringRoutine; // rax
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

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
         (unsigned int)&v11,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)v11 >> 1] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine((__int64)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
