/*
 * XREFs of ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800030DC
 * Callers:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX2KW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x180001C30 (-RmAcquireResources@ResourceManager@ExecutionModel@@UEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180003424 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020270 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CreateInstance(
        struct ExecutionModel::ResourceManager *a1,
        __int64 a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        int a11,
        char a12,
        struct _RM_ACTIVITY_HOST *a13,
        __int64 a14,
        ExecutionModel::BaseResourceSet **a15)
{
  int v19; // esi
  ExecutionModel::BaseResourceSet *v20; // rdi
  bool v22; // [rsp+38h] [rbp-60h]
  ExecutionModel::BaseResourceSet *v23; // [rsp+80h] [rbp-18h] BYREF

  v23 = 0LL;
  if ( a13 )
    ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(a1, a3, a4, a13);
  v22 = (a10 & 2) != 0;
  v19 = ExecutionModel::BaseResourceSet::AcquireResources(
          a2,
          a13,
          0LL,
          a3,
          a4,
          a5,
          a6,
          v22,
          1,
          a11,
          a14,
          a1,
          ExecutionModel::ExternalResourceSet::ResourceSetFactory,
          a9 != 0,
          &v23);
  if ( v19 < 0 )
  {
    v20 = v23;
  }
  else
  {
    if ( a13 )
      _InterlockedIncrement((volatile signed __int32 *)a13 + 4);
    v20 = v23;
    *((_QWORD *)v23 + 172) = a7;
    *((_QWORD *)v20 + 173) = a8;
    *((_BYTE *)v20 + 1392) = a12;
    *((_BYTE *)v20 + 1394) = (a10 & 4) != 0;
    *((_QWORD *)v20 + 184) = a13;
    if ( !a13 || *((_DWORD *)a13 + 10) )
      goto LABEL_10;
    if ( (unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                            (char *)v20 + 32,
                            (char *)a13 + 48) )
    {
      *((_OWORD *)v20 + 4) = *((_OWORD *)a13 + 32);
      *((_OWORD *)v20 + 5) = *((_OWORD *)a13 + 33);
      *((_OWORD *)v20 + 6) = *((_OWORD *)a13 + 34);
      *((_OWORD *)v20 + 7) = *((_OWORD *)a13 + 35);
      *((_DWORD *)v20 + 32) = *((_DWORD *)a13 + 144);
      *((_DWORD *)v20 + 33) = *((_DWORD *)a13 + 145);
      *((_DWORD *)v20 + 34) = *((_DWORD *)a13 + 146);
      *((_QWORD *)v20 + 18) = *((_QWORD *)a13 + 74);
LABEL_10:
      *a15 = v20;
      return (unsigned int)v19;
    }
    v19 = -2147024882;
  }
  if ( v20 )
  {
    ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(v20);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v19;
}
