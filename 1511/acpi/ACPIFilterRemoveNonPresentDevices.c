/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x1C00180E8
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0065000 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0072D48 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C00154B0 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C0015510 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00169B8 (ACPIExtListTestElement.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0036438 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00409AC (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegions @ 0x1C0066F60 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C006EF24 (IsPciBus.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 */

char __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  __int64 v4; // rbx
  char result; // al
  __int64 v6; // rcx
  bool v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+50h] [rbp-18h]

  v11[1] = 0LL;
  v11[0] = a1 + 744;
  v11[5] = 760LL;
  v11[2] = &AcpiDeviceTreeLock;
  v12 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v11); ; i = (__int64)ACPIExtListEnumNext((__int64)v11) )
  {
    v4 = i;
    result = ACPIExtListTestElement((__int64)v11, 1);
    if ( !result )
      break;
    if ( (*(_BYTE *)v4 & 0x60) == 0x40 )
    {
      v6 = 0LL;
      if ( *a2 )
      {
        while ( *(_QWORD *)(v4 + 728) != *(_QWORD *)&a2[2 * v6 + 2] )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *a2 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v7 = (*(_DWORD *)(v4 + 904) & 0x8000LL) != 0;
        if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v4 + 712)) || v7 )
        {
          LOBYTE(v9) = v7;
          EnableDisableRegions(*(_QWORD *)(v4 + 704), 0LL, v9);
        }
        v10 = *(_DWORD *)(v4 + 904);
        *(_DWORD *)(v4 + 312) = 5;
        if ( (*(_QWORD *)&v10 & 0x800000LL) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFF7FFuLL);
        else
          _InterlockedOr64((volatile signed __int64 *)v4, 0x800uLL);
        LOBYTE(v8) = 1;
        ACPIInitStopDevice(v4, v8);
        ACPIThermalReleaseCoolingInterfaces(v4);
        ACPIBuildSurpriseRemovedExtension(v4);
      }
    }
  }
  return result;
}
