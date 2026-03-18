/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x140665090
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v2 == v2 )
    goto LABEL_6;
  v3 = *v2 - 56LL;
  while ( 1 )
  {
    if ( !v3 )
      return v3;
    if ( *(_QWORD *)(v3 + 24) == a2 )
      break;
    v4 = *(_QWORD **)(v3 + 56);
    if ( v4 == v2 )
LABEL_6:
      v3 = 0LL;
    else
      v3 = (__int64)(v4 - 7);
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 44), 3, 0) )
  {
    if ( *(_QWORD *)(v3 + 24) == a2 )
      return v3;
    _InterlockedExchange((volatile __int32 *)(v3 + 44), 0);
  }
  return 0LL;
}
