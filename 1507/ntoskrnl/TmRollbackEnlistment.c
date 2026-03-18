/*
 * XREFs of TmRollbackEnlistment @ 0x140001210
 * Callers:
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackEnlistment(Enlistment, TmVirtualClock);
}
