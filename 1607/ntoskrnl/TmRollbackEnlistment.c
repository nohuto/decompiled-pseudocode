/*
 * XREFs of TmRollbackEnlistment @ 0x140001210
 * Callers:
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackEnlistment(Enlistment, TmVirtualClock);
}
