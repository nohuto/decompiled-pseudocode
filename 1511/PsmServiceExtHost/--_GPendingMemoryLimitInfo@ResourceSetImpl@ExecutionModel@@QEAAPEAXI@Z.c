/*
 * XREFs of ??_GPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@QEAAPEAXI@Z @ 0x18004E45C
 * Callers:
 *     ?CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimitInfo@12@@Z @ 0x180003B54 (-CompleteTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@IEAAJPEAUPendingMemoryLimi.c)
 *     ?Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ @ 0x1800138A0 (-Release@ResourceSetImpl@ExecutionModel@@UEAAKXZ.c)
 *     ??1?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x180036EC8 (--1-$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U-$default_delete@UPendi.c)
 *     ??4?$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U?$default_delete@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@@utl@@@utl@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004E42C (--4-$unique_ptr@UPendingMemoryLimitInfo@ResourceSetImpl@ExecutionModel@@U-$default_delete@UPendi.c)
 *     ?BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@PEAU_ResourceSetInfo@2@PEBU_MemoryPolicyManifest@@PEA_N@Z @ 0x18004E4F8 (-BeginTransitionBackingResourceSet@ResourceSetImpl@ExecutionModel@@QEAAJPEAUIResourceManager@2@P.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *__fastcall ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo::`scalar deleting destructor'(
        ExecutionModel::ResourceSetImpl::PendingMemoryLimitInfo *this,
        unsigned int a2)
{
  void *v3; // rcx

  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 120LL))(*(_QWORD *)this);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    operator delete(v3);
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(
    (ExecutionModel::ResourceSetImpl **)this,
    a2);
  operator delete(this);
  return this;
}
