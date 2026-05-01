/*
 * XREFs of ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18002B5C8
 * Callers:
 *     ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x180034BE0 (-HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800018C0 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002B30 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

_BOOL8 __fastcall ExecutionModel::ResourceManager::IsForegroundProcess(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rcx
  BOOL v3; // ebx
  struct _RM_OBJECT_HEADER *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)this + 26);
  v5 = 0LL;
  v3 = RmpActivityHostQueryByPidOrPsmInfo(v2, a2, &v5) >= 0 && RmpActivityHostGetForegroundSet(v5) != 0LL;
  if ( v5 )
    RmpObjectRelease(v5);
  return v3;
}
