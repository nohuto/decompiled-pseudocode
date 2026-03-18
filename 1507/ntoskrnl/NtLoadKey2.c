/*
 * XREFs of NtLoadKey2 @ 0x140584524
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 */

NTSTATUS __stdcall NtLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  char v4; // [rsp+38h] [rbp-20h]

  return CmLoadKeyHelper(KeyObjectAttributes, (__int64)FileObjectAttributes, Flags, 0LL, 0LL, 0, 0LL, v4, 0LL);
}
