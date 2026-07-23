/*
 * XREFs of RtlEncodeSystemPointer @ 0x180078120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEncodeSystemPointer(PVOID Ptr)
{
  return (PVOID)__ROR8__(
                  (unsigned __int64)Ptr ^ (unsigned int)MEMORY[0x7FFE0330],
                  (unsigned __int8)MEMORY[0x7FFE0330] & 0x3F);
}
