/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18004D298
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x18004D298 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpCompact @ 0x18004E434 (RtlpHpCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D298 (RtlpHpLfhOwnerCompact.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _RTL_SRWLOCK *v8; // rsi
  _QWORD *v9; // rbx
  _RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h]
  _RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h]

  v10 = a1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v6 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 104) + v5), a3);
        a1 = v10;
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  v7 = (_QWORD **)(a2 + 24);
  if ( *v7 != v7 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v8 = (_RTL_SRWLOCK *)(a2 + 16);
    v11 = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    v9 = *v7;
    if ( *v7 != v7 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(v10, (__int64)v9, -1, 1u, a3);
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != v7 );
      v8 = v11;
    }
    RtlReleaseSRWLockShared(v8);
  }
}
