/*
 * XREFs of NtLoadKey @ 0x140581674
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1404A378C (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
