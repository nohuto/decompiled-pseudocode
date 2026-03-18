/*
 * XREFs of NtLoadKey @ 0x1404C6890
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, 0, 0LL);
}
