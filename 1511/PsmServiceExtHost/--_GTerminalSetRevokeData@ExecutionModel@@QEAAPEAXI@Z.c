/*
 * XREFs of ??_GTerminalSetRevokeData@ExecutionModel@@QEAAPEAXI@Z @ 0x18004333C
 * Callers:
 *     ?OnRelease@TerminalResourceSetCallback@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z @ 0x180043390 (-OnRelease@TerminalResourceSetCallback@ExecutionModel@@UEAAJPEAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ?RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800434E0 (-RecvCallback@TerminalResourceSetCallback@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackTy.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

ExecutionModel::TerminalSetRevokeData *__fastcall ExecutionModel::TerminalSetRevokeData::`scalar deleting destructor'(
        ExecutionModel::TerminalSetRevokeData *this)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
