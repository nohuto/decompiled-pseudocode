/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800DFE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlEnumProcessHeaps(PRTL_ENUM_HEAPS_ROUTINE EnumRoutine, PVOID Parameter)
{
  return RtlpEnumProcessHeaps((PRTL_DYNAMIC_HASH_TABLE)EnumRoutine, (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)Parameter, 0);
}
