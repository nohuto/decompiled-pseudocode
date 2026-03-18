/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011F924
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 *     _SetDoubleClickTime @ 0x1C011F860 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2B6 )
      return a1;
  }
  return result;
}
