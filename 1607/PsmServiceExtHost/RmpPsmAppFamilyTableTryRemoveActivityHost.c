/*
 * XREFs of RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180005004
 * Callers:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004F3C (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180004968 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004F74 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870 (RmpPsmAppFamilyTableFindByActivityHost.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 result; // rax
  struct _RM_PSM_APP_FAMILY *v3; // rbx
  struct _RM_PSM_APP_FAMILY *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = RmpPsmAppFamilyTableFindByActivityHost(a1, &v4);
  if ( (int)result >= 0 )
  {
    v3 = v4;
    result = RmpPsmAppFamilyTryRemoveActivityHost(v4, a1);
    if ( (int)result >= 0 )
    {
      if ( !*((_QWORD *)v3 + 69) )
        RmpPsmAppFamilyTableRemove(*((struct _RM_SERVICE_GLOBALS **)a1 + 5), v3);
      return 0LL;
    }
  }
  return result;
}
