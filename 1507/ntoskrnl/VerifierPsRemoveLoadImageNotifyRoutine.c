/*
 * XREFs of VerifierPsRemoveLoadImageNotifyRoutine @ 0x14074246C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsRemoveLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return pXdvPsRemoveLoadImageNotifyRoutine(NotifyRoutine);
}
