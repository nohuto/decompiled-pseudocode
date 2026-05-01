/*
 * XREFs of ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0
 * Callers:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1HostResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180013628 (--1HostResourceInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A6F0 (-FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIU.c)
 *     ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894 (-RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z.c)
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ??_GApplicationPackageInfo@ExecutionModel@@UEAAPEAXI@Z @ 0x18001BA50 (--_GApplicationPackageInfo@ExecutionModel@@UEAAPEAXI@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ApplicationPackageInfo::Release(ExecutionModel::ApplicationPackageInfo *this)
{
  int v1; // ebx
  void *(__fastcall *v3)(ExecutionModel::ApplicationPackageInfo *__hidden, unsigned int); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v1 < 0 )
    __int2c();
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(ExecutionModel::ApplicationPackageInfo *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == ExecutionModel::ApplicationPackageInfo::`scalar deleting destructor' )
      ExecutionModel::ApplicationPackageInfo::`scalar deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return (unsigned int)v1;
}
