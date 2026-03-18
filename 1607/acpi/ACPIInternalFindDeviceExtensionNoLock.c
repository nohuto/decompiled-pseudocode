/*
 * XREFs of ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0
 * Callers:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00225D8 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E3E0 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIExtListTestElement @ 0x1C001E5E0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C001E9F0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C001EB18 (ACPIExtListStartEnum.c)
 *     ACPIExtListExitEnumEarly @ 0x1C0020908 (ACPIExtListExitEnumEarly.c)
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

  v7 = a2 + 752;
  v8 = 0LL;
  v9 = 768LL;
  v10 = 0;
  for ( i = ACPIExtListStartEnum(&v7); ; i = ACPIExtListEnumNext(&v7) )
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
    if ( *(_QWORD *)(DeviceExtensionNoLock + 736) == a1 )
      break;
    DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
    if ( DeviceExtensionNoLock )
      break;
  }
  ACPIExtListExitEnumEarly(&v7);
  return DeviceExtensionNoLock;
}
