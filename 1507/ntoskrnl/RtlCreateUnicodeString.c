/*
 * XREFs of RtlCreateUnicodeString @ 0x1404FFE30
 * Callers:
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1404AAED4 (EtwpQueryRegistryCallback.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     IopBootLog @ 0x140572968 (IopBootLog.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     PiGetDefaultMessageString @ 0x1405B298C (PiGetDefaultMessageString.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14068822C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C048 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     VerifierRtlCreateUnicodeString @ 0x140752C20 (VerifierRtlCreateUnicodeString.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

BOOLEAN __stdcall RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
