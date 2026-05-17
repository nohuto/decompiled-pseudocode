/*
 * XREFs of RtlpLockAtomTable @ 0x180052564
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180051F30 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005203C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180052250 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180052A30 (RtlQueryAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800D1B90 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800D1C70 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800D1D30 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8), a2, a3, a4);
  return 1;
}
