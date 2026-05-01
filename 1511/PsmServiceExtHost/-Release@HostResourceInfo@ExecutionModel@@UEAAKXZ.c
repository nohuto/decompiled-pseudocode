/*
 * XREFs of ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0
 * Callers:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 *     ?RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z @ 0x18001BAFC (-RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z.c)
 * Callees:
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180013628 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::Release(ExecutionModel::HostResourceInfo *this)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < 0 )
    __int2c();
  if ( !v2 && this )
  {
    ExecutionModel::HostResourceInfo::~HostResourceInfo(this);
    operator delete(this);
  }
  return (unsigned int)v2;
}
