/*
 * XREFs of OSCreateHandle @ 0x1C00669C8
 * Callers:
 *     sub_1C00327AA @ 0x1C00327AA (sub_1C00327AA.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C006692C (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C007DFE8 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C007EDA0 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00858D8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
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
