/*
 * XREFs of OSCreateHandle @ 0x1C0066664
 * Callers:
 *     sub_1C0033602 @ 0x1C0033602 (sub_1C0033602.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00665C8 (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007E1C8 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C007EF80 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00858D8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

NTSTATUS __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  result = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( result >= 0 )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    *a3 = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    v6 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    RtlFreeUnicodeString(&UnicodeString);
    return v6;
  }
  return result;
}
