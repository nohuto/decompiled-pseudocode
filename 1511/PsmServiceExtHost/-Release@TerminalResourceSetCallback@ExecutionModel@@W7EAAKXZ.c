/*
 * XREFs of ?Release@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ @ 0x18002BE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::Release(__int64 a1, unsigned int a2)
{
  return ExecutionModel::TerminalResourceSetCallback::Release(
           (ExecutionModel::TerminalResourceSetCallback *)(a1 - 8),
           a2);
}
