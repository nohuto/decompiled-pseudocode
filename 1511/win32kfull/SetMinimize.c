/*
 * XREFs of SetMinimize @ 0x1C00C9468
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     DecVisWindows @ 0x1C007A068 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C007A2F4 (IncVisWindows.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

__int16 __fastcall SetMinimize(__int64 a1, char a2)
{
  __int16 result; // ax

  if ( (a2 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
      DecVisWindows(a1);
    return SetOrClrWF(1, (_DWORD *)a1, 0xF20u, 1);
  }
  else
  {
    result = SetOrClrWF(0, (_DWORD *)a1, 0xF20u, 1);
    if ( (*(_BYTE *)(a1 + 55) & 0x10) != 0 )
      return IncVisWindows(a1);
  }
  return result;
}
