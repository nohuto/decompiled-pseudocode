/*
 * XREFs of NtLoadKey @ 0x1405811C8
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x14049B5F4 (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
