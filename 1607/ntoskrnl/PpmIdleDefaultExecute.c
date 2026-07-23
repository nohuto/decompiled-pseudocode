/*
 * XREFs of PpmIdleDefaultExecute @ 0x140141264
 * Callers:
 *     <none>
 * Callees:
 *     KeExecuteVerw @ 0x140171740 (KeExecuteVerw.c)
 */

__int64 __fastcall PpmIdleDefaultExecute(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // bx

  v4 = a4;
  if ( (_WORD)a4 )
  {
    a2 = 0LL;
    a1 = 72LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a4) )
    KeExecuteVerw(a1, a2);
  HalProcessorIdle(a1, a2);
  if ( v4 )
    __writemsr(0x48u, v4);
  else
    _mm_lfence();
  return 0LL;
}
