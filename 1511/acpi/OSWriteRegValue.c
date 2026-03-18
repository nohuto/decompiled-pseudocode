/*
 * XREFs of OSWriteRegValue @ 0x1C0066724
 * Callers:
 *     sub_1C0033602 @ 0x1C0033602 (sub_1C0033602.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00665C8 (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C007EF80 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00858D8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSWriteRegValue(PCSZ SourceString, HANDLE KeyHandle, PVOID Data, ULONG DataSize)
{
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  result = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  if ( result >= 0 )
  {
    v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, DataSize);
    RtlFreeUnicodeString(&ValueName);
    return v8;
  }
  return result;
}
