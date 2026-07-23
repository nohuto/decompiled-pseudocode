/*
 * XREFs of _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404BBC3C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DD3F0 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561FD8 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405622A8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingDeviceContainerListWorker @ 0x1405624D4 (_CmGetMatchingDeviceContainerListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405628B0 (_CmGetMatchingCommonClassListWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     PipHardwareConfigClearStartOverrides @ 0x1406298FC (PipHardwareConfigClearStartOverrides.c)
 *     PnpCheckDriverDependencies @ 0x14062D430 (PnpCheckDriverDependencies.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140635B98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgInitMigrationContext @ 0x1406396C4 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgMigrateService @ 0x14063AEE4 (PiDevCfgMigrateService.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14063AFF0 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PnprGetPluginDriverImagePath @ 0x1406445C0 (PnprGetPluginDriverImagePath.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140647748 (PiCMEnumerateSubKeys.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406D70C8 (_PnpCtxOpenContextBaseKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7C44 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA694 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DAAF4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1406DCCFC (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406DF270 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     NtDisableLastKnownGood @ 0x1406E5764 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x1406E5864 (NtEnableLastKnownGood.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407BB858 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407BB8DC (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     _SysCtxRegCreateTree @ 0x1404DD794 (_SysCtxRegCreateTree.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x1404E0F08 (_SysCtxGetCachedContextBaseKey.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 */

__int64 __fastcall PnpCtxGetCachedContextBaseKey(__int64 *a1, int a2, __int64 *a3)
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
  __int64 v21; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  void *v24; // [rsp+98h] [rbp+48h] BYREF

  CachedContextBaseKey = 0;
  v23 = 0LL;
  v24 = 0LL;
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
        CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, v8, &v23);
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
LABEL_21:
    v23 = v10;
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
    goto LABEL_21;
  }
  v23 = a1[5];
LABEL_9:
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
LABEL_10:
  if ( v23 )
  {
    *a3 = v23;
    return (unsigned int)CachedContextBaseKey;
  }
  if ( a2 < 5 || a2 > 12 )
    CachedContextBaseKey = -1073741811;
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = SysCtxGetCachedContextBaseKey(*a1, v7, &v24);
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
            LODWORD(v21) = 0x2000000;
            CachedContextBaseKey = SysCtxRegCreateTree(
                                     *a1,
                                     v24,
                                     v11,
                                     0LL,
                                     v21,
                                     (__int64)EnumSecurityDescriptor,
                                     v22,
                                     (__int64)&v23,
                                     0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              v13 = a2 - 5;
              if ( !v13 )
              {
                v20 = v23;
                a1[2] = v23;
                goto LABEL_46;
              }
              v14 = v13 - 1;
              if ( !v14 )
              {
                v20 = v23;
                a1[3] = v23;
                goto LABEL_46;
              }
              v15 = v14 - 1;
              if ( !v15 )
              {
                v20 = v23;
                a1[4] = v23;
                goto LABEL_46;
              }
              v16 = v15 - 1;
              if ( !v16 )
              {
                v20 = v23;
                a1[5] = v23;
                goto LABEL_46;
              }
              v17 = v16 - 1;
              if ( !v17 )
              {
                v20 = v23;
                a1[6] = v23;
                goto LABEL_46;
              }
              v18 = v17 - 1;
              if ( !v18 )
              {
                v20 = v23;
                a1[7] = v23;
                goto LABEL_46;
              }
              v19 = v18 - 1;
              if ( !v19 )
              {
                v20 = v23;
                a1[8] = v23;
LABEL_46:
                *a3 = v20;
                goto LABEL_47;
              }
              if ( v19 == 1 )
              {
                v20 = v23;
                a1[9] = v23;
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
