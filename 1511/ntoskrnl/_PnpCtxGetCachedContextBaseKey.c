/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8
 * Callers:
 *     PipOpenServiceEnumKeys @ 0x1403B9994 (PipOpenServiceEnumKeys.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140442270 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x14044473C (DrvDbLoadDatabaseNode.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14046043C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DD2D8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DE228 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404EEB20 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140513DF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgInitMigrationContext @ 0x140514C80 (PiDevCfgInitMigrationContext.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140515D70 (_PnpCtxOpenContextBaseKey.c)
 *     NtEnableLastKnownGood @ 0x140519AD0 (NtEnableLastKnownGood.c)
 *     NtDisableLastKnownGood @ 0x14051AC4C (NtDisableLastKnownGood.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140530F6C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405313E4 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x140531610 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14053184C (_CmGetMatchingCommonClassListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1405FF7F8 (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x140602FE4 (PnpCheckDriverDependencies.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x140609234 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1406100D0 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140613120 (PiCMEnumerateSubKeys.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140692BDC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406930F8 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140693674 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140694D24 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14069563C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140695A9C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1406977E4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406991E4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407555C4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140755648 (PipProcessPendingServices.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140783928 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140783B28 (PipCommitPendingService.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x14043C260 (_SysCtxGetCachedContextBaseKey.c)
 *     _SysCtxRegCreateTree @ 0x140444CE8 (_SysCtxRegCreateTree.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
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
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // rax
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
LABEL_36:
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = SysCtxRegCreateTree(*a1, v22, v11, 0LL, 0x2000000, EnumSecurityDescriptor);
            if ( CachedContextBaseKey >= 0 )
            {
              v13 = a2 - 5;
              if ( !v13 )
              {
                v20 = v21;
                a1[2] = v21;
                goto LABEL_46;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                v20 = v21;
                a1[3] = v21;
                goto LABEL_46;
              }
              v15 = v14 - 1;
              if ( !v15 )
              {
                v20 = v21;
                a1[4] = v21;
                goto LABEL_46;
              }
              v16 = v15 - 1;
              if ( !v16 )
              {
                v20 = v21;
                a1[5] = v21;
                goto LABEL_46;
              }
              v17 = v16 - 1;
              if ( !v17 )
              {
                v20 = v21;
                a1[6] = v21;
                goto LABEL_46;
              }
              v18 = v17 - 1;
              if ( !v18 )
              {
                v20 = v21;
                a1[7] = v21;
                goto LABEL_46;
              }
              v19 = v18 - 1;
              if ( !v19 )
              {
                v20 = v21;
                a1[8] = v21;
LABEL_46:
                *a3 = v20;
                goto LABEL_47;
              }
              if ( v19 == 1 )
              {
                v20 = v21;
                a1[9] = v21;
                goto LABEL_46;
              }
              CachedContextBaseKey = -1073741811;
            }
          }
LABEL_47:
          if ( EnumSecurityDescriptor )
            ExFreePoolWithTag(EnumSecurityDescriptor, 0);
          return (unsigned int)CachedContextBaseKey;
        case 6:
          v11 = L"Services";
          goto LABEL_35;
        case 7:
          v11 = L"Control\\Class";
          goto LABEL_35;
        case 8:
          v11 = L"Control\\DeviceClasses";
          goto LABEL_35;
        case 9:
          v11 = L"Control\\DeviceContainers";
          goto LABEL_35;
        case 10:
          v11 = L"Control\\CriticalDeviceDatabase";
          goto LABEL_35;
        case 11:
          v11 = L"Control\\CoDeviceInstallers";
LABEL_35:
          EnumSecurityDescriptor = 0LL;
          goto LABEL_36;
        case 12:
          v11 = L"Hardware Profiles";
          goto LABEL_35;
      }
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
