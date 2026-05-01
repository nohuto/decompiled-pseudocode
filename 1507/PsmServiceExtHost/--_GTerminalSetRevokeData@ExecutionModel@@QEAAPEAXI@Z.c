/*
 * XREFs of ??_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z @ 0x18003DDE8
 * Callers:
 *     ?OnRelease@TerminalResourceSetCallback@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x18003DE40 (-OnRelease@TerminalResourceSetCallback@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x18003DF10 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

ExecutionModel::TerminalSetRevokeData *__fastcall ExecutionModel::TerminalSetRevokeData::`scalar deleting destructor'(
        ExecutionModel::TerminalSetRevokeData *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
