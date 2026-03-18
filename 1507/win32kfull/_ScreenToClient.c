/*
 * XREFs of _ScreenToClient @ 0x1C0043114
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C6FC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenToClient(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(_WORD *)(a1 + 66) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
      *a2 = *(_DWORD *)(a1 + 136) - *a2;
    else
      *a2 -= *(_DWORD *)(a1 + 128);
    result = *(unsigned int *)(a1 + 132);
    a2[1] -= result;
  }
  return result;
}
