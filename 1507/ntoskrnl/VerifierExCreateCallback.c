/*
 * XREFs of VerifierExCreateCallback @ 0x140741B64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  return pXdvExCreateCallback(CallbackObject, ObjectAttributes, Create, AllowMultipleCallbacks);
}
