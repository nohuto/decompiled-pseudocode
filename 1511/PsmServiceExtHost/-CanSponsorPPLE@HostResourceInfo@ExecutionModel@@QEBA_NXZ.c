/*
 * XREFs of ?CanSponsorPPLE@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x180013230
 * Callers:
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ @ 0x18001BA88 (-HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall ExecutionModel::HostResourceInfo::CanSponsorPPLE(ExecutionModel::HostResourceInfo *this)
{
  char *v1; // rax
  char v2; // dl
  char *v3; // rcx
  __int64 v4; // r8

  v1 = (char *)*((_QWORD *)this + 14);
  v2 = 0;
  v3 = (char *)this + 112;
  while ( 1 )
  {
    if ( v1 == v3 )
      return v2;
    v4 = *((_QWORD *)v1 + 2);
    if ( (*(_BYTE *)(v4 + 144) & 4) != 0 )
      break;
    if ( v2 || *(_BYTE *)(v4 + 121) )
    {
      v1 = *(char **)v1;
      v2 = 1;
    }
    else
    {
      v1 = *(char **)v1;
      v2 = 0;
    }
  }
  return 0;
}
