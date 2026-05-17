/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x18008654C
 * Callers:
 *     RtlpWalkLFHBlock @ 0x180091FA4 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *i; // r8
  char v7; // bl

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  for ( i = *(char **)(a1 + 8); i != (char *)(a1 + 8); i = *(char **)i )
  {
    if ( a2 >= i && a2 < i + 1008 )
    {
      v7 = 1;
      goto LABEL_8;
    }
  }
  v7 = 0;
LABEL_8:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v7;
}
