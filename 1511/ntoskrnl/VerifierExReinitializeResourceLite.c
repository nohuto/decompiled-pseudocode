/*
 * XREFs of VerifierExReinitializeResourceLite @ 0x1406C0400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierExReinitializeResourceLite(PERESOURCE Resource)
{
  return pXdvExReinitializeResourceLite(Resource);
}
