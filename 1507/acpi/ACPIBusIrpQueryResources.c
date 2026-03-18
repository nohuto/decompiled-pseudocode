/*
 * XREFs of ACPIBusIrpQueryResources @ 0x1C00673C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInitDosDeviceName @ 0x1C0006908 (ACPIInitDosDeviceName.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00069CC (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeValidatePciResources @ 0x1C001FB44 (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C0021A20 (ACPIRangeFilterPICInterrupt.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0067894 (PnpBiosGetDeviceResourceList.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C006849C (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall ACPIBusIrpQueryResources(ULONG_PTR a1, IRP *a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *DeviceExtension; // r14
  int Status; // ebx
  int DeviceResourceList; // eax
  __int64 v8; // r8
  _DWORD *v9; // rsi
  void *v10; // rcx
  _DWORD *v12; // rcx
  unsigned int i; // r8d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v17; // [rsp+58h] [rbp-28h] BYREF
  char v18[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  int v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+D0h] [rbp+50h] BYREF
  PVOID P; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  P = 0LL;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  ACPIInitDosDeviceName((__int64)DeviceExtension);
  Status = ACPIGet(DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)v18, 0LL);
  if ( Status < 0 )
    goto LABEL_23;
  if ( (*DeviceExtension & 0x40000000000000LL) != 0 )
  {
    DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 0LL, &P);
    v9 = P;
    Status = DeviceResourceList;
    if ( P )
    {
      if ( (*(_DWORD *)DeviceExtension & 0x2000000) == 0 )
      {
        v19 = DeviceExtension[88];
        v20 = 8;
        v17 = &v19;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_SWALLOW_OBJECT_CRS, &v17, 1LL, &v21) >= 0 && v21 == 2 )
        {
          ExFreePoolWithTag(v9, 0);
          v9 = 0LL;
        }
      }
      if ( v9 )
      {
        if ( (*DeviceExtension & 0x2000000LL) != 0 )
        {
          ACPIRangeValidatePciResources((ULONG_PTR)DeviceExtension, (ULONG_PTR)v9, v8);
        }
        else if ( (*DeviceExtension & 0x200000000LL) != 0 )
        {
          Status = ACPIRangeFilterPICInterrupt((__int64)v9);
          if ( Status < 0 )
            goto LABEL_14;
        }
        if ( (*(_DWORD *)DeviceExtension & 0x8000LL) != 0 )
        {
          v12 = v9 + 8;
          for ( i = 0; i < v9[7]; v12 += 8 * (unsigned int)v12[1] + 2 )
          {
            v14 = (unsigned __int64)(v12 + 2);
            v15 = (unsigned __int64)&v12[8 * v12[1] + 2];
            while ( v14 < v15 )
            {
              if ( *(_BYTE *)(v14 + 1) == 2 )
                *(_WORD *)(v14 + 4) |= 8u;
              v14 += 32LL;
            }
            ++i;
          }
        }
        Status = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList((__int64)DeviceExtension, (__int64)v9);
        v10 = v9;
        if ( Status < 0 )
          goto LABEL_15;
        Status = PnpIoResourceListToCmResourceList(v9, &v16);
LABEL_14:
        v10 = v9;
LABEL_15:
        ExFreePoolWithTag(v10, 0);
        goto LABEL_16;
      }
    }
    if ( Status < 0 )
      goto LABEL_23;
    if ( (*(_DWORD *)DeviceExtension & 0x2000000) == 0 )
    {
      Status = a2->IoStatus.Status;
LABEL_16:
      if ( Status >= 0 )
        goto LABEL_17;
LABEL_23:
      if ( Status == -1073741670 )
        goto LABEL_17;
      goto LABEL_24;
    }
    Status = -1073741823;
  }
  else
  {
    Status = -1073741436;
  }
LABEL_24:
  if ( (*(_DWORD *)DeviceExtension & 0x2000000) != 0 )
    KeBugCheckEx(0xA5u, 2uLL, (ULONG_PTR)DeviceExtension, 0LL, (ULONG_PTR)a2);
LABEL_17:
  a2->IoStatus.Status = Status;
  if ( Status >= 0 )
    v2 = v16;
  a2->IoStatus.Information = v2;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
