/*
 * XREFs of RtlDecodeSystemPointer @ 0x180083A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlDecodeSystemPointer(PVOID Ptr)
{
  return (PVOID)(__ROR8__(Ptr, 64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]);
}
