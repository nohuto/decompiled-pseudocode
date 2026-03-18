/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1403B8140
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400027D4 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     AslStringUpcaseToMultiByteN @ 0x1403B7C1C (AslStringUpcaseToMultiByteN.c)
 *     MmGetSystemRoutineAddress @ 0x1403B7E3C (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformation @ 0x1403B7F90 (ExpQueryModuleInformation.c)
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1405342E0 (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x14061E88C (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140672934 (NtSetSystemEnvironmentValue.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1406C358C (ViThunkAdjustExportAddressIfHooked.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x1406CF2E8 (VerifierRtlUnicodeStringToAnsiString.c)
 *     HdlspProcessDumpCommand @ 0x1406D7978 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x14076F68C (IopReassignSystemRoot.c)
 * Callees:
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 *     RtlUnicodeToMultiByteN @ 0x1403B8220 (RtlUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned __int16 MaximumLength; // ax
  int v10; // ebx
  char *StringRoutine; // rax
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  if ( (_BYTE)NlsMbCodePageTag )
    LODWORD(v7) = RtlxUnicodeStringToOemSize(SourceString);
  else
    v7 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  if ( (unsigned int)v7 > 0xFFFF )
    return -1073741584;
  v8 = v7 - 1;
  DestinationString->Length = v7 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)ExpAllocateStringRoutine((unsigned int)v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  else
  {
    DestinationString->Buffer[BytesInMultiByteString] = 0;
  }
  if ( v10 >= 0 )
    return v6;
  return v10;
}
