/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C75B4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C7394 (xxxCancelMouseMoveTracking.c)
 *     _SetDoubleClickTime @ 0x1C00C74F0 (_SetDoubleClickTime.c)
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
