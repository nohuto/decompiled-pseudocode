/*
 * XREFs of ??_GPendingCustomMemoryLimit@ExecutionModel@@QEAAPEAXI@Z @ 0x18004D940
 * Callers:
 *     ?_CallDeleter@?$_RefCountVtable@V?$_RefCountStored@UPendingCustomMemoryLimit@ExecutionModel@@V?$allocator@H@utl@@@utl@@@utl@@UEAAXXZ @ 0x18004E110 (-_CallDeleter@-$_RefCountVtable@V-$_RefCountStored@UPendingCustomMemoryLimit@ExecutionModel@@V-$.c)
 * Callees:
 *     ??1?$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001FF6C (--1-$CComPtrBase@UIResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 */

ExecutionModel::ResourceSetImpl **__fastcall ExecutionModel::PendingCustomMemoryLimit::`scalar deleting destructor'(
        ExecutionModel::ResourceSetImpl **this,
        unsigned int a2)
{
  ATL::CComPtrBase<ExecutionModel::IResourceSet>::~CComPtrBase<ExecutionModel::IResourceSet>(this + 3, a2);
  return this;
}
