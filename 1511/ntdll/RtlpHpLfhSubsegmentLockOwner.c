/*
 * XREFs of RtlpHpLfhSubsegmentLockOwner @ 0x18002E064
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpLfhSubsegmentLockOwner(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rdi
  volatile signed __int64 *v10; // rbp

  v4 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( 1 )
    {
      if ( !v4 )
      {
        v6 = 3LL;
        v7 = 0LL;
        goto LABEL_4;
      }
      if ( (v4 & 1) != 0 )
        break;
      v10 = (volatile signed __int64 *)(v4 + 16);
      v8 = v4;
      RtlAcquireSRWLockExclusive(v4 + 16, a2, a3, a4);
      v4 = *(_QWORD *)(a1 + 16);
      if ( v8 == v4 )
        return v8;
      RtlReleaseSRWLockExclusive(v10);
    }
    v6 = v4 & 1 | ((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = v4;
LABEL_4:
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v6, v7);
  }
  while ( v7 != v4 );
  return 0LL;
}
