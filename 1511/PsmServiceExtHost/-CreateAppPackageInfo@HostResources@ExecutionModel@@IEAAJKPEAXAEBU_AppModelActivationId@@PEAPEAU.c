/*
 * XREFs of ?CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A5EC
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ?push_back@?$list@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@QEAA_NAEBV?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@Z @ 0x180006300 (-push_back@-$list@V-$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V-$allocat.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z @ 0x18001D83C (-CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::HostResources::CreateAppPackageInfo(
        ExecutionModel::HostResources *this,
        unsigned int a2,
        void *a3,
        const struct _AppModelActivationId *a4,
        struct IUnknown **a5)
{
  __int64 v8; // rcx
  int PackageFullNameFromKey; // ebx
  int v10; // ebx
  struct IUnknown *v12; // [rsp+20h] [rbp-148h] BYREF
  int v13; // [rsp+28h] [rbp-140h] BYREF
  unsigned __int16 v14[128]; // [rsp+30h] [rbp-138h] BYREF

  v12 = 0LL;
  v13 = 256;
  if ( *(_DWORD *)a4 && a5 )
  {
    v8 = *((_QWORD *)a4 + 1);
    v14[0] = 0;
    PackageFullNameFromKey = PsmGetPackageFullNameFromKey(v8, v14, &v13);
    if ( PackageFullNameFromKey < 0 )
    {
      v10 = PackageFullNameFromKey | 0x10000000;
    }
    else
    {
      v10 = ExecutionModel::ApplicationPackageInfo::CreateInstance(a2, a3, v14, &v12);
      if ( v10 >= 0 )
      {
        if ( (unsigned __int8)utl::list<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>,utl::allocator<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>::push_back(
                                (__int64)this + 96,
                                &v12) )
        {
          *a5 = v12;
          v12 = 0LL;
        }
        else
        {
          v10 = -2147024882;
        }
      }
    }
  }
  else
  {
    v10 = -2147024809;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((ExecutionModel::HostResourceInfo **)&v12);
  return (unsigned int)v10;
}
