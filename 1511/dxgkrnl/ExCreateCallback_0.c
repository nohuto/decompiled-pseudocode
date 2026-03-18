/*
 * XREFs of ExCreateCallback_0 @ 0x1C0011700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ExCreateCallback_0(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  return ExCreateCallback(CallbackObject, ObjectAttributes, Create, AllowMultipleCallbacks);
}
