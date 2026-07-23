/*
 * XREFs of NtUnloadKey @ 0x14054D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return NtUnloadKey2(KeyObjectAttributes, 0);
}
