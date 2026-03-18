/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x14049DDB4
 * Callers:
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x1406CF490 (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x14049E1C4 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x14049E24C (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int64 v6; // rax
  int v7; // edi
  char *StringRoutine; // rax
  ULONG BytesInOemString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(SourceString);
  else
    v6 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  if ( (unsigned int)v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine((unsigned int)v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v7 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
    v7 = -1073741470;
  if ( v7 >= 0 )
  {
    DestinationString->Buffer[BytesInOemString] = 0;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v7;
}
