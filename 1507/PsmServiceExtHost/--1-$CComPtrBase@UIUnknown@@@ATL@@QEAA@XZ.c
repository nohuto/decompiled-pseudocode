/*
 * XREFs of ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x180004C70
 * Callers:
 *     ?PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z @ 0x180014338 (-PurgeResourceSets@HostResourceInfo@ExecutionModel@@QEAAXH@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAPEAX@Z @ 0x180019648 (-Handle_ClosePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAP.c)
 *     ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x180021044 (-CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF.c)
 *     ?Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAU_WNF_STATE_NAME@@PEAPEAX@Z @ 0x18002119C (-Handle_CreatePolicyEngineClientContext@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEA.c)
 * Callees:
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180013EA0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

unsigned int __fastcall ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(ExecutionModel::HostResourceInfo **a1)
{
  unsigned int (__fastcall *v1)(ExecutionModel::HostResourceInfo *__hidden); // rdi
  unsigned int result; // eax

  if ( *a1 )
  {
    v1 = *(unsigned int (__fastcall **)(ExecutionModel::HostResourceInfo *__hidden))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == ExecutionModel::HostResourceInfo::Release )
      return ExecutionModel::HostResourceInfo::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
