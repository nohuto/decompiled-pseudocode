/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x1401265C0
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState(XStateSave);
}
