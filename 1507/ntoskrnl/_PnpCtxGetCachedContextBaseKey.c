/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DDF80 (DrvDbLoadDatabaseNode.c)
 *     PipOpenServiceEnumKeys @ 0x1404E6D00 (PipOpenServiceEnumKeys.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140589984 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgInitMigrationContext @ 0x14058A050 (PiDevCfgInitMigrationContext.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14058C574 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtEnableLastKnownGood @ 0x14058D138 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x14058E968 (NtDisableLastKnownGood.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A7F40 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A84A0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1405A86CC (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405A8908 (_CmGetMatchingCommonClassListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14067A3BC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x14067DE50 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x140688120 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x14068FE44 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140692C44 (PiCMEnumerateSubKeys.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1407122B4 (_PnpCtxOpenContextBaseKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140712778 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140712C94 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407148B4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407151CC (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14071562C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140717678 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x140719044 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407E6EF4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407E6F78 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x14043D468 (_SysCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegCreateTree @ 0x1404DE588 (_SysCtxRegCreateTree.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(_QWORD *a1, int a2, _QWORD *a3)
{
  int CachedContextBaseKey; // esi
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // r15
  void *EnumSecurityDescriptor; // r14
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rax
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  CachedContextBaseKey = 0;
  v21 = 0LL;
  v22 = 0LL;
  v7 = 4;
  if ( a2 <= 7 )
  {
    switch ( a2 )
    {
      case 7:
        v10 = a1[4];
        break;
      case 1:
        v8 = 1LL;
        goto LABEL_8;
      case 2:
        v8 = 2LL;
        goto LABEL_8;
      case 3:
        v8 = 3LL;
        goto LABEL_8;
      case 4:
        v8 = 4LL;
LABEL_8:
        CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, v8, &v21);
        goto LABEL_9;
      case 5:
        v10 = a1[2];
        break;
      case 6:
        v10 = a1[3];
        break;
      default:
        return (unsigned int)-1073741811;
    }
LABEL_16:
    v21 = v10;
    goto LABEL_10;
  }
  if ( a2 != 8 )
  {
    switch ( a2 )
    {
      case 9:
        v10 = a1[6];
        break;
      case 10:
        v10 = a1[7];
        break;
      case 11:
        v10 = a1[8];
        break;
      case 12:
        v10 = a1[9];
        break;
      default:
        return (unsigned int)-1073741811;
    }
    goto LABEL_16;
  }
  v21 = a1[5];
LABEL_9:
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
LABEL_10:
  if ( v21 )
  {
    *a3 = v21;
    return (unsigned int)CachedContextBaseKey;
  }
  if ( a2 < 5 || a2 > 12 )
    CachedContextBaseKey = -1073741811;
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, v7, &v22);
    if ( CachedContextBaseKey >= 0 )
    {
      switch ( a2 )
      {
        case 5:
          v11 = L"Enum";
          EnumSecurityDescriptor = (void *)PnpGetEnumSecurityDescriptor(0LL);
          if ( !EnumSecurityDescriptor )
            CachedContextBaseKey = -1073741595;
LABEL_34:
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = SysCtxRegCreateTree(*a1, v22, v11, 0LL, 0x2000000, EnumSecurityDescriptor);
            if ( CachedContextBaseKey >= 0 )
            {
              v13 = a2 - 5;
              if ( !v13 )
              {
                v18 = v21;
                a1[2] = v21;
                goto LABEL_42;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                v18 = v21;
                a1[3] = v21;
                goto LABEL_42;
              }
              v15 = v14 - 1;
              if ( !v15 )
              {
                v18 = v21;
                a1[4] = v21;
                goto LABEL_42;
              }
              v16 = v15 - 1;
              if ( !v16 )
              {
                v18 = v21;
                a1[5] = v21;
                goto LABEL_42;
              }
              v17 = v16 - 1;
              if ( !v17 )
              {
                v18 = v21;
                a1[6] = v21;
LABEL_42:
                *a3 = v18;
                goto LABEL_43;
              }
              v19 = v17 - 1;
              if ( !v19 )
              {
                v18 = v21;
                a1[7] = v21;
                goto LABEL_42;
              }
              v20 = v19 - 1;
              if ( !v20 )
              {
                v18 = v21;
                a1[8] = v21;
                goto LABEL_42;
              }
              if ( v20 == 1 )
              {
                v18 = v21;
                a1[9] = v21;
                goto LABEL_42;
              }
              CachedContextBaseKey = -1073741811;
            }
          }
LABEL_43:
          if ( EnumSecurityDescriptor )
            ExFreePoolWithTag(EnumSecurityDescriptor, 0);
          return (unsigned int)CachedContextBaseKey;
        case 6:
          v11 = L"Services";
          goto LABEL_33;
        case 7:
          v11 = L"Control\\Class";
          goto LABEL_33;
        case 8:
          v11 = L"Control\\DeviceClasses";
          goto LABEL_33;
        case 9:
          v11 = L"Control\\DeviceContainers";
LABEL_33:
          EnumSecurityDescriptor = 0LL;
          goto LABEL_34;
        case 10:
          v11 = L"Control\\CriticalDeviceDatabase";
          goto LABEL_33;
        case 11:
          v11 = L"Control\\CoDeviceInstallers";
          goto LABEL_33;
        case 12:
          v11 = L"Hardware Profiles";
          goto LABEL_33;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
