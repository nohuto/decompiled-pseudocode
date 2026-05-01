/*
 * XREFs of ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x18000776C
 * Callers:
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@1@@Z @ 0x1800062D4 (--$_DeleteNode@U-$_DlistNode@V-$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@.c)
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x1800137F0 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A5EC (-CreateAppPackageInfo@HostResources@ExecutionModel@@IEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAU.c)
 *     ?FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIUnknown@@@Z @ 0x18001A6F0 (-FindAppPackageInfo@HostResources@ExecutionModel@@QEAAJKPEAXAEBU_AppModelActivationId@@PEAPEAUIU.c)
 *     ?CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z @ 0x18001D83C (-CreateInstance@ApplicationPackageInfo@ExecutionModel@@SAJKPEAXPEBGPEAPEAUIUnknown@@@Z.c)
 *     ?Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAPEAX@Z @ 0x180020994 (-Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAP.c)
 *     ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x1800256A4 (-CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF.c)
 *     ?Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@Z @ 0x1800257FC (-Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEA.c)
 * Callees:
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0 (-Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

unsigned int __fastcall ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(ExecutionModel::HostResourceInfo **a1)
{
  unsigned int (__fastcall *v1)(ExecutionModel::HostResourceInfo *__hidden); // rdi
  unsigned int result; // eax

  if ( *a1 )
  {
    v1 = *(unsigned int (__fastcall **)(ExecutionModel::HostResourceInfo *__hidden))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ExecutionModel::HostResourceInfo::Release )
    {
      return ExecutionModel::HostResourceInfo::Release(*a1);
    }
    else if ( v1 == ExecutionModel::ApplicationPackageInfo::Release )
    {
      return ExecutionModel::ApplicationPackageInfo::Release(*a1);
    }
    else
    {
      return v1(*a1);
    }
  }
  return result;
}
