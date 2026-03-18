/*
 * XREFs of VerifierPsSetLoadImageNotifyRoutine @ 0x14074249C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierPsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return pXdvPsSetLoadImageNotifyRoutine(NotifyRoutine);
}
