/*
 * XREFs of ?CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z @ 0x18001D83C
 * Callers:
 *     ?CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A5EC (-CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAU.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Initialize@ApplicationPackageInfo@ExecutionModel@@QEAAJPEBGKPEAX@Z @ 0x18001B948 (-Initialize@ApplicationPackageInfo@ExecutionModel@@QEAAJPEBGKPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::ApplicationPackageInfo::CreateInstance(
        unsigned int a1,
        void *a2,
        unsigned __int16 *a3,
        struct IUnknown **a4)
{
  ExecutionModel::ApplicationPackageInfo *v5; // rbx
  struct IUnknown *v9; // rax
  struct IUnknown *v10; // rdx
  int v11; // ebx
  struct IUnknown *v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v9 = (struct IUnknown *)malloc(0x58uLL);
    v10 = v9;
    if ( v9 )
    {
      LODWORD(v9[1].lpVtbl) = 0;
      v9->lpVtbl = (struct IUnknownVtbl *)&ExecutionModel::ApplicationPackageInfo::`vftable';
      v9[2].lpVtbl = (struct IUnknownVtbl *)&v9[4];
      v9[3].lpVtbl = (struct IUnknownVtbl *)&v9[4];
      LOWORD(v9[4].lpVtbl) = 0;
      LODWORD(v9[6].lpVtbl) = 0;
      v9[7].lpVtbl = 0LL;
      v9[8].lpVtbl = (struct IUnknownVtbl *)&v9[8];
      v9[9].lpVtbl = (struct IUnknownVtbl *)&v9[8];
      v9[10].lpVtbl = 0LL;
      v5 = (ExecutionModel::ApplicationPackageInfo *)v13;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v5 != (ExecutionModel::ApplicationPackageInfo *)v10 )
    {
      ATL::AtlComPtrAssign(&v13, v10);
      v5 = (ExecutionModel::ApplicationPackageInfo *)v13;
    }
    if ( v5 )
    {
      v11 = ExecutionModel::ApplicationPackageInfo::Initialize(v5, a3, a1, a2);
      if ( v11 >= 0 )
      {
        *a4 = v13;
        v13 = 0LL;
      }
    }
    else
    {
      v11 = -2147024882;
    }
  }
  else
  {
    v11 = -2147024809;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((ExecutionModel::HostResourceInfo **)&v13);
  return (unsigned int)v11;
}
