/*
 * XREFs of RIMOpenDev @ 0x1C00105AC
 * Callers:
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 * Callees:
 *     IsGetMaxOpenRetriesSupported_0 @ 0x1C0002E80 (IsGetMaxOpenRetriesSupported_0.c)
 *     GetMaxOpenRetries_0 @ 0x1C0002E88 (GetMaxOpenRetries_0.c)
 *     IsGetgfSwitchInProgressSupported_0 @ 0x1C0002E90 (IsGetgfSwitchInProgressSupported_0.c)
 *     GetgfSwitchInProgress_0 @ 0x1C0002E98 (GetgfSwitchInProgress_0.c)
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C00CA3D0 (WPP_RECORDER_SF_qdDSD.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  unsigned int MaxOpenRetries_0; // esi
  NTSTATUS File; // eax
  NTSTATUS v10; // edi
  char v13; // al
  int v14; // edx
  int v15; // r8d
  char v16; // al
  int v17; // edx
  int v18; // r8d
  int Object; // [rsp+20h] [rbp-78h]
  PVOID v20[2]; // [rsp+60h] [rbp-38h] BYREF
  int v21; // [rsp+C0h] [rbp+28h]

  if ( (int)IsGetMaxOpenRetriesSupported_0() < 0 )
    MaxOpenRetries_0 = 1;
  else
    MaxOpenRetries_0 = GetMaxOpenRetries_0();
  v21 = 0;
  if ( MaxOpenRetries_0 )
  {
    while ( 1 )
    {
      File = ZwCreateFile((PHANDLE)(a1 + 216), a3, a2, (PIO_STATUS_BLOCK)(a1 + 248), 0LL, 0, a4, 3u, 0, 0LL, 0);
      *(_DWORD *)(a1 + 280) = File;
      v10 = File;
      if ( File != -1073741757 && File != -1073741790 )
        break;
      if ( !*(_DWORD *)(a1 + 308) && !((int)IsGetgfSwitchInProgressSupported_0() < 0 ? 0 : GetgfSwitchInProgress_0()) )
        break;
      v13 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSD(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        v15,
        16,
        Object,
        a1,
        v15,
        v13,
        *(_QWORD *)(a1 + 208),
        v10);
      RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      DbgPrintRIMAlways("rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n");
      v20[0] = (PVOID)-1000000LL;
      KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)v20);
      if ( ++v21 >= MaxOpenRetries_0 )
        goto LABEL_8;
    }
    if ( v10 == -1073741757 || v10 == -1073741790 )
    {
      v16 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSD(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        v18,
        17,
        Object,
        a1,
        v18,
        v16,
        *(_QWORD *)(a1 + 208),
        v10);
      if ( *(_DWORD *)(a1 + 308) )
        KeBugCheckEx(0x164u, 5uLL, a1 + 200, 0LL, 0LL);
    }
  }
  else
  {
    v10 = 0;
  }
LABEL_8:
  if ( v10 >= 0 )
  {
    v10 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 216), 0, (POBJECT_TYPE)IoFileObjectType, 0, v20, 0LL);
    *(PVOID *)(a1 + 224) = v20[0];
  }
  return (unsigned int)v10;
}
