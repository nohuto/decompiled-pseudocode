/*
 * XREFs of SetMinimize @ 0x1C003F74C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     DecVisWindows @ 0x1C0081EF0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0082188 (IncVisWindows.c)
 */

__int64 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
      DecVisWindows();
    return SetOrClrWF(1LL, a1, 3872LL, 1LL);
  }
  else
  {
    result = SetOrClrWF(0LL, a1, 3872LL, 1LL);
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
