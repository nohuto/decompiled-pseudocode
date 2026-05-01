/*
 * XREFs of ?RemoveResourceSet@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180037C2C
 * Callers:
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV-$CComPtr@VResourceSet@Executio.c)
 * Callees:
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@Z @ 0x180038C58 (-TempReleaseResourceSet@ModernActivationResourceInfo@ExecutionModel@@QEAAXAEAV-$CComPtr@VResourc.c)
 *     RmpActivityHostSetProcessResourceSet @ 0x18003BFE8 (RmpActivityHostSetProcessResourceSet.c)
 */

char __fastcall ExecutionModel::ResourceManager::RemoveResourceSet(__int64 a1, ExecutionModel::ResourceSet **a2)
{
  __int64 v3; // rbx
  ExecutionModel::ResourceSet *v4; // rax
  ExecutionModel::ResourceSet *v5; // rbx
  __int64 (__fastcall *v6)(ExecutionModel::ResourceSet *); // rdi
  ExecutionModel::ResourceSet *v7; // rcx
  ExecutionModel::ResourceSet **v8; // r8
  ExecutionModel::ResourceSet **v9; // rdx

  v3 = *((_QWORD *)*a2 + 175);
  LOBYTE(v4) = ExecutionModel::ResourceSet::IsLegacy(*a2);
  if ( (_BYTE)v4 )
  {
    if ( v3 )
    {
      QueryUnbiasedInterruptTime((PULONGLONG)(v3 + 896));
      RmpActivityHostSetProcessResourceSet(v3, 0LL);
      RmpObjectRelease((volatile signed __int32 *)v3);
      v4 = *a2;
      *((_QWORD *)*a2 + 175) = 0LL;
    }
  }
  else
  {
    LOBYTE(v4) = ExecutionModel::ModernActivationResourceInfo::TempReleaseResourceSet(*(ExecutionModel::ModernActivationResourceInfo **)(v3 + 600));
    v7 = *a2;
    if ( !*((_DWORD *)*a2 + 344) )
    {
      v4 = (ExecutionModel::ResourceSet *)((char *)v7 + 1384);
      v8 = (ExecutionModel::ResourceSet **)*((_QWORD *)v7 + 173);
      v9 = (ExecutionModel::ResourceSet **)*((_QWORD *)v7 + 174);
      if ( v8[1] != (ExecutionModel::ResourceSet *)((char *)v7 + 1384) || *v9 != v4 )
        __fastfail(3u);
      *v9 = (ExecutionModel::ResourceSet *)v8;
      v8[1] = (ExecutionModel::ResourceSet *)v9;
      *((_DWORD *)v7 + 344) = 3;
    }
  }
  v5 = *a2;
  if ( *a2 )
  {
    v6 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == ExecutionModel::ResourceSet::Release )
      LOBYTE(v4) = ExecutionModel::ResourceSet::Release(v5);
    else
      LOBYTE(v4) = v6(v5);
  }
  return (char)v4;
}
