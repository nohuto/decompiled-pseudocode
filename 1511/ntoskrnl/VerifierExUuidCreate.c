/*
 * XREFs of VerifierExUuidCreate @ 0x1406C0440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierExUuidCreate(UUID *Uuid)
{
  return pXdvExUuidCreate(Uuid);
}
