/*
 * XREFs of ?FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A6F0
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0 (-Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

int __fastcall ExecutionModel::HostResources::FindAppPackageInfo(
        ExecutionModel::HostResources *this,
        int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct IUnknown **a5)
{
  bool v5; // zf
  void *v6; // rsi
  int v9; // r12d
  __int64 v10; // rcx
  int PackageFullNameFromKey; // eax
  _QWORD *v12; // r14
  _QWORD *v13; // rdi
  ExecutionModel::HostResourceInfo *v14; // rax
  ExecutionModel::HostResourceInfo *v15; // rbx
  unsigned int (__fastcall *v16)(ExecutionModel::ApplicationPackageInfo *__hidden); // rsi
  ExecutionModel::HostResourceInfo *v18; // [rsp+20h] [rbp-168h] BYREF
  int v19; // [rsp+28h] [rbp-160h] BYREF
  void *v20; // [rsp+30h] [rbp-158h]
  wchar_t String1[128]; // [rsp+40h] [rbp-148h] BYREF

  v5 = *(_DWORD *)a4 == 0;
  v6 = a3;
  v20 = a3;
  v9 = -2147467259;
  v19 = 256;
  if ( v5 )
    return -2147024809;
  v10 = *((_QWORD *)a4 + 1);
  String1[0] = 0;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(v10, String1, &v19);
  if ( PackageFullNameFromKey < 0 )
    return PackageFullNameFromKey | 0x10000000;
  v12 = (_QWORD *)((char *)this + 96);
  v13 = (_QWORD *)*v12;
  while ( v13 != v12 )
  {
    v14 = (ExecutionModel::HostResourceInfo *)v13[2];
    v15 = 0LL;
    v18 = 0LL;
    if ( v14 )
    {
      v15 = v14;
      (*(void (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)v14 + 8LL))(v14);
      v6 = v20;
      v18 = v15;
    }
    if ( a2 == *((_DWORD *)v15 + 12) )
    {
      if ( EqualSid(v6, *((PSID *)v15 + 7)) && !_wcsicmp(String1, *((const wchar_t **)v18 + 2)) )
      {
        if ( a5 )
        {
          v9 = 0;
          *a5 = (struct IUnknown *)v18;
          v18 = 0LL;
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
        return v9;
      }
      v15 = v18;
    }
    if ( v15 )
    {
      v16 = *(unsigned int (__fastcall **)(ExecutionModel::ApplicationPackageInfo *__hidden))(*(_QWORD *)v15 + 16LL);
      if ( v16 == ExecutionModel::ApplicationPackageInfo::Release )
        ExecutionModel::ApplicationPackageInfo::Release(v15);
      else
        v16(v15);
    }
    v13 = (_QWORD *)*v13;
    v6 = v20;
  }
  return v9;
}
