/*
 * XREFs of ?RmpResourceSetAddPpleDonors@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x1800020C0
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002B30 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 */

__int64 __fastcall RmpResourceSetAddPpleDonors(struct _RM_RESOURCE_SET *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  struct _RM_RESOURCE_SET *ForegroundSet; // rax
  __int64 result; // rax
  struct _RM_PSM_APP_FAMILY *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  RmpPsmAppFamilyTableFindByActivityHost(*(struct _RM_ACTIVITY_HOST **)(*((_QWORD *)a1 + 5) + 1392LL), &v6);
  v2 = (_QWORD *)((char *)v6 + 560);
  if ( v6 == (struct _RM_PSM_APP_FAMILY *)-560LL )
    return 0LL;
  while ( 1 )
  {
    v3 = *(v2 - 1);
    if ( *(_DWORD *)(v3 + 600) == 2 )
    {
      ForegroundSet = RmpActivityHostGetForegroundSet((struct _RM_ACTIVITY_HOST *)v3);
      if ( ForegroundSet )
      {
        result = RmpResourceSetAddRecipient(ForegroundSet, a1, 7u);
        if ( (int)result < 0 )
          break;
      }
    }
    v2 = (_QWORD *)*v2;
    if ( !v2 )
      return 0LL;
  }
  return result;
}
