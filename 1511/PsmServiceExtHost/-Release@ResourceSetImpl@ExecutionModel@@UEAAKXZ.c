/*
 * XREFs of ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0
 * Callers:
 *     ?HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAXKPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAPEAU72@@Z @ 0x180012D30 (-HostAcquireTransitionalResourceSet@HostResourceInfo@ExecutionModel@@QEAAJW4RmResourceSetType@@P.c)
 *     ?HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z @ 0x180013280 (-HostApplyResourceSet@HostResourceInfo@ExecutionModel@@QEAAJPEAVResourceSetImpl@2@K@Z.c)
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_KPEA_K@Z @ 0x180014750 (-Handle_AcquireResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAXPEAPEAXW4_Acqu.c)
 *     ?Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourcesType@@@Z @ 0x180014EE0 (-Handle_ResSet_Apply@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KKW4_ApplyResourc.c)
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 *     Srv_ResSet_UpdateImportanceAndResourceLimits @ 0x18001FA20 (Srv_ResSet_UpdateImportanceAndResourceLimits.c)
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@W7EAAKXZ @ 0x18002BFD0 (-Release@ResourceSetImpl@ExecutionModel@@W7EAAKXZ.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ @ 0x18002BFE0 (-Release@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ.c)
 * Callees:
 *     ?Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ @ 0x1800193B0 (-Release@ResourcePolicyEngine@ExecutionModel@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z @ 0x18004E45C (--_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::Release(ExecutionModel::ResourceSetImpl *this, unsigned int a2)
{
  unsigned __int32 v3; // ebx
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v5; // rcx
  ExecutionModel::ResourcePolicyEngine *v6; // rdi
  unsigned int (__fastcall *v7)(ExecutionModel::ResourcePolicyEngine *__hidden); // rbp
  __int64 v8; // r14
  __int64 v9; // r14

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v3 && this )
  {
    *(_QWORD *)this = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSet'};
    *((_QWORD *)this + 1) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IResourceSetCallback'};
    *((_QWORD *)this + 2) = &ExecutionModel::ResourceSetImpl::`vftable'{for `ExecutionModel::IRMExecServicesProviderCallback'};
    v5 = (ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *)*((_QWORD *)this + 25);
    if ( v5 )
      ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo::`scalar deleting destructor'(v5, a2);
    v6 = (ExecutionModel::ResourcePolicyEngine *)*((_QWORD *)this + 24);
    if ( v6 )
    {
      v7 = *(unsigned int (__fastcall **)(ExecutionModel::ResourcePolicyEngine *__hidden))(*(_QWORD *)v6 + 16LL);
      if ( v7 == ExecutionModel::ResourcePolicyEngine::Release )
        ExecutionModel::ResourcePolicyEngine::Release(v6);
      else
        v7(v6);
    }
    v8 = *((_QWORD *)this + 23);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 23));
    v9 = *((_QWORD *)this + 21);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 21));
    operator delete(this);
  }
  return v3;
}
