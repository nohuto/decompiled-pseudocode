/*
 * XREFs of RIMOpenDev @ 0x1C000CD84
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 * Callees:
 *     IsGetMaxOpenRetriesSupported_0 @ 0x1C0002E60 (IsGetMaxOpenRetriesSupported_0.c)
 *     GetMaxOpenRetries_0 @ 0x1C0002E68 (GetMaxOpenRetries_0.c)
 *     IsGetgfSwitchInProgressSupported_0 @ 0x1C0002E70 (IsGetgfSwitchInProgressSupported_0.c)
 *     GetgfSwitchInProgress_0 @ 0x1C0002E78 (GetgfSwitchInProgress_0.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C00D928C (WPP_RECORDER_SF_qdDSD.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  int MaxOpenRetries_0; // eax
  unsigned int v9; // esi
  NTSTATUS File; // eax
  NTSTATUS v11; // edi
  char v14; // al
  int v15; // edx
  int v16; // r8d
  char v17; // al
  int v18; // edx
  int v19; // r8d
  int Object; // [rsp+20h] [rbp-78h]
  PVOID v21[2]; // [rsp+60h] [rbp-38h] BYREF
  int v22; // [rsp+C0h] [rbp+28h]

  if ( (int)IsGetMaxOpenRetriesSupported_0() < 0 )
    MaxOpenRetries_0 = 1;
  else
    MaxOpenRetries_0 = GetMaxOpenRetries_0();
  v22 = 0;
  v9 = MaxOpenRetries_0 + 1;
  if ( MaxOpenRetries_0 == -1 )
  {
    v11 = 0;
  }
  else
  {
    while ( 1 )
    {
      File = ZwCreateFile((PHANDLE)(a1 + 224), a3, a2, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, a4, 3u, 0, 0LL, 0);
      *(_DWORD *)(a1 + 288) = File;
      v11 = File;
      if ( File != -1073741757 && File != -1073741790 )
        break;
      if ( !*(_DWORD *)(a1 + 316) && !((int)IsGetgfSwitchInProgressSupported_0() < 0 ? 0 : GetgfSwitchInProgress_0()) )
        break;
      v14 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSD(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        16,
        Object,
        a1,
        v16,
        v14,
        *(_QWORD *)(a1 + 216),
        v11);
      RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      DbgPrintRIMAlways("rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n");
      v21[0] = (PVOID)-1000000LL;
      KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)v21);
      if ( ++v22 >= v9 )
        goto LABEL_8;
    }
    if ( v11 == -1073741757 || v11 == -1073741790 )
    {
      v17 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSD(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        v19,
        17,
        Object,
        a1,
        v19,
        v17,
        *(_QWORD *)(a1 + 216),
        v11);
      if ( *(_DWORD *)(a1 + 316) )
        KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
    }
  }
LABEL_8:
  if ( v11 >= 0 )
  {
    v11 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 224), 0, (POBJECT_TYPE)IoFileObjectType, 0, v21, 0LL);
    *(PVOID *)(a1 + 232) = v21[0];
  }
  return (unsigned int)v11;
}
