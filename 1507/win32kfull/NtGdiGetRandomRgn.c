/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C00148D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRandomRgn @ 0x1C011DA40 (GreGetRandomRgn.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(HDC a1, __int64 a2, int a3)
{
  int v4; // ebx
  unsigned int RandomRgn; // edi

  if ( a3 == 4 )
  {
    v4 = 1;
    UserEnterUserCritSecShared();
  }
  else
  {
    v4 = 0;
  }
  RandomRgn = GreGetRandomRgn(a1);
  if ( v4 )
    UserLeaveUserCritSec();
  return RandomRgn;
}
