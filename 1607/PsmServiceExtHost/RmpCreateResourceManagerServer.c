/*
 * XREFs of RmpCreateResourceManagerServer @ 0x18001B108
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18001E760 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001AE98 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001B398 (RmpGetResourceManagerRuntimeConfiguration.c)
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001E19C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

int __fastcall RmpCreateResourceManagerServer(struct IResourceEnforcer *a1, struct ModernResourceEnforcer *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rsi
  int result; // eax
  _BYTE v6[176]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = RmSvcGlobals;
  RmpGetResourceManagerRuntimeConfiguration(v6);
  RmpInitializeAllModules((struct _RM_RUNTIME_CONFIGURATION *)v6, v2);
  result = RmpAllocateAllModuleState(a1, a2, v2);
  if ( result >= 0 )
  {
    result = RmpStartAllModules(v2);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
