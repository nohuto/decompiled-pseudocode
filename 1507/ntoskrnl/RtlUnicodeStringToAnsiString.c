/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1404FF2E0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400255E0 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     ExpQueryModuleInformation @ 0x1404FF130 (ExpQueryModuleInformation.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140541B4C (MmGetSystemRoutineAddress.c)
 *     AslStringUpcaseToMultiByteN @ 0x1405782C0 (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1405AC4EC (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x14069D60C (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1406F6D78 (NtSetSystemEnvironmentValue.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140744E2C (ViThunkAdjustExportAddressIfHooked.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x140752DB4 (VerifierRtlUnicodeStringToAnsiString.c)
 *     HdlspProcessDumpCommand @ 0x14075AAA0 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 * Callees:
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     RtlUnicodeToMultiByteN @ 0x1404FF3C0 (RtlUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7C6C (RtlxUnicodeStringToOemSize.c)
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
