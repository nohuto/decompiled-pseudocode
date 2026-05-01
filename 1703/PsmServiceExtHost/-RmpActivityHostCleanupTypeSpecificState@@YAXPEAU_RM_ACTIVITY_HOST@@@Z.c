/*
 * XREFs of ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001824C
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016320 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018264 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018068 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupTypeSpecificState(HANDLE *a1)
{
  if ( *((_DWORD *)a1 + 14) )
  {
    if ( *((_DWORD *)a1 + 14) == 2 )
      CloseHandle(a1[8]);
  }
  else
  {
    RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)a1);
  }
}
