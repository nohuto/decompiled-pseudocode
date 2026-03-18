/*
 * XREFs of NtUnloadKey @ 0x14054B940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return NtUnloadKey2(KeyObjectAttributes, 0);
}
