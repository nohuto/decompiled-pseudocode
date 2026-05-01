/*
 * XREFs of RmpPsmAppFamilyTableAddActivityHost @ 0x180008A9C
 * Callers:
 *     RmpActivityHostCreateHostPsm @ 0x180008598 (RmpActivityHostCreateHostPsm.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006644 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008AFC (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008B70 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableAddActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // edi
  struct _RM_ACTIVITY_HOST *v3; // rdx
  _QWORD *v4; // rbx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  v2 = RmpPsmAppFamilyTableFindOrCreateByActivityHost(a1, (struct _RM_PSM_APP_FAMILY **)&P);
  if ( v2 < 0 )
  {
    v4 = P;
  }
  else
  {
    v3 = a1;
    v4 = P;
    v2 = RmpPsmAppFamilyAddActivityHost((struct _RM_PSM_APP_FAMILY *)P, v3);
    if ( v2 >= 0 )
    {
      v4 = 0LL;
      v2 = 0;
    }
  }
  if ( v4 && !v4[69] )
    RmpPsmAppFamilyTableRemove(v4);
  return (unsigned int)v2;
}
