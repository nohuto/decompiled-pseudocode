/*
 * XREFs of RtlpHpLfhSubsegmentLockOwner @ 0x1800F3474
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpLfhSubsegmentLockOwner(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  signed __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  signed __int64 v7; // rax
  volatile signed __int64 *v8; // rbp
  signed __int64 v9; // rdi

  v4 = *(_QWORD *)(a1 + 16);
  do
  {
    while ( 1 )
    {
      if ( !v4 )
      {
        v6 = 3LL;
        v7 = 0LL;
        goto LABEL_8;
      }
      if ( (v4 & 1) != 0 )
        break;
      v8 = (volatile signed __int64 *)(v4 + 16);
      v9 = v4;
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 16), a2, a3, a4);
      v4 = *(_QWORD *)(a1 + 16);
      if ( v9 == v4 )
        return v9;
      RtlReleaseSRWLockExclusive(v8);
    }
    v6 = v4 & 1 | ((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 2) & 0xFFFFFFFFFFFFFFFEuLL;
    v7 = v4;
LABEL_8:
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v6, v7);
  }
  while ( v7 != v4 );
  return 0LL;
}
