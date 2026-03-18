/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x1C002056C
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002056C (EnableDisableDeviceTreeRegionSpace.c)
 *     RegisterOperationRegionHandler @ 0x1C008DF98 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C009D98C (UnRegisterOperationRegionHandler.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002056C (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0054D1C (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C0055150 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  int v7; // edx
  __int64 i; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // r8d
  _QWORD v12[6]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+80h] [rbp-18h]

  v3 = a3;
  if ( *(_DWORD *)(a1 + 320) == 3 )
  {
    if ( a2 >= 0x1F )
      v7 = 0x80000000;
    else
      v7 = 1 << a2;
    if ( (v7 & *(_DWORD *)(a1 + 620)) != 0 && (int)EnableDisableDeviceRegionSpace(a1, a2, a3) < 0 )
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v11, 14);
    v12[1] = 0LL;
    v12[0] = a1 + 752;
    v12[5] = 768LL;
    v12[2] = &AcpiDeviceTreeLock;
    v13 = 1;
    for ( i = ACPIExtListStartEnum((__int64)v12); ; i = (__int64)ACPIExtListEnumNext((__int64)v12) )
    {
      v9 = i;
      if ( !ACPIExtListTestElement((__int64)v12, 1) )
        break;
      LOBYTE(v10) = v3;
      EnableDisableDeviceTreeRegionSpace(v9, a2, v10);
    }
  }
  return 0LL;
}
