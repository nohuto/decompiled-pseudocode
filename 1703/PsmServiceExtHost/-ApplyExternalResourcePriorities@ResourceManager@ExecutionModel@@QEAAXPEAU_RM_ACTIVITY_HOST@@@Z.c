/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D74C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z @ 0x18000FE9C (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@QEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D64C (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016530 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800167C0 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyNameFromPsmKey@@YAJPEBGPEAG@Z @ 0x180016890 (-RmpPsmAppFamilyNameFromPsmKey@@YAJPEBGPEAG@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800169D0 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002088C (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_PSM_APP_FAMILY *v4; // rdi
  struct _RM_PSM_APP_FAMILY *v5; // rax
  struct _RM_ACTIVITY_HOST *v6; // rbx
  _BYTE v7[544]; // [rsp+20h] [rbp-418h] BYREF
  unsigned __int16 v8[232]; // [rsp+240h] [rbp-1F8h] BYREF

  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)this, a2);
  if ( !*((_DWORD *)a2 + 14) && *((_DWORD *)a2 + 150) == 2 && !RmpActivityHostIsPple(a2) )
  {
    v4 = 0LL;
    if ( (int)RmpPsmAppFamilyNameFromPsmKey((const unsigned __int16 *)a2 + 32, v8) >= 0 )
    {
      RmpPsmAppFamilyIdInitialize(
        v8,
        (struct _RM_ACTIVITY_HOST *)((char *)a2 + 528),
        *((_DWORD *)a2 + 149),
        (struct _RM_PSM_APP_FAMILY_ID *)v7);
      v5 = RmpPsmAppFamilyTableFind(*((struct _RM_SERVICE_GLOBALS **)a2 + 5), (struct _RM_PSM_APP_FAMILY_ID *)v7);
      if ( v5 )
        v4 = v5;
    }
    v6 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v4 + 71);
    if ( v6 )
    {
      if ( RmpActivityHostTryGetPpleResourceSet(*((struct _RM_ACTIVITY_HOST **)v4 + 71)) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities((unsigned __int64)this, v6);
    }
  }
}
