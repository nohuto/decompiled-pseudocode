/*
 * XREFs of ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x180014A00
 * Callers:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x180004B88 (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z @ 0x180013EF0 (-SetAsApplied@HostResourceInfo@ExecutionModel@@QEAAJPEAUIResourceSet@2@@Z.c)
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x1800143F0 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180015500 (-Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourc.c)
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x1800156E0 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ResourceSetPropertyType@@K@Z @ 0x180015E80 (-Handle_ResSet_SetProperty@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Resourc.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180016020 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180016AE0 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@W7EAAKXZ @ 0x180025220 (-Release@ResourceSetImpl@ExecutionModel@@W7EAAKXZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ @ 0x180025230 (-Release@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ.c)
 * Callees:
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800174E0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Release(ExecutionModel::ResourceSetImpl *this)
{
  unsigned __int32 v2; // ebx
  ExecutionModel::ResourcePolicyEngine *v4; // rdi
  unsigned int (__fastcall *v5)(ExecutionModel::ResourcePolicyEngine *__hidden); // rbp
  __int64 v6; // r14
  __int64 v7; // r14

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSet'};
    *((_QWORD *)this + 1) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSetCallback'};
    *((_QWORD *)this + 2) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
    v4 = (ExecutionModel::ResourcePolicyEngine *)*((_QWORD *)this + 23);
    if ( v4 )
    {
      v5 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyEngine *__hidden))(*(_QWORD *)v4 + 16LL);
      if ( v5 == ExecutionModel::ResourcePolicyEngine::Release )
        ExecutionModel::ResourcePolicyEngine::Release(v4);
      else
        v5(v4);
    }
    v6 = *((_QWORD *)this + 22);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 22));
    v7 = *((_QWORD *)this + 20);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 20));
    operator delete(this);
  }
  return v2;
}
