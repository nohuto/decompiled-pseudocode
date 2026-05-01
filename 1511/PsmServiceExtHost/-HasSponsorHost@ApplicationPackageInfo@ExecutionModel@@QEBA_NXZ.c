/*
 * XREFs of ?HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ @ 0x18001BA88
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z @ 0x18001BAFC (-RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z.c)
 *     ?FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourceSet@2@@Z @ 0x18004DC5C (-FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourc.c)
 * Callees:
 *     ?CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x180013230 (-CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ.c)
 */

char __fastcall ExecutionModel::ApplicationPackageInfo::HasSponsorHost(ExecutionModel::ApplicationPackageInfo *this)
{
  char *v1; // r10
  __int64 i; // r9
  __int64 *v3; // r9

  v1 = (char *)this + 64;
  for ( i = *((_QWORD *)this + 8); (char *)i != v1; i = *v3 )
  {
    if ( ExecutionModel::HostResourceInfo::CanSponsorPPLE(*(ExecutionModel::HostResourceInfo **)(i + 16)) )
      return 1;
  }
  return 0;
}
