/*
 * XREFs of WerpPathTail @ 0x1800077E0
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall WerpPathTail(unsigned __int64 a1)
{
  __int64 v2; // rax
  _WORD *v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // r8

  if ( !a1 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a1 + 2 * v2) );
  v3 = (_WORD *)(a1 + 2 * v2);
  while ( (unsigned __int64)v3 > a1 )
  {
    v4 = *--v3 - 47;
    if ( v4 <= 0x2Du )
    {
      v5 = 0x200000000801LL;
      if ( _bittest64(&v5, v4) )
        return v3 + 1;
    }
  }
  return v3--;
}
