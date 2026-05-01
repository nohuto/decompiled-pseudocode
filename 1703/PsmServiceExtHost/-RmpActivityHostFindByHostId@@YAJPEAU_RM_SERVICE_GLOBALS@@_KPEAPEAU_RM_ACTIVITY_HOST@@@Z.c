/*
 * XREFs of ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004FF4
 * Callers:
 *     ?RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800018C0 (-RmpActivityHostQueryByPidOrPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002374 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x180004A78 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B920 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18002CFF4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800055F0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 */

__int64 __fastcall RmpActivityHostFindByHostId(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  struct _RM_OBJECT_TABLE *v3; // rbx
  char *v5; // rdi
  int ObjectByHandleWithLock; // ebx
  struct _RM_OBJECT_HEADER *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16);
  v5 = (char *)a1 + 32;
  RtlAcquireSRWLockShared((char *)a1 + 32);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(v3, &v9, &v8);
  RtlReleaseSRWLockShared(v5);
  if ( ObjectByHandleWithLock >= 0 )
  {
    ObjectByHandleWithLock = 0;
    *a3 = v8;
  }
  return (unsigned int)ObjectByHandleWithLock;
}
