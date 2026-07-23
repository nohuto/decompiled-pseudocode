/*
 * XREFs of RtlCreateUnicodeString @ 0x1403F64A4
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404910B8 (EtwpRealtimeCreateLogfile.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1404C4574 (EtwpQueryRegistryCallback.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     IopBootLog @ 0x1404D1E28 (IopBootLog.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     PiGetDefaultMessageString @ 0x140574B00 (PiGetDefaultMessageString.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406079B8 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
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
