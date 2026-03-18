/*
 * XREFs of KeRestoreExtendedProcessorState @ 0x140082C8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeRestoreExtendedProcessorState(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedAndSupervisorState(XStateSave);
}
