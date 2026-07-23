/*
 * XREFs of RtlpHpLfhSubsegmentLockOwner @ 0x18001D3B8
 * Callers:
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

_RTL_SRWLOCK *__fastcall RtlpHpLfhSubsegmentLockOwner(__int64 a1)
{
  signed __int64 v1; // rbx
  _RTL_SRWLOCK *v3; // rbp
  _RTL_SRWLOCK *v4; // rdi
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( v1 )
    {
      if ( (v1 & 1) != 0 )
      {
        v6 = v1 & 1 | ((v1 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL;
        v7 = v1;
        goto LABEL_7;
      }
      v3 = (_RTL_SRWLOCK *)(v1 + 16);
      v4 = (_RTL_SRWLOCK *)v1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 16));
      v1 = *(_QWORD *)(a1 + 16);
      if ( v4 == (_RTL_SRWLOCK *)v1 )
        return v4;
      RtlReleaseSRWLockExclusive(v3);
    }
    v6 = 3LL;
    v7 = 0LL;
LABEL_7:
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v6, v7);
  }
  while ( v7 != v1 );
  return 0LL;
}
