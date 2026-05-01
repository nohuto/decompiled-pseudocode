/*
 * XREFs of ?AddRef@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x180025090
 * Callers:
 *     ?AddRef@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ @ 0x1800250A0 (-AddRef@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::AddRef(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
