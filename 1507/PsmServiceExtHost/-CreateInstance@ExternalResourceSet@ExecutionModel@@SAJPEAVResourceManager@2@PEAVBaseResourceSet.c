/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003F4D8
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180038280 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ @ 0x18000E4D0 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000ECD0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CreateInstance(
        struct ExecutionModel::ResourceManager *a1,
        __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        int a11,
        char a12,
        struct _RM_ACTIVITY_HOST *a13,
        unsigned __int8 *a14,
        ExecutionModel::BaseResourceSet **a15)
{
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  ExecutionModel::BaseResourceSet *v22; // rdi
  ExecutionModel::BaseResourceSet *v24; // [rsp+80h] [rbp-18h] BYREF

  v24 = 0LL;
  if ( a13 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(a1, a3, a4, a13);
  v19 = ExecutionModel::BaseResourceSet::AcquireResources(
          a2,
          (__int64)a13,
          0LL,
          a3,
          (int *)a4,
          a5,
          a6,
          (a10 & 2) != 0,
          1u,
          a11,
          a14,
          (struct IUnknownVtbl *)a1,
          (struct IUnknown *)ExecutionModel::ExternalResourceSet::ResourceSetFactory,
          a9 != 0,
          (struct IUnknown **)&v24);
  if ( v19 >= 0 )
  {
    if ( a13 )
      _InterlockedIncrement((volatile signed __int32 *)a13 + 4);
    v22 = v24;
    *((_QWORD *)v24 + 172) = a7;
    *((_QWORD *)v22 + 173) = a8;
    *((_BYTE *)v22 + 1392) = a12;
    *((_BYTE *)v22 + 1394) = (a10 & 4) != 0;
    *((_QWORD *)v22 + 184) = a13;
    if ( a13 && !*((_DWORD *)a13 + 10) )
    {
      if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
              (__int64)v22 + 32,
              (__int64 *)a13 + 6,
              v20,
              v21) )
      {
        v19 = -2147024882;
        goto LABEL_13;
      }
      *((_OWORD *)v22 + 4) = *((_OWORD *)a13 + 32);
      *((_OWORD *)v22 + 5) = *((_OWORD *)a13 + 33);
      *((_OWORD *)v22 + 6) = *((_OWORD *)a13 + 34);
      *((_OWORD *)v22 + 7) = *((_OWORD *)a13 + 35);
      *((_DWORD *)v22 + 32) = *((_DWORD *)a13 + 144);
      *((_DWORD *)v22 + 33) = *((_DWORD *)a13 + 145);
      *((_DWORD *)v22 + 34) = *((_DWORD *)a13 + 146);
      *((_QWORD *)v22 + 18) = *((_QWORD *)a13 + 74);
    }
    *a15 = v22;
    return (unsigned int)v19;
  }
  v22 = v24;
LABEL_13:
  if ( v22 )
  {
    ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v22);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v19;
}
