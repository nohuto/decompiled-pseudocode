/*
 * XREFs of ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x1800045A0
 * Callers:
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ @ 0x18002BE40 (-Release@TerminalResourceSetCallback@ExecutionModel@@W7EAAKXZ.c)
 * Callees:
 *     ??_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z @ 0x1800045CC (--_GTerminalResourceSetCallback@ExecutionModel@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::Release(
        ExecutionModel::TerminalResourceSetCallback *this,
        unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 && this )
    ExecutionModel::TerminalResourceSetCallback::`scalar deleting destructor'(this, a2);
  return v2;
}
