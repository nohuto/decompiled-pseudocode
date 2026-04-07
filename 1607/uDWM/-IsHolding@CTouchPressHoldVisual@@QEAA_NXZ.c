/*
 * XREFs of ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x18006FBA8
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004DBCC (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTouchPressHoldVisual::IsHolding(CTouchPressHoldVisual *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 40) && !*((_QWORD *)this + 41) )
    return *((_QWORD *)this + 42) == 0LL;
  return result;
}
