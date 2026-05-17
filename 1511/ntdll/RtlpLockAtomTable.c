/*
 * XREFs of RtlpLockAtomTable @ 0x180044034
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800436F0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180043A00 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180043B0C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180043D20 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800DA0B0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800DA190 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800DA250 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
