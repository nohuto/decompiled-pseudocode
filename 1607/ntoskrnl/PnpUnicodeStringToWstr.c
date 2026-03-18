/*
 * XREFs of PnpUnicodeStringToWstr @ 0x140500FB4
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F2484 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404C7E9C (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404E7734 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404E7890 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x140540868 (IoRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405702EC (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140576614 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B908 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
