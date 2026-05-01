/*
 * XREFs of ?RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z @ 0x18001BAFC
 * Callers:
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 * Callees:
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ?HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ @ 0x18001BA88 (-HasSponsorHost@ApplicationPackageInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ @ 0x18001BABC (-TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ApplicationPackageInfo::RemovePackageHost(
        ExecutionModel::ApplicationPackageInfo *this,
        struct ExecutionModel::HostResourceInfo *a2)
{
  unsigned int v3; // edi
  _QWORD **v4; // r14
  __int64 v5; // r11
  char HasSponsorHost; // r15
  _QWORD *i; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(ExecutionModel::HostResourceInfo *); // rbp

  v3 = -2147024894;
  v4 = (_QWORD **)((char *)this + 64);
  HasSponsorHost = ExecutionModel::ApplicationPackageInfo::HasSponsorHost(this);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    if ( i[2] == v5 )
    {
      v8 = (_QWORD *)i[1];
      v9 = (_QWORD *)*i;
      *v8 = *i;
      v9[1] = v8;
      v10 = i[2];
      if ( v10 )
      {
        v11 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)v10 + 16LL);
        if ( v11 == ExecutionModel::HostResourceInfo::Release )
          ExecutionModel::HostResourceInfo::Release((ExecutionModel::HostResourceInfo *)i[2]);
        else
          v11((ExecutionModel::HostResourceInfo *)i[2]);
      }
      operator delete(i);
      --*((_QWORD *)this + 10);
      v3 = 0;
      break;
    }
  }
  if ( HasSponsorHost && !ExecutionModel::ApplicationPackageInfo::HasSponsorHost(this) )
    ExecutionModel::ApplicationPackageInfo::TriggerPackageLostSponsorNotifications(this);
  return v3;
}
