/*
 * XREFs of NtLoadKeyEx @ 0x1404454BC
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 */

NTSTATUS __stdcall NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey)
{
  char v5; // [rsp+38h] [rbp-20h]
  HANDLE Handle; // [rsp+80h] [rbp+28h]
  ACCESS_MASK DesiredAccess; // [rsp+88h] [rbp+30h]
  HANDLE *v8; // [rsp+90h] [rbp+38h]

  return CmLoadKeyHelper(
           TargetKey,
           (__int64)SourceFile,
           Flags,
           (__int64)TrustClassKey,
           Handle,
           DesiredAccess,
           v8,
           v5,
           0LL);
}
