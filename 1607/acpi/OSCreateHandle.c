/*
 * XREFs of OSCreateHandle @ 0x1C008D080
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002A840 (ACPIRootPowerCallBack.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C008CFE4 (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C009FA38 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C00A09F0 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00A777C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  NTSTATUS v5; // eax
  int v6; // edx
  NTSTATUS v7; // ebx
  int v9; // r9d
  int v10; // r8d
  char v11; // [rsp+30h] [rbp-11h]
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  v7 = v5;
  if ( v5 < 0 )
  {
    v9 = 10;
    v11 = v5;
    v10 = 22;
LABEL_6:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v10,
      v9,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v11);
    return (unsigned int)v7;
  }
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a3 = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  v7 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v7 < 0 )
  {
    v10 = 11;
    v11 = v7;
    v9 = 11;
    goto LABEL_6;
  }
  return (unsigned int)v7;
}
