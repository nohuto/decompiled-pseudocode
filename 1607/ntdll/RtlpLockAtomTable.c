/*
 * XREFs of RtlpLockAtomTable @ 0x18006822C
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1800678A0 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x180067BF0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067CFC (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180067F10 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1800E2E00 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1800E2EE0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800E2FA0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
