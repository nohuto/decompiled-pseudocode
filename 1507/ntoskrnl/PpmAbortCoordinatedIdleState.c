/*
 * XREFs of PpmAbortCoordinatedIdleState @ 0x140233FB8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmAbortCoordinatedIdleState(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  if ( (*a1 & 0x3000000) == 0x1000000 )
  {
    result = (unsigned int)result & 0xFE000FFF;
    *a1 = result | ((*a1 & 0xFFF | 0x2000) << 12);
  }
  return result;
}
