/*
 * XREFs of ?ReduceExternalResourcePriorities@ResourceSetClientProxy@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180014720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ResourceSetClientProxy::ReduceExternalResourcePriorities(
        ResourceSetClientProxy *this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  return (*(__int64 (__fastcall **)(ResourceSetClientProxy *, _QWORD, struct ExecutionModel::_ResourceInfo *const))(*(_QWORD *)this + 112LL))(
           this,
           a2,
           a3);
}
