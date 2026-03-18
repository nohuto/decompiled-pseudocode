/*
 * XREFs of KeUnstackDetachProcess @ 0x1400DF9CC
 * Callers:
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 *     MmCreateShadowMapping @ 0x1406264D0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 * Callees:
 *     <none>
 */

void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  __int64 v1; // r8
  _KPROCESS *Process; // rax

  Process = ApcState->Process;
  if ( Process != (_KPROCESS *)1 )
  {
    if ( !Process )
      ApcState = &KeGetCurrentThread()->SavedApcState;
    KiDetachProcess((struct _KTHREAD *)ApcState, 0LL, v1);
  }
}
