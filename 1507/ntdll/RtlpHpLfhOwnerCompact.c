/*
 * XREFs of RtlpHpLfhOwnerCompact @ 0x180008944
 * Callers:
 *     RtlpHpCompact @ 0x1800088BC (RtlpHpCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180008944 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhOwnerCompact @ 0x180008944 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 */

_QWORD *__fastcall RtlpHpLfhOwnerCompact(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *result; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // [rsp+50h] [rbp+8h]
  __int64 v12; // [rsp+58h] [rbp+10h]

  v11 = a1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v5 = 0LL;
    if ( *(_BYTE *)(a2 + 2) )
    {
      v6 = *(unsigned __int8 *)(a2 + 2);
      do
      {
        RtlpHpLfhOwnerCompact(a1, *(_QWORD *)(*(_QWORD *)(a2 + 104) + v5), a3);
        a1 = v11;
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  v7 = (_QWORD **)(a2 + 24);
  if ( *v7 != v7 || (result = (_QWORD *)(a2 + 40), (_QWORD *)*result != result) )
  {
    v9 = a2 + 16;
    v12 = a2 + 16;
    RtlAcquireSRWLockShared(a2 + 16);
    v10 = *v7;
    if ( *v7 != v7 )
    {
      do
      {
        RtlpHpLfhSubsegmentDecommitPages(v11, (_DWORD)v10, -1, 1, a3);
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v7 );
      v9 = v12;
    }
    return (_QWORD *)RtlReleaseSRWLockShared(v9);
  }
  return result;
}
