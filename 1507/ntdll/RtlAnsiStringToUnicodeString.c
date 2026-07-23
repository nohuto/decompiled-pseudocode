/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1800239A0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180020EB0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlIntegerToUnicodeString @ 0x180021780 (RtlIntegerToUnicodeString.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpReportError @ 0x18006A65C (LdrpReportError.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18007A3B8 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlInt64ToUnicodeString @ 0x1800D3CC0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180023B10 (RtlMultiByteToUnicodeN.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800D2480 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  unsigned __int16 *StringRoutine; // rax
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
    StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v6, 2LL);
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
  v9 = RtlMultiByteToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer, v8, v10);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
