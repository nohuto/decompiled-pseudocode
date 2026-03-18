/*
 * XREFs of ACPIInternalFindDeviceExtensionNoLock @ 0x1C00157C8
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00157C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C0019848 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C0014580 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C00145E0 (ACPIExtListEnumNext.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00157C8 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIExtListTestElement @ 0x1C00159B8 (ACPIExtListTestElement.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0018DA8 (ACPIExtListExitEnumEarly.c)
 */

__int64 __fastcall ACPIInternalFindDeviceExtensionNoLock(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 DeviceExtensionNoLock; // rbx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]

  v7 = a2 + 744;
  v8 = 0LL;
  v9 = 760LL;
  v10 = 0;
  for ( i = ACPIExtListStartEnum((__int64)&v7); ; i = (__int64)ACPIExtListEnumNext((__int64)&v7) )
  {
    LOBYTE(v4) = 1;
    DeviceExtensionNoLock = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v7, v4) )
      return 0LL;
    if ( !DeviceExtensionNoLock )
    {
      ACPIExtListExitEnumEarly(&v7);
      return 0LL;
    }
    if ( *(_QWORD *)(DeviceExtensionNoLock + 728) == a1 )
      break;
    DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
    if ( DeviceExtensionNoLock )
      break;
  }
  ACPIExtListExitEnumEarly(&v7);
  return DeviceExtensionNoLock;
}
