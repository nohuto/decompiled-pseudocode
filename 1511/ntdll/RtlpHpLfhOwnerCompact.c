/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x180050984
 * Callers:
 *     RtlpHpCompact @ 0x1800508FC (RtlpHpCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180050984 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerCompact @ 0x180050984 (RtlpHpLfhOwnerCompact.c)
 */

void __fastcall RtlpHpLfhOwnerCompact(_RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  _QWORD **v5; // rdi
  _RTL_SRWLOCK *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  _RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h]
  _RTL_SRWLOCK *v11; // [rsp+58h] [rbp+10h]

  v10 = a1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v8 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v9 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 104) + v8), a3);
        a1 = v10;
        v8 += 8LL;
        --v9;
      }
      while ( v9 );
    }
  }
  v5 = (_QWORD **)(a2 + 24);
  if ( *v5 != v5 || *(_QWORD *)(a2 + 40) != a2 + 40 )
  {
    v6 = (_RTL_SRWLOCK *)(a2 + 16);
    v11 = (_RTL_SRWLOCK *)(a2 + 16);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 16));
    v7 = *v5;
    if ( *v5 != v5 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(v10, (__int64)v7, -1, 1u, a3);
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != v5 );
      v6 = v11;
    }
    RtlReleaseSRWLockShared(v6);
  }
}
