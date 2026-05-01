/*
 * XREFs of ?HostTrySetCustomMemoryLimit@HostResourceInfo@ExecutionModel@@QEAAJ_KPEAH@Z @ 0x18004DD50
 * Callers:
 *     ?TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ @ 0x18001BABC (-TriggerPackageLostSponsorNotifications@ApplicationPackageInfo@ExecutionModel@@QEBAXXZ.c)
 *     ?TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z @ 0x18004D0A8 (-TrySetAppMemoryUsageLimit@ResourcePolicyEngine@ExecutionModel@@QEAAJ_K0PEAH@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?CancelPendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJXZ @ 0x18004DAA8 (-CancelPendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJXZ.c)
 *     ?ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DB54 (-ChangeCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z.c)
 *     ?FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourceSet@2@@Z @ 0x18004DC5C (-FindResourceSetForCustomMemoryPolicy@HostResourceInfo@ExecutionModel@@IEAAJ_K_N1PEAPEAUIResourc.c)
 *     ?HasPendingMemoryPolicyChange@HostResourceInfo@ExecutionModel@@QEBA_NXZ @ 0x18004DD30 (-HasPendingMemoryPolicyChange@HostResourceInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@2@_K@Z @ 0x18004DEC4 (-QueuePendingCustomMemoryPolicyChange@HostResourceInfo@ExecutionModel@@IEAAJPEAVResourceSetImpl@.c)
 *     ?NotifyPendingBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@QEAAJ_K@Z @ 0x18004EA08 (-NotifyPendingBackingResourceSetTransition@ResourceSetImpl@ExecutionModel@@QEAAJ_K@Z.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::HostTrySetCustomMemoryLimit(
        unsigned __int64 **this,
        struct IUnknown *a2,
        int *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int ResourceSetForCustomMemoryPolicy; // eax
  unsigned __int64 *v9; // r14
  ExecutionModel::ResourceSetImpl *v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r12
  ExecutionModel::HostResourceInfo *v14; // rcx
  ExecutionModel::HostResourceInfo *v15; // rcx
  ExecutionModel::HostResourceInfo *v16; // rcx
  struct ExecutionModel::ResourceSetImpl *v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v18 = 0LL;
  *a3 = 0;
  if ( a2 || this[23] )
  {
    ResourceSetForCustomMemoryPolicy = ExecutionModel::HostResourceInfo::FindResourceSetForCustomMemoryPolicy(
                                         (ExecutionModel::HostResourceInfo *)this,
                                         a2,
                                         (__int64)a3,
                                         a4,
                                         &v18);
    if ( ResourceSetForCustomMemoryPolicy < 0 )
    {
LABEL_35:
      v4 = ResourceSetForCustomMemoryPolicy;
      goto LABEL_36;
    }
    v9 = this[23];
    v10 = v18;
    if ( v9 )
      v11 = *v9;
    else
      v11 = *((_QWORD *)v18 + 6);
    v12 = (unsigned __int64)a2;
    if ( !a2 )
      v12 = *((_QWORD *)v18 + 6);
    if ( ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange((ExecutionModel::HostResourceInfo *)this) )
      v13 = *this[24];
    else
      v13 = 0LL;
    if ( v12 == v11 )
      goto LABEL_39;
    if ( v12 < v11 || !v11 )
      ExecutionModel::ResourceSetImpl::NotifyPendingBackingResourceSetTransition(v10, v12);
    if ( v12 == v11 || v12 >= v11 && v11 )
    {
LABEL_39:
      if ( ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange((ExecutionModel::HostResourceInfo *)this) )
        ExecutionModel::HostResourceInfo::CancelPendingCustomMemoryPolicyChange(v16);
      ResourceSetForCustomMemoryPolicy = ExecutionModel::HostResourceInfo::ChangeCustomMemoryPolicy(
                                           (ExecutionModel::HostResourceInfo *)this,
                                           v10,
                                           (unsigned __int64)a2);
    }
    else
    {
      if ( ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange((ExecutionModel::HostResourceInfo *)this)
        && (v12 == v13 || v12 >= v13 && v13) )
      {
        if ( !ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange(v14) )
        {
          ResourceSetForCustomMemoryPolicy = -2147467259;
          goto LABEL_35;
        }
        *this[24] = (unsigned __int64)a2;
        ResourceSetForCustomMemoryPolicy = 0;
LABEL_34:
        *a3 = 1;
        goto LABEL_35;
      }
      if ( ExecutionModel::HostResourceInfo::HasPendingMemoryPolicyChange(v14) )
        ExecutionModel::HostResourceInfo::CancelPendingCustomMemoryPolicyChange(v15);
      ResourceSetForCustomMemoryPolicy = ExecutionModel::HostResourceInfo::QueuePendingCustomMemoryPolicyChange(
                                           (ExecutionModel::HostResourceInfo *)this,
                                           v10,
                                           (unsigned __int64)a2);
    }
    if ( ResourceSetForCustomMemoryPolicy < 0 )
      goto LABEL_35;
    goto LABEL_34;
  }
  *a3 = 1;
LABEL_36:
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(&v18, (unsigned int)a2);
  return v4;
}
