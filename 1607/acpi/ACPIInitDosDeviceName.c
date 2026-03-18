/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C000BB70
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0085200 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 v6; // r9
  __int64 *v7; // rcx
  int v8; // edx
  __int64 *v9; // r10
  int v10; // r9d
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rcx
  int v15; // edx
  __int64 *v16; // r10
  __int64 v17; // r8
  const char *v18; // rcx
  const char *v19; // r10
  NTSTATUS v20; // edi
  __int64 v21; // r8
  const char *v22; // rcx
  const char *v23; // r10
  NTSTATUS v24; // eax
  int v25; // edi
  __int64 v26; // r9
  __int64 *v27; // rcx
  __int64 *v28; // r8
  char DataSize; // [rsp+28h] [rbp-41h]
  char v30; // [rsp+30h] [rbp-39h]
  __int64 v31; // [rsp+38h] [rbp-31h]
  __int64 v32; // [rsp+40h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v35; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v36[2]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v37; // [rsp+82h] [rbp+19h]
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 736), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = qword_1C002C340;
    v8 = 0;
    v9 = qword_1C002C340;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(__int64 **)(a1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(__int64 **)(a1 + 568);
    }
    v32 = (__int64)v9;
    v10 = 11;
    v31 = (__int64)v7;
    v30 = a1;
    DataSize = v2;
    goto LABEL_30;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v3 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 712), 1313096799LL);
  v4 = v3;
  if ( !v3 )
  {
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  v11 = AMLIEvalNameSpaceObject(v3, v36, 0, 0LL);
  AMLIDereferenceHandleEx(v4, v12);
  if ( v11 < 0 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = qword_1C002C340;
    v15 = 0;
    v16 = qword_1C002C340;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v14 = *(__int64 **)(a1 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v16 = *(__int64 **)(a1 + 568);
    }
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      1,
      12,
      (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
      v11,
      a1,
      (__int64)v14,
      (__int64)v16);
    goto LABEL_3;
  }
  if ( v37 == 2 )
  {
    RtlInitAnsiString(&v35, SourceString);
    v20 = RtlAnsiStringToUnicodeString(&UnicodeString, &v35, 1u);
    if ( v20 < 0 )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v22 = (const char *)qword_1C002C340;
      v23 = (const char *)qword_1C002C340;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a1 + 560);
        if ( (v21 & 0x400000000000LL) != 0 )
          v23 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xEu,
        (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
        v20,
        a1,
        v22,
        v23);
      goto LABEL_24;
    }
    v24 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    v25 = v24;
    FreeDataBuffs(v36, 1LL);
    ZwClose(DeviceRegKey);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v25 >= 0 )
      return 0LL;
    v26 = *(_QWORD *)(a1 + 8);
    v27 = qword_1C002C340;
    v8 = 0;
    v28 = qword_1C002C340;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v27 = *(__int64 **)(a1 + 560);
      if ( (v26 & 0x400000000000LL) != 0 )
        v28 = *(__int64 **)(a1 + 568);
    }
    v32 = (__int64)v28;
    v10 = 15;
    v31 = (__int64)v27;
    v30 = a1;
    DataSize = v25;
LABEL_30:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1,
      v10,
      (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
      DataSize,
      v30,
      v31,
      v32);
    return 0LL;
  }
  v17 = *(_QWORD *)(a1 + 8);
  v18 = (const char *)qword_1C002C340;
  v19 = (const char *)qword_1C002C340;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v18 = *(const char **)(a1 + 560);
    if ( (v17 & 0x400000000000LL) != 0 )
      v19 = *(const char **)(a1 + 568);
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xDu,
    (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids,
    v37,
    a1,
    v18,
    v19);
  v20 = 0;
LABEL_24:
  dword_1C0074698 = 0;
  byte_1C007469C = 0;
  FreeDataBuffs(v36, 1LL);
  ZwClose(DeviceRegKey);
  return (unsigned int)v20;
}
