/*
 * XREFs of EtwpRemoveBufferFromGlobalList @ 0x140228E40
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpRemoveBufferFromGlobalList(__int64 a1, __int64 a2)
{
  _QWORD **v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v2 = (_QWORD **)(a1 + 96);
  if ( *v2 == v2 )
    v3 = 0LL;
  else
    v3 = *v2;
  while ( 1 )
  {
    if ( !v3 )
      return 0LL;
    if ( v3[2] == a2 )
      break;
    v4 = (_QWORD *)*v3;
    v3 = 0LL;
    if ( v4 != v2 )
      v3 = v4;
  }
  v6 = (_QWORD *)*v3;
  v7 = (_QWORD *)v3[1];
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v7 != v3 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  return v3;
}
