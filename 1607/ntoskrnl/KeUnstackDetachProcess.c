/*
 * XREFs of KeUnstackDetachProcess @ 0x1400CD1BC
 * Callers:
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     MmCreateShadowMapping @ 0x14065BC98 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 *     EtwpTiQueryVad @ 0x1406A63DC (EtwpTiQueryVad.c)
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
    KiDetachProcess(ApcState, 0LL);
  }
}
