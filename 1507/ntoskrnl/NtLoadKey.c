/*
 * XREFs of NtLoadKey @ 0x14055D22C
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 */

NTSTATUS __stdcall NtLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  char v3; // [rsp+38h] [rbp-20h]

  return CmLoadKeyHelper(KeyObjectAttributes, (__int64)FileObjectAttributes, 0, 0LL, 0LL, 0, 0LL, v3, 0LL);
}
