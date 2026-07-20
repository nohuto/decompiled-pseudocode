/*
 * XREFs of RtlCreateEnvironment @ 0x14000C280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlCreateEnvironment(BOOLEAN Inherit, PWSTR *Environment)
{
  return __imp_RtlCreateEnvironment(Inherit, Environment);
}
