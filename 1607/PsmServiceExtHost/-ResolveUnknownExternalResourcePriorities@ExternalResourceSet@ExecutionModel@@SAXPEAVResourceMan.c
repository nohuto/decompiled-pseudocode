/*
 * XREFs of ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124A0 (-SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002C90C (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x1800365D0 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 * Callees:
 *     RmpPsmAppFamilyEnumerateActivityHostGetNext @ 0x180004B50 (RmpPsmAppFamilyEnumerateActivityHostGetNext.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004DA8 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     RmpActivityHostIsPple @ 0x18000564C (RmpActivityHostIsPple.c)
 *     RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870 (RmpPsmAppFamilyTableFindByActivityHost.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18001A19C (RmpActivityHostHasPpleResourceSet.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
        struct ExecutionModel::ResourceManager *a1,
        unsigned int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  struct ExecutionModel::ResourceManager *v5; // rbx
  char *v8; // rax
  __int64 v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // rdi
  struct ExecutionModel::ResourceManager *v11; // rcx
  __int64 Next; // rax
  char *v13; // rax
  struct ExecutionModel::ResourceManager *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  v5 = (struct ExecutionModel::ResourceManager *)a3;
  if ( a3 )
  {
    v8 = (char *)a4 + 16;
    v9 = a3;
    do
    {
      if ( v8[5] )
        *(_DWORD *)v8 = 101;
      v8 += 24;
      --v9;
    }
    while ( v9 );
  }
  v10 = a5;
  if ( (unsigned __int8)RmpActivityHostIsPple(a5) && (unsigned __int8)RmpActivityHostHasPpleResourceSet(v10) )
  {
    v14 = 0LL;
    RmpPsmAppFamilyTableFindByActivityHost(v10, &v14);
    v14 = (struct ExecutionModel::ResourceManager *)(((unsigned __int64)v14 + 552) & -(__int64)(*((_QWORD *)v14 + 69) != 0LL));
    while ( 1 )
    {
      Next = RmpPsmAppFamilyEnumerateActivityHostGetNext(&v14);
      if ( !Next )
        break;
      if ( (struct _RM_ACTIVITY_HOST *)Next != v10 && *(_DWORD *)(Next + 592) == 2 )
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
          v11,
          a2,
          (unsigned int)v5,
          a4,
          (struct _RM_ACTIVITY_HOST *)Next);
    }
    if ( (_DWORD)v5 )
    {
      v13 = (char *)a4 + 16;
      v11 = v5;
      do
      {
        if ( v13[5] && *((_DWORD *)v13 - 4) == 28 )
          *(_DWORD *)v13 = 101;
        v13 += 24;
        v11 = (struct ExecutionModel::ResourceManager *)((char *)v11 - 1);
      }
      while ( v11 );
    }
  }
  ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
    v11,
    a2,
    (unsigned int)v5,
    a4,
    v10);
}
