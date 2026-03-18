/*
 * XREFs of SeTokenFromAccessInformation @ 0x1400EF824
 * Callers:
 *     <none>
 * Callees:
 *     SepTokenFromAccessInformation @ 0x14009FFCC (SepTokenFromAccessInformation.c)
 */

__int64 __fastcall SeTokenFromAccessInformation(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  if ( a3 < 0x488 )
  {
    *a4 = 1160;
    return 3221225507LL;
  }
  else
  {
    SepTokenFromAccessInformation(a1, a2);
    return 0LL;
  }
}
