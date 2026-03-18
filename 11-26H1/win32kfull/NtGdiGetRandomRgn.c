/*
 * XREFs of NtGdiGetRandomRgn @ 0x14012C3D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRandomRgn @ 0x14012C450 (GreGetRandomRgn.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  unsigned int RandomRgn; // ebx

  if ( a3 == 5 )
    return 0LL;
  if ( a3 == 4 )
  {
    v6 = 1;
    UserEnterUserCritSecShared();
  }
  else
  {
    v6 = 0;
  }
  RandomRgn = GreGetRandomRgn(a1, a2, a3);
  if ( v6 )
    UserLeaveUserCritSec();
  return RandomRgn;
}
