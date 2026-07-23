/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x1406A6B8C
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  _QWORD **v2; // r10
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v2 = (_QWORD **)(a1 + 96);
  if ( *v2 == v2 )
    v3 = 0LL;
  else
    v3 = *v2;
  while ( v3 )
  {
    v4 = v3[2];
    if ( *(_QWORD *)(v4 + 24) == a2 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 44), 3, 0) )
      {
        if ( *(_QWORD *)(v4 + 24) == a2 )
          return v4;
        _InterlockedExchange((volatile __int32 *)(v4 + 44), 0);
      }
      return 0LL;
    }
    v5 = (_QWORD *)*v3;
    v3 = 0LL;
    if ( v5 != v2 )
      v3 = v5;
  }
  return 0LL;
}
