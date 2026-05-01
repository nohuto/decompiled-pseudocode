/*
 * XREFs of ??$_EnableAndInitNull@PEAUPendingCustomMemoryLimit@ExecutionModel@@@?$_SharedBase@PEAUPendingCustomMemoryLimit@ExecutionModel@@@utl@@IEAAXAEBQEAUPendingCustomMemoryLimit@ExecutionModel@@PEAV_RefCountBase@1@@Z @ 0x18002BF3C
 * Callers:
 *     ??$_Create@V?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@AEA_KAEAPEAVResourceSetImpl@ExecutionModel@@@?$_SharedAlloc@UPendingCustomMemoryLimit@ExecutionModel@@V?$allocator@H@utl@@@utl@@QEAA?AV?$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@1@AEA_KAEAPEAVResourceSetImpl@ExecutionModel@@@Z @ 0x18004D570 (--$_Create@V-$shared_ptr@UPendingCustomMemoryLimit@ExecutionModel@@@utl@@AEA_KAEAPEAVResourceSet.c)
 * Callees:
 *     ??$_EnableSharedFromThis@PEAUPendingCustomMemoryLimit@ExecutionModel@@@?$_SharedBase@PEAUPendingCustomMemoryLimit@ExecutionModel@@@utl@@AEAAXZZ @ 0x18002BF78 (--$_EnableSharedFromThis@PEAUPendingCustomMemoryLimit@ExecutionModel@@@-$_SharedBase@PEAUPending.c)
 */

__int64 __fastcall utl::_SharedBase<ExecutionModel::PendingCustomMemoryLimit *>::_EnableAndInitNull<ExecutionModel::PendingCustomMemoryLimit *>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  utl::_SharedBase<ExecutionModel::PendingCustomMemoryLimit *>::_EnableSharedFromThis<ExecutionModel::PendingCustomMemoryLimit *>(
    a1,
    *a2);
  result = *a2;
  a1[1] = a3;
  *a1 = result;
  return result;
}
