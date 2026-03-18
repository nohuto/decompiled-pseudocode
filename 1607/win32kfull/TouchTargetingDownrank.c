/*
 * XREFs of TouchTargetingDownrank @ 0x1C0247F94
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0221E84 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     _TTHmToPixels @ 0x1C0248C44 (_TTHmToPixels.c)
 */

__int64 __fastcall TouchTargetingDownrank(__int64 a1, int a2)
{
  int v2; // eax
  bool v3; // zf
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = a2 == 1;
  v4 = *(unsigned int *)(a1 + 188);
  if ( v3 )
  {
    if ( v2 < (int)v4 )
      v4 = (unsigned int)v2;
    v5 = TTHmToPixels(600LL, v4);
    v6 = 40;
    if ( v5 > 40 )
      return (unsigned int)v5;
    return v6;
  }
  else
  {
    if ( v2 < (int)v4 )
      v4 = (unsigned int)v2;
    LODWORD(result) = abs32(TTHmToPixels(200LL, v4));
    if ( (int)result > 20 )
      LOWORD(result) = 20;
    return (unsigned __int16)result;
  }
}
