/*
 * XREFs of ?NotifyPendingResourceSetTransition@RmpRpExtResourceSetThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180029030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpExtResourceSetThunk::NotifyPendingResourceSetTransition(
        RmpRpExtResourceSetThunk *this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  return RmSrvResourceSetNotifyPendingCommitLimitChange(
           *((struct _RM_SERVICE_GLOBALS **)this + 1),
           *((_QWORD *)this + 2),
           *((_QWORD *)a2 + 3));
}
