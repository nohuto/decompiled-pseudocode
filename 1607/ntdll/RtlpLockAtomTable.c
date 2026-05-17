/*
 * XREFs of RtlpLockAtomTable @ 0x18006823C
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800678B0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067C00 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067D0C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180067F20 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800E2D40 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E2E20 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E2EE0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
