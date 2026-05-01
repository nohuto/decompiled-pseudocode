/*
 * XREFs of ?RevokeWorkerCallback@TerminalResourceSetCallback@ExecutionModel@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180037460
 * Callers:
 *     <none>
 * Callees:
 *     ?RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ @ 0x180037304 (-RevokeWorker@TerminalResourceSetCallback@ExecutionModel@@AEAAXXZ.c)
 */

void __fastcall ExecutionModel::TerminalResourceSetCallback::RevokeWorkerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::TerminalResourceSetCallback *a2,
        struct _TP_WORK *a3)
{
  ExecutionModel::TerminalResourceSetCallback::RevokeWorker(a2);
  (*(void (__fastcall **)(ExecutionModel::TerminalResourceSetCallback *))(*(_QWORD *)a2 + 16LL))(a2);
}
