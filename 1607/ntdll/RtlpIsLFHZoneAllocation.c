/*
 * XREFs of RtlpIsLFHZoneAllocation @ 0x180001200
 * Callers:
 *     RtlpWalkLFHBlock @ 0x18004DBD8 (RtlpWalkLFHBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(__int64 a1, unsigned __int64 a2)
{
  _QWORD *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive();
  for ( i = *(_QWORD **)(a1 + 8); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a1 + 8) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)(i + 126) )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(a1);
  return v5;
}
