/*
 * XREFs of TouchTargetingDownrank @ 0x140088194
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x140086E74 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     _TTHmToPixels @ 0x140087E54 (_TTHmToPixels.c)
 */

__int64 __fastcall TouchTargetingDownrank(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ecx
  __int64 result; // rax
  int v7; // eax
  int v8; // ecx

  v2 = *(_DWORD *)(a1 + 188);
  v3 = *(_DWORD *)(a1 + 184);
  if ( a2 == 1 )
  {
    if ( v3 >= v2 )
      v3 = *(_DWORD *)(a1 + 188);
    v4 = TTHmToPixels(600, v3);
    v5 = 40;
    if ( v4 > 40 )
      return (unsigned int)v4;
    return v5;
  }
  else
  {
    if ( v3 >= v2 )
      v3 = *(_DWORD *)(a1 + 188);
    v7 = TTHmToPixels(200, v3);
    v8 = -v7;
    if ( v7 > 0 )
      v8 = v7;
    LOWORD(result) = 20;
    if ( v8 <= 20 )
      LOWORD(result) = v8;
    return (unsigned __int16)result;
  }
}
