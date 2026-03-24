/*
 * XREFs of MouseClassDequeueRead @ 0x1C00043AC
 * Callers:
 *     MouseClassServiceCallback @ 0x1C0001560 (MouseClassServiceCallback.c)
 * Callees:
 *     <none>
 */

_QWORD **__fastcall MouseClassDequeueRead(__int64 a1)
{
  _QWORD **v1; // rdx
  _QWORD **v2; // rcx
  _QWORD **v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v1 = 0LL;
  v2 = (_QWORD **)(a1 + 152);
  do
  {
    if ( *v2 == v2 )
      break;
    v3 = (_QWORD **)*v2;
    v4 = (_QWORD *)**v2;
    if ( (_QWORD **)(*v2)[1] != v2 || (_QWORD **)v4[1] != v3 )
      __fastfail(3u);
    *v2 = v4;
    v1 = v3 - 21;
    v4[1] = v2;
    if ( !_InterlockedExchange64((volatile __int64 *)v1 + 13, 0LL) )
    {
      v5 = v1 + 21;
      v1 = 0LL;
      v5[1] = v5;
      *v5 = v5;
    }
  }
  while ( !v1 );
  return v1;
}
