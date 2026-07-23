/*
 * XREFs of longjmp @ 0x1800879F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  RtlEndStrongEnumerationHashTable((PRTL_DYNAMIC_HASH_TABLE)Buf, *(PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)&Value);
  _longjmp_internal(Buf, (unsigned int)Value);
}
