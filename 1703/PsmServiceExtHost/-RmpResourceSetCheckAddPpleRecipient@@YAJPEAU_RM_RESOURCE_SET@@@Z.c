/*
 * XREFs of ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x180018468
 * Callers:
 *     ?RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z @ 0x180002F70 (-RmpResourceSetEstablishSponsorship@@YAJPEAU_RM_RESOURCE_SET@@K@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z @ 0x18000E2FC (-GetAmount@_ResourceSetInfo@ExecutionModel@@QEBA_KW4Enum@ResourceType@2@@Z.c)
 *     ?RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180016718 (-RmpPsmAppFamilyTableFindByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180018980 (-RmpResourceSetAddRecipient@@YAJPEAU_RM_RESOURCE_SET@@0K@Z.c)
 */

__int64 __fastcall RmpResourceSetCheckAddPpleRecipient(struct _RM_RESOURCE_SET *a1)
{
  __int64 v2; // rcx
  struct _RM_ACTIVITY_HOST *v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  struct ExecutionModel::ResourceSet *Next; // rax
  int v9; // edx
  __int64 v10; // r9
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _RM_PSM_APP_FAMILY *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v2 + 1450) & 0x20) != 0
    || (v6 = *(int *)(v2 + 1408), (unsigned int)v6 <= 0x29) && (v7 = 0x24704100001LL, _bittest64(&v7, v6)) )
  {
    if ( *(_DWORD *)(v2 + 136) )
    {
      v3 = *(struct _RM_ACTIVITY_HOST **)(v2 + 1392);
      v12 = 0LL;
      RmpPsmAppFamilyTableFindByActivityHost(v3, &v12);
      v4 = *((_QWORD *)v12 + 71);
      if ( v4 )
      {
        v11[1] = 3LL;
        v11[0] = RmpActivityHostEnumerateResourceSetGetFirst(v4, 3, 0);
        while ( 1 )
        {
          Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v11);
          if ( !Next )
            break;
          if ( (*((_BYTE *)Next + 1450) & 7) == 3 )
          {
            if ( ExecutionModel::_ResourceSetInfo::GetAmount((__int64)Next + 1408, 1) )
            {
              result = RmpResourceSetAddRecipient(a1, *(struct _RM_RESOURCE_SET **)(v10 + 1384), v9 + 32);
              if ( (int)result < 0 )
                return result;
            }
            return 0LL;
          }
        }
      }
    }
  }
  return 0LL;
}
