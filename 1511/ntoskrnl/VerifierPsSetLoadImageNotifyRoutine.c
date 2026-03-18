/*
 * XREFs of VerifierPsSetLoadImageNotifyRoutine @ 0x1406C0C5C
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
