/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x1800F086C
 * Callers:
 *     RtlpWalkLFHBlock @ 0x1800F0BF0 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *i; // r8
  char v7; // bl

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2, a3, a4);
  for ( i = *(char **)(a1 + 8); ; i = *(char **)i )
  {
    if ( i == (char *)(a1 + 8) )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( a2 >= i && a2 < i + 1008 )
      break;
  }
  v7 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v7;
}
