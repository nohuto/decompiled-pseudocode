/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800194BC
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000BD0C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000807C (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000EA14 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18000EE70 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018330 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x18001939C (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CreateInstance(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        int a10,
        unsigned __int8 a11,
        struct _RM_OBJECT_HEADER *a12,
        unsigned __int8 *a13,
        struct ExecutionModel::ExternalResourceSet **a14)
{
  int v18; // eax
  __int64 v19; // rdx
  struct ExecutionModel::ExternalResourceSet *v20; // rbx
  int v21; // esi
  __int64 v23; // [rsp+30h] [rbp-58h]
  unsigned int *v24; // [rsp+50h] [rbp-38h]
  struct ExecutionModel::ExternalResourceSet *v25; // [rsp+60h] [rbp-28h] BYREF

  v25 = 0LL;
  if ( a12 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
      (struct ExecutionModel::ResourceManager *)a1,
      2u,
      a2,
      a3,
      a12);
  v18 = ExecutionModel::ExternalResourceSet::ResourceSetFactory(&v25);
  v20 = v25;
  v21 = v18;
  if ( v18 >= 0 )
  {
    v24 = (unsigned int *)v25;
    *((_QWORD *)v25 + 23) = a1;
    *((_DWORD *)v20 + 4) = *(_DWORD *)(a1 + 16);
    *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v20 + 168) = *(_QWORD *)(a1 + 1344);
    v21 = ExecutionModel::BaseResourceSet::AcquireResources(
            (ExecutionModel::BaseResourceSet *)a1,
            v19,
            a2,
            a3,
            a4,
            a5,
            v23,
            a10,
            a13,
            a8,
            v24);
    if ( v21 >= 0 )
    {
      if ( a12 )
        RmpObjectAddRef(a12);
      *((_QWORD *)v20 + 171) = a6;
      *((_QWORD *)v20 + 172) = a7;
      *((_DWORD *)v20 + 356) &= ~1u;
      *((_DWORD *)v20 + 356) = (*((_DWORD *)v20 + 356) | a11) ^ (a9 ^ (unsigned __int8)(*((_BYTE *)v20 + 1424) | a11)) & 4;
      *((_QWORD *)v20 + 176) = a12;
      if ( !a12 || *((_DWORD *)a12 + 14) )
        goto LABEL_11;
      if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
             (__int64)v20 + 32,
             (__int64 *)a12 + 8) )
      {
        *((_OWORD *)v20 + 4) = *((_OWORD *)a12 + 33);
        *((_OWORD *)v20 + 5) = *((_OWORD *)a12 + 34);
        *((_OWORD *)v20 + 6) = *((_OWORD *)a12 + 35);
        *((_OWORD *)v20 + 7) = *((_OWORD *)a12 + 36);
        *((_DWORD *)v20 + 32) = *((_DWORD *)a12 + 148);
        *((_DWORD *)v20 + 33) = *((_DWORD *)a12 + 149);
        *((_DWORD *)v20 + 34) = *((_DWORD *)a12 + 150);
        *((_QWORD *)v20 + 18) = *((_QWORD *)a12 + 76);
LABEL_11:
        *a14 = v20;
        return (unsigned int)v21;
      }
      v21 = -2147024882;
    }
  }
  if ( v20 )
  {
    ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v20);
    (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v21;
}
