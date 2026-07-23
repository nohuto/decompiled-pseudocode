/*
 * XREFs of RtlpHpLfhSubsegmentLockOwner @ 0x1800F3474
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall RtlpHpLfhSubsegmentLockOwner(__int64 a1)
{
  signed __int64 v1; // rbx
  unsigned __int64 v3; // rcx
  signed __int64 v4; // rax
  _RTL_SRWLOCK *v5; // rbp
  _RTL_SRWLOCK *v6; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( 1 )
    {
      if ( !v1 )
      {
        v3 = 3LL;
        v4 = 0LL;
        goto LABEL_8;
      }
      if ( (v1 & 1) != 0 )
        break;
      v5 = (_RTL_SRWLOCK *)(v1 + 16);
      v6 = (_RTL_SRWLOCK *)v1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 16));
      v1 = *(_QWORD *)(a1 + 16);
      if ( v6 == (_RTL_SRWLOCK *)v1 )
        return v6;
      RtlReleaseSRWLockExclusive(v5);
    }
    v3 = v1 & 1 | ((v1 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL;
    v4 = v1;
LABEL_8:
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v3, v4);
  }
  while ( v4 != v1 );
  return 0LL;
}
