/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x1405285F0
 * Callers:
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x140752DF8 (VerifierRtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x140528934 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x140528E60 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7C6C (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // edi
  char *StringRoutine; // rax
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(SourceString);
  else
    v6 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  if ( v7 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v7;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)v7 > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = RtlUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
