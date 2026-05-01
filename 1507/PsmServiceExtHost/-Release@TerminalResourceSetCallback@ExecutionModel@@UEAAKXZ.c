/*
 * XREFs of ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x18003E140
 * Callers:
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ @ 0x1800250C0 (-Release@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x18003DD60 (--_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::Release(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v1 && this )
    ExecutionModel::TerminalResourceSetCallback::`scalar deleting destructor'(this);
  return v1;
}
