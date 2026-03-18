/*
 * XREFs of PnpUnicodeStringToWstr @ 0x14043F5D0
 * Callers:
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14043F444 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140456068 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1404C2098 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404EFB98 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14053EC08 (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140545070 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406018BC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140603F98 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpUnicodeStringToWstr(_QWORD *a1, unsigned int *a2, unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v7; // dx
  _WORD *v8; // rcx
  unsigned __int16 v9; // r8
  unsigned int v10; // ebp
  _WORD *PoolWithTag; // rax
  _WORD *v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // r9
  _WORD *v16; // rax

  v3 = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v7 = a3[1];
  if ( v7 < 2u || (v8 = (_WORD *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    *a1 = 0LL;
    if ( a2 )
      *a2 = 0;
    return v3;
  }
  v9 = *a3;
  if ( v9 > v7 )
    return (unsigned int)-1073741811;
  if ( v9 )
  {
    if ( !*v8 || v9 == v7 && !v8[((unsigned __int64)v9 >> 1) - 1] )
      goto LABEL_17;
    if ( v9 <= (unsigned __int64)v7 - 2 )
    {
      v15 = (unsigned __int64)v9 >> 1;
      if ( !v8[v15 - 1] || !v8[v15] )
        goto LABEL_17;
    }
    v10 = v9 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x75737050u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a3 + 1), *a3);
      v13 = (unsigned __int64)*a3 >> 1;
      *a1 = v12;
      v12[v13] = 0;
      if ( a2 )
        *a2 = v10;
      return v3;
    }
    return (unsigned int)-1073741670;
  }
  if ( !*v8 )
  {
LABEL_17:
    *a1 = v8;
    if ( a2 )
      *a2 = v7;
    return v3;
  }
  v16 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x75737050u);
  if ( !v16 )
    return (unsigned int)-1073741670;
  *v16 = 0;
  *a1 = v16;
  if ( a2 )
    *a2 = 2;
  return v3;
}
