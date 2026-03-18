/*
 * XREFs of NtUnloadKey @ 0x1405C2C78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  return NtUnloadKey2(KeyObjectAttributes, 0);
}
