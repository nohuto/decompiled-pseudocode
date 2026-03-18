/*
 * XREFs of RtlCreateUnicodeString @ 0x1403F75E4
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     EtwpCaptureString @ 0x14048D980 (EtwpCaptureString.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     EtwpQueryRegistryCallback @ 0x1404E0F70 (EtwpQueryRegistryCallback.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     IopBootLog @ 0x1404EFE0C (IopBootLog.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     PiGetDefaultMessageString @ 0x1405745C0 (PiGetDefaultMessageString.c)
 *     DrvDbCreateDatabaseNode @ 0x140578BB0 (DrvDbCreateDatabaseNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140607904 (CmpCreateHwProfileFriendlyName.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063B9F4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C23C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E24D4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
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
