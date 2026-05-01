/*
 * XREFs of ?_CallDeleter@?$_RefCountVtable@V?$_RefCountStored@UPendingCustomMemoryLimit@ExecutionModel@@V?$allocator@H@utl@@@utl@@@utl@@UEAAXXZ @ 0x18004E110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ExecutionModel::ResourceSetImpl **__fastcall utl::_RefCountVtable<utl::_RefCountStored<ExecutionModel::PendingCustomMemoryLimit,utl::allocator<int>>>::_CallDeleter(
        __int64 a1,
        unsigned int a2)
{
  return ExecutionModel::PendingCustomMemoryLimit::`scalar deleting destructor'(
           (ExecutionModel::ResourceSetImpl **)(a1 + 8),
           a2);
}
