/*
 * XREFs of BiZwQueryValueKey @ 0x14012E5D4
 * Callers:
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwQueryValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, void *a4, ULONG a5, ULONG *a6)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, a5, a6);
}
