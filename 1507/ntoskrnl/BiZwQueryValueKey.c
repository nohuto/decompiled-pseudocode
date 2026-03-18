/*
 * XREFs of BiZwQueryValueKey @ 0x14014FE38
 * Callers:
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwQueryValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, void *a4, ULONG a5, ULONG *a6)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, a5, a6);
}
