/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x18008654C
 * Callers:
 *     RtlpWalkLFHBlock @ 0x180091FA4 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(PRTL_SRWLOCK SRWLock, unsigned __int64 a2)
{
  _RTL_SRWLOCK *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Value; i != &SRWLock[1]; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)&i[126] )
    {
      v5 = 1;
      goto LABEL_8;
    }
  }
  v5 = 0;
LABEL_8:
  RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}
