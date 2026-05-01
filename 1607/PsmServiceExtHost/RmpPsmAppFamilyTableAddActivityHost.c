/*
 * XREFs of RmpPsmAppFamilyTableAddActivityHost @ 0x18000554C
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180005F08 (RmpActivityHostCreateHostPsm.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180004968 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800055B0 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180005734 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableAddActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // eax
  struct _RM_PSM_APP_FAMILY *v3; // rbx
  int v4; // edi
  struct _RM_PSM_APP_FAMILY *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = RmpPsmAppFamilyTableFindOrCreateByActivityHost(a1, &v6);
  v3 = v6;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v4 = RmpPsmAppFamilyAddActivityHost(v6, a1);
    if ( v4 >= 0 )
    {
      v3 = 0LL;
      v4 = 0;
    }
  }
  if ( v3 && !*((_QWORD *)v3 + 69) )
    RmpPsmAppFamilyTableRemove(*((struct _RM_SERVICE_GLOBALS **)a1 + 5), v3);
  return (unsigned int)v4;
}
