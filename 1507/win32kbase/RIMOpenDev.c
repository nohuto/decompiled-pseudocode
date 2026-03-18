/*
 * XREFs of RIMOpenDev @ 0x1C0076E4C
 * Callers:
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 * Callees:
 *     IsGetMaxOpenRetriesSupported_0 @ 0x1C0002E50 (IsGetMaxOpenRetriesSupported_0.c)
 *     GetMaxOpenRetries_0 @ 0x1C0002E58 (GetMaxOpenRetries_0.c)
 *     IsGetgfSwitchInProgressSupported_0 @ 0x1C0002E60 (IsGetgfSwitchInProgressSupported_0.c)
 *     GetgfSwitchInProgress_0 @ 0x1C0002E68 (GetgfSwitchInProgress_0.c)
 *     RimDeviceTypeToRimInputType @ 0x1C001A844 (RimDeviceTypeToRimInputType.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C00C94D0 (WPP_RECORDER_SF_qdDSD.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  unsigned int MaxOpenRetries_0; // esi
  NTSTATUS File; // eax
  NTSTATUS v10; // ebx
  char v12; // al
  int v13; // edx
  int v14; // r8d
  char v15; // al
  int v16; // edx
  int v17; // r8d
  int AllocationSize; // [rsp+20h] [rbp-78h]
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-38h] BYREF
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
      File = ZwCreateFile((PHANDLE)(a1 + 224), a3, a2, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, a4, 3u, 0, 0LL, 0);
      *(_DWORD *)(a1 + 288) = File;
      v10 = File;
      if ( File != -1073741757 && File != -1073741790 )
        break;
      if ( !*(_DWORD *)(a1 + 316) && !((int)IsGetgfSwitchInProgressSupported_0() < 0 ? 0 : GetgfSwitchInProgress_0()) )
        break;
      v12 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSD(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        v14,
        16,
        AllocationSize,
        a1,
        v14,
        v12,
        *(_QWORD *)(a1 + 216),
        v10);
      RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      DbgPrintRIMAlways("rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n");
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
      if ( ++v21 >= MaxOpenRetries_0 )
        goto LABEL_18;
    }
    if ( v10 == -1073741757 || v10 == -1073741790 )
    {
      v15 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSD(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        17,
        AllocationSize,
        a1,
        v17,
        v15,
        *(_QWORD *)(a1 + 216),
        v10);
    }
  }
  else
  {
    v10 = 0;
  }
LABEL_18:
  if ( v10 >= 0 )
  {
    v10 = ObReferenceObjectByHandle(
            *(HANDLE *)(a1 + 224),
            0,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            (PVOID *)&Interval,
            0LL);
    *(union _LARGE_INTEGER *)(a1 + 232) = Interval;
  }
  return (unsigned int)v10;
}
