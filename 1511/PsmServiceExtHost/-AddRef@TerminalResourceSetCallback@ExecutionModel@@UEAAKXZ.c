/*
 * XREFs of ?AddRef@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x180020860
 * Callers:
 *     ?AddRef@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ @ 0x18002BE10 (-AddRef@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::AddRef(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
