/*
 * XREFs of ?_FreeRefCount@?$_RefCountVtable@V?$_RefCountStored@UPendingCustomMemoryLimit@ExecutionModel@@V?$allocator@H@utl@@@utl@@@utl@@UEAAXXZ @ 0x18004E1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall utl::_RefCountVtable<utl::_RefCountStored<ExecutionModel::PendingCustomMemoryLimit,utl::allocator<int>>>::_FreeRefCount(
        __int64 a1)
{
  operator delete((void *)(a1 - 8));
}
