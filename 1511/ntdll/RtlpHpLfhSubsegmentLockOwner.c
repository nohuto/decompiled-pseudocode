/*
 * XREFs of RtlpHpLfhSubsegmentLockOwner @ 0x18002E064
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall RtlpHpLfhSubsegmentLockOwner(__int64 a1)
{
  signed __int64 v1; // rbx
  unsigned __int64 v3; // rcx
  signed __int64 v4; // rax
  _RTL_SRWLOCK *v5; // rdi
  _RTL_SRWLOCK *v7; // rbp

  v1 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( 1 )
    {
      if ( !v1 )
      {
        v3 = 3LL;
        v4 = 0LL;
        goto LABEL_4;
      }
      if ( (v1 & 1) != 0 )
        break;
      v7 = (_RTL_SRWLOCK *)(v1 + 16);
      v5 = (_RTL_SRWLOCK *)v1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 16));
      v1 = *(_QWORD *)(a1 + 16);
      if ( v5 == (_RTL_SRWLOCK *)v1 )
        return v5;
      RtlReleaseSRWLockExclusive(v7);
    }
    v3 = v1 & 1 | ((v1 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL;
    v4 = v1;
LABEL_4:
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v3, v4);
  }
  while ( v4 != v1 );
  return 0LL;
}
