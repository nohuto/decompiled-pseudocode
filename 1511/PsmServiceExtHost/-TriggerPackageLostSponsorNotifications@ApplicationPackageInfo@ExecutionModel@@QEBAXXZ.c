/*
 * XREFs of ?TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ @ 0x18001BABC
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z @ 0x18001BAFC (-RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z.c)
 * Callees:
 *     ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50 (-HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z.c)
 */

void __fastcall ExecutionModel::ApplicationPackageInfo::TriggerPackageLostSponsorNotifications(
        ExecutionModel::ApplicationPackageInfo *this)
{
  char *v1; // rdi
  char *i; // rbx
  ExecutionModel::HostResourceInfo *v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 64;
  for ( i = (char *)*((_QWORD *)this + 8); i != v1; i = *(char **)i )
  {
    v3 = (ExecutionModel::HostResourceInfo *)*((_QWORD *)i + 2);
    if ( *((_QWORD *)v3 + 23) )
      ExecutionModel::HostResourceInfo::HostTrySetCustomMemoryLimit(v3, 0LL, &v4);
  }
}
