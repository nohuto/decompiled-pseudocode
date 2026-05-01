/*
 * XREFs of ?QueryInterface@TerminalResourceSetCallback@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ExecutionModel::TerminalResourceSetCallback::QueryInterface(
           (ExecutionModel::TerminalResourceSetCallback *)(a1 - 8),
           a2,
           a3);
}
