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

_QWORD *__fastcall RtlpHpLfhOwnerCompact(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  _QWORD **v6; // rdi
  volatile signed __int64 *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *result; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // [rsp+50h] [rbp+8h]
  volatile signed __int64 *v13; // [rsp+58h] [rbp+10h]

  v12 = a1;
  v4 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v10 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v11 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 104) + v10), v4);
        a1 = v12;
        v10 += 8LL;
        --v11;
      }
      while ( v11 );
    }
  }
  v6 = (_QWORD **)(a2 + 24);
  if ( *v6 != v6 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v7 = (volatile signed __int64 *)(a2 + 16);
    v13 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16), (char *)a2, a3, a4);
    v8 = *v6;
    if ( *v6 != v6 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(v12, (__int64)v8, -1, 1u, v4);
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v6 );
      v7 = v13;
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v7);
  }
  return result;
}
