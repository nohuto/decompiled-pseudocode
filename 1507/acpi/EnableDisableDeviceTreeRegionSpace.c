/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x1C0018924
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018924 (EnableDisableDeviceTreeRegionSpace.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C007C38C (UnRegisterOperationRegionHandler.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C0014580 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C00145E0 (ACPIExtListEnumNext.c)
 *     ACPIExtListTestElement @ 0x1C00159B8 (ACPIExtListTestElement.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0018924 (EnableDisableDeviceTreeRegionSpace.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0040290 (EnableDisableDeviceRegionSpace.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  int v7; // edx
  __int64 i; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+50h] [rbp-18h]

  v3 = a3;
  if ( *(_DWORD *)(a1 + 312) == 3 )
  {
    if ( a2 >= 0x1F )
      v7 = 0x80000000;
    else
      v7 = 1 << a2;
    if ( (v7 & *(_DWORD *)(a1 + 612)) != 0 )
      EnableDisableDeviceRegionSpace(a1, a2, a3);
    v11[1] = 0LL;
    v11[0] = a1 + 744;
    v11[5] = 760LL;
    v11[2] = &AcpiDeviceTreeLock;
    v12 = 1;
    for ( i = ACPIExtListStartEnum((__int64)v11); ; i = (__int64)ACPIExtListEnumNext((__int64)v11) )
    {
      v9 = i;
      if ( !ACPIExtListTestElement((__int64)v11, 1) )
        break;
      LOBYTE(v10) = v3;
      EnableDisableDeviceTreeRegionSpace(v9, a2, v10);
    }
  }
  return 0LL;
}
