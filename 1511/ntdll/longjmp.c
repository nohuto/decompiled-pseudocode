/*
 * XREFs of longjmp @ 0x1800991A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  RtlEndStrongEnumerationHashTable();
  _longjmp_internal(Buf, (unsigned int)Value);
}
