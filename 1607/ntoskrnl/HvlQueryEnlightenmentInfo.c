/*
 * XREFs of HvlQueryEnlightenmentInfo @ 0x140580740
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryEnlightenmentInfo(_OWORD *a1, int a2, char a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  if ( a3 )
  {
    result = 3221225506LL;
  }
  else
  {
    if ( a2 == 16 )
    {
      *(_QWORD *)&v5 = HvlHypervisorConnected != 0;
      *(_DWORD *)((char *)&v5 + 1) = (HvlpRootFlags & 8) != 0;
      WORD1(v5) = (HvlpFlags & 0x1000) != 0;
      *((_QWORD *)&v5 + 1) = (unsigned int)HvlEnlightenments;
      result = 0LL;
      *a1 = v5;
      *a4 = 16;
      return result;
    }
    result = 3221225712LL;
  }
  *a4 = 0;
  return result;
}
