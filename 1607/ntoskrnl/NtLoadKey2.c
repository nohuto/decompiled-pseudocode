/*
 * XREFs of NtLoadKey2 @ 0x140548D6C
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 */

NTSTATUS __stdcall NtLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  int v4; // [rsp+38h] [rbp-30h]

  return CmLoadDifferencingKey(
           (__int64)KeyObjectAttributes,
           (__int64)FileObjectAttributes,
           Flags,
           0LL,
           0LL,
           0,
           0LL,
           v4,
           0LL,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
