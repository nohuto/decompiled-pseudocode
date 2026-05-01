/*
 * XREFs of ?CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimitInfo@12@@Z @ 0x180003B54
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180003BB0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??4?$unique_ptr@U_MemoryPolicyManifest@@U?$default_delete@U_MemoryPolicyManifest@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004D8B8 (--4-$unique_ptr@U_MemoryPolicyManifest@@U-$default_delete@U_MemoryPolicyManifest@@@utl@@@utl@@QE.c)
 *     ??_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z @ 0x18004E45C (--_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::CompleteTransitionBackingResourceSet(
        ExecutionModel::ResourceSetImpl *this,
        struct ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *a2)
{
  struct ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v2; // rdi
  unsigned int v5; // edx
  int v6; // ebp
  struct IUnknown *v7; // rdx
  struct IUnknown **v8; // rcx
  ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *v9; // rcx

  v2 = (struct ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *)*((_QWORD *)this + 25);
  if ( a2 != v2 )
    return 2147500037LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 24LL))(*(_QWORD *)v2);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 120LL))(*((_QWORD *)this + 23));
    v7 = (struct IUnknown *)**((_QWORD **)this + 25);
    if ( *((struct IUnknown **)this + 23) != v7 )
      ATL::AtlComPtrAssign((struct IUnknown **)this + 23, v7);
    v8 = (struct IUnknown **)*((_QWORD *)this + 25);
    if ( *v8 )
      ATL::AtlComPtrAssign(v8, 0LL);
    *(_QWORD *)(*((_QWORD *)this + 20) + 208LL) = *(_QWORD *)(*((_QWORD *)this + 25) + 16LL);
    utl::unique_ptr<_MemoryPolicyManifest,utl::default_delete<_MemoryPolicyManifest>>::operator=(
      *((_QWORD *)this + 20) + 184LL,
      *((_QWORD *)this + 25) + 8LL);
  }
  v9 = (ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v9 )
    ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo::`scalar deleting destructor'(v9, v5);
  return (unsigned int)v6;
}
