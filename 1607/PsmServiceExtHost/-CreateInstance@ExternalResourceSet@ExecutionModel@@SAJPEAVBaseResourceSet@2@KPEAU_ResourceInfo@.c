/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x180003F40
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000DD1C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z @ 0x180004140 (-ResourceSetFactory@ExternalResourceSet@ExecutionModel@@CAJPEAPEAV12@@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000DAA0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW4_RM_REVOKE_REASON_INTERNAL@@W45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAV12@@Z @ 0x180010C2C (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CreateInstance(
        __int64 a1,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        char a11,
        __int64 a12,
        __int64 a13,
        struct ExecutionModel::ExternalResourceSet **a14)
{
  int v18; // eax
  __int64 v19; // rdx
  struct ExecutionModel::ExternalResourceSet *v20; // rbx
  int v21; // esi
  struct ExecutionModel::ExternalResourceSet *v23; // [rsp+60h] [rbp-38h] BYREF

  v23 = 0LL;
  if ( a12 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
      (struct ExecutionModel::ResourceManager *)a1,
      2u,
      a2,
      a3,
      (struct _RM_ACTIVITY_HOST *)a12);
  v18 = ExecutionModel::ExternalResourceSet::ResourceSetFactory(&v23);
  v20 = v23;
  v21 = v18;
  if ( v18 >= 0 )
  {
    *((_QWORD *)v23 + 23) = a1;
    *((_DWORD *)v20 + 4) = *(_DWORD *)(a1 + 16);
    *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 24);
    *((_QWORD *)v20 + 168) = *(_QWORD *)(a1 + 1344);
    v21 = ExecutionModel::BaseResourceSet::AcquireResources(a1, v19, a2, a3, a4, a5);
    if ( v21 >= 0 )
    {
      if ( a12 )
        RmpObjectAddRef(a12);
      *((_QWORD *)v20 + 171) = a6;
      *((_QWORD *)v20 + 172) = a7;
      *((_DWORD *)v20 + 356) &= ~1u;
      *((_DWORD *)v20 + 356) |= a11 & 1;
      *((_DWORD *)v20 + 356) ^= ((unsigned __int8)*((_DWORD *)v20 + 356) ^ (unsigned __int8)(4 * ((a9 & 4) != 0))) & 4;
      *((_QWORD *)v20 + 176) = a12;
      if ( !a12 || *(_DWORD *)(a12 + 48) )
        goto LABEL_11;
      if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                              (char *)v20 + 32,
                              a12 + 56) )
      {
        *((_OWORD *)v20 + 4) = *(_OWORD *)(a12 + 520);
        *((_OWORD *)v20 + 5) = *(_OWORD *)(a12 + 536);
        *((_OWORD *)v20 + 6) = *(_OWORD *)(a12 + 552);
        *((_OWORD *)v20 + 7) = *(_OWORD *)(a12 + 568);
        *((_DWORD *)v20 + 32) = *(_DWORD *)(a12 + 584);
        *((_DWORD *)v20 + 33) = *(_DWORD *)(a12 + 588);
        *((_DWORD *)v20 + 34) = *(_DWORD *)(a12 + 592);
        *((_QWORD *)v20 + 18) = *(_QWORD *)(a12 + 600);
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
