/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1C006F800
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C001DB84 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeFilterPICInterrupt @ 0x1C001DCFC (ACPIRangeFilterPICInterrupt.c)
 *     ACPIRangeValidatePciResources @ 0x1C001DD6C (ACPIRangeValidatePciResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C006F964 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C006FAE8 (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C006FB70 (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rsi
  __int64 v5; // rdx
  int DeviceResourceList; // edi
  __int64 v7; // r8
  _DWORD *v8; // rbx
  unsigned int v10; // r8d
  _DWORD *k; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  _DWORD *i; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 j; // rax
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  LOBYTE(v5) = 1;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, v5, &P);
  if ( DeviceResourceList < 0 )
    goto LABEL_41;
  v8 = P;
  if ( P )
  {
    if ( (*(_QWORD *)DeviceExtension & 0x2000000LL) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, v7);
    }
    else if ( (*(_QWORD *)DeviceExtension & 0x200000000LL) != 0 && (int)ACPIRangeFilterPICInterrupt((__int64)P) < 0 )
    {
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
    if ( (*(_QWORD *)DeviceExtension & 0x2000000000LL) != 0 )
    {
      if ( *(_BYTE *)(DeviceExtension + 176) )
      {
        v14 = 0;
        for ( i = v8 + 8; v14 < v8[7]; i += 8 * (unsigned int)i[1] + 2 )
        {
          v16 = (unsigned __int64)(i + 2);
          v17 = (unsigned __int64)&i[8 * i[1] + 2];
          while ( v16 < v17 )
          {
            if ( ((*(_BYTE *)(v16 + 1) - 3) & 0xFB) == 0 )
            {
              for ( j = v16 + 32; j < v17 && *(_BYTE *)(j + 1) == 0x81; j += 32LL )
              {
                if ( *(_WORD *)(j + 4) == 1 )
                {
                  *(_WORD *)(v16 + 4) |= 0x100u;
                  break;
                }
              }
            }
            v16 += 32LL;
          }
          ++v14;
        }
      }
    }
    if ( (*(_DWORD *)DeviceExtension & 0x8000LL) != 0 )
    {
      v10 = 0;
      for ( k = v8 + 8; v10 < v8[7]; k += 8 * (unsigned int)k[1] + 2 )
      {
        v12 = (unsigned __int64)(k + 2);
        v13 = (unsigned __int64)&k[8 * k[1] + 2];
        while ( v12 < v13 )
        {
          if ( *(_BYTE *)(v12 + 1) == 2 )
            *(_WORD *)(v12 + 4) |= 8u;
          v12 += 32LL;
        }
        ++v10;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v8);
    if ( DeviceResourceList < 0 )
      ExFreePoolWithTag(v8, 0);
    else
      a2->IoStatus.Information = (unsigned __int64)v8;
  }
  else if ( (*(_DWORD *)DeviceExtension & 0x2000000) != 0 )
  {
    DeviceResourceList = -1073741823;
  }
  if ( DeviceResourceList < 0 )
  {
LABEL_41:
    if ( DeviceResourceList != -1073741670 && (*(_DWORD *)DeviceExtension & 0x2000000) != 0 )
      KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
  }
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceResourceList;
}
