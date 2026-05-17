/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x18004D2A8
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x18004D2A8 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpCompact @ 0x18004E444 (RtlpHpCompact.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004D2A8 (RtlpHpLfhOwnerCompact.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD **v8; // rdi
  volatile signed __int64 *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *result; // rax
  __int64 v12; // [rsp+50h] [rbp+8h]
  volatile signed __int64 *v13; // [rsp+58h] [rbp+10h]

  v12 = a1;
  v4 = a3;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v6 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v7 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 104) + v6), v4);
        a1 = v12;
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
  }
  v8 = (_QWORD **)(a2 + 24);
  if ( *v8 != v8 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v9 = (volatile signed __int64 *)(a2 + 16);
    v13 = (volatile signed __int64 *)(a2 + 16);
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 16), (char *)a2, a3, a4);
    v10 = *v8;
    if ( *v8 != v8 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(v12, (__int64)v10, -1, 1LL, v4);
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v8 );
      v9 = v13;
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v9);
  }
  return result;
}
