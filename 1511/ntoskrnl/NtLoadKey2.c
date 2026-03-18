/*
 * XREFs of NtLoadKey2 @ 0x14050D138
 * Callers:
 *     <none>
 * Callees:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 */

NTSTATUS __stdcall NtLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  return NtLoadKeyEx(KeyObjectAttributes, FileObjectAttributes, Flags, 0LL);
}
