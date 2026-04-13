/*
 * XREFs of sub_180003F8C @ 0x180003F8C
 * Callers:
 *     sub_18000C34C @ 0x18000C34C (sub_18000C34C.c)
 *     sub_18000C980 @ 0x18000C980 (sub_18000C980.c)
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180003F8C(__int64 a1, char a2)
{
  DWORD CurrentThreadId; // edi
  unsigned __int64 v4; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  signed __int64 v7; // rax

  CurrentThreadId = GetCurrentThreadId();
  v4 = CurrentThreadId % 0x14uLL;
  for ( result = (_QWORD *)qword_18003AD90[v4]; result; result = (_QWORD *)result[2] )
  {
    if ( *((_DWORD *)result + 2) == CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  v6 = malloc(0x18uLL);
  if ( !v6 )
    return 0LL;
  *v6 = 0LL;
  v6[2] = 0LL;
  *((_DWORD *)v6 + 2) = CurrentThreadId;
  _m_prefetchw(&qword_18003AD90[v4]);
  do
  {
    v7 = qword_18003AD90[v4];
    v6[2] = v7;
  }
  while ( v7 != _InterlockedCompareExchange64(&qword_18003AD90[v4], (signed __int64)v6, v7) );
  return v6;
}
