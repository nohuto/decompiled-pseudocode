/*
 * XREFs of longjmp @ 0x1800879F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  RtlEndStrongEnumerationHashTable();
  _longjmp_internal(Buf, (unsigned int)Value);
}
