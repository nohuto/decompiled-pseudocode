/*
 * XREFs of NtLoadKeyEx @ 0x14049B5F4
 * Callers:
 *     NtLoadKey @ 0x1405811C8 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 */

NTSTATUS __stdcall NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey)
{
  int v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+90h] [rbp+28h]
  ACCESS_MASK DesiredAccess; // [rsp+98h] [rbp+30h]
  __int64 v8; // [rsp+A0h] [rbp+38h]

  return CmLoadDifferencingKey(
           (int)TargetKey,
           (int)SourceFile,
           Flags,
           (int)TrustClassKey,
           v6,
           DesiredAccess,
           v8,
           v5,
           0LL,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
