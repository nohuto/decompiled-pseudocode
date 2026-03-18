/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C0006908
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00673C0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  int v5; // ebx
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-9h] BYREF
  struct _STRING v9; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v10[2]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v11; // [rsp+62h] [rbp+19h]
  PCSZ SourceString; // [rsp+80h] [rbp+37h]
  int Data; // [rsp+B0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+B8h] [rbp+6Fh] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  if ( IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 728), 1u, 0x20000u, &DeviceRegKey) < 0 )
    return 0LL;
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v2 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 704), 1313096799LL);
  v3 = v2;
  if ( !v2 || (v5 = AMLIEvalNameSpaceObject(v2, v10, 0, 0LL), AMLIDereferenceHandleEx(v3), v5 < 0) )
  {
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  if ( v11 == 2 )
  {
    RtlInitAnsiString(&v9, SourceString);
    v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &v9, 1u);
    if ( v6 < 0 )
      goto LABEL_8;
    ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    FreeDataBuffs(v10, 1LL);
    ZwClose(DeviceRegKey);
    RtlFreeUnicodeString(&UnicodeString);
    return 0LL;
  }
  v6 = 0;
LABEL_8:
  dword_1C005A218 = 0;
  byte_1C005A21C = 0;
  FreeDataBuffs(v10, 1LL);
  ZwClose(DeviceRegKey);
  return (unsigned int)v6;
}
