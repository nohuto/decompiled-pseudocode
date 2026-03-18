/*
 * XREFs of KeUnstackDetachProcess @ 0x140113F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess((struct _KTHREAD *)ApcState, 0);
  }
}
