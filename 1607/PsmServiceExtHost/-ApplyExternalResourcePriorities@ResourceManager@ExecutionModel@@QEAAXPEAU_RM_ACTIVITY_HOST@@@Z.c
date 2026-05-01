/*
 * XREFs of ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124A0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     RmpActivityHostIsPple @ 0x18000564C (RmpActivityHostIsPple.c)
 *     RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870 (RmpPsmAppFamilyTableFindByActivityHost.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18001A19C (RmpActivityHostHasPpleResourceSet.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002C90C (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 */

void __fastcall ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_ACTIVITY_HOST *v4; // r11
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(this, a2);
  if ( !*((_DWORD *)a2 + 12) && *((_DWORD *)a2 + 148) == 2 && !RmpActivityHostIsPple((__int64)a2) )
  {
    v5 = 0LL;
    RmpPsmAppFamilyTableFindByActivityHost((__int64)a2, &v5);
    if ( *(_QWORD *)(v5 + 568) )
    {
      if ( RmpActivityHostHasPpleResourceSet(*(_QWORD *)(v5 + 568)) )
        ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(this, v4);
    }
  }
}
