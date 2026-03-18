/*
 * XREFs of _ClientToScreen @ 0x1C0245D20
 * Callers:
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientToScreen(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(_WORD *)(a1 + 66) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
      *a2 = *(_DWORD *)(a1 + 136) - *a2;
    else
      *a2 += *(_DWORD *)(a1 + 128);
    result = *(unsigned int *)(a1 + 132);
    a2[1] += result;
  }
  return result;
}
