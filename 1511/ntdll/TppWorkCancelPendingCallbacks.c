/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180004460
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800F5710 (TppETWCallbackCancel.c)
 */

unsigned __int32 __fastcall TppWorkCancelPendingCallbacks(_RTL_SRWLOCK *a1)
{
  unsigned __int32 result; // eax
  unsigned __int32 v3; // ett
  unsigned __int32 v4; // edi

  _m_prefetchw(&a1[28]);
  result = a1[28].Value;
  if ( (result & 0xFFFFFFFE) != 0 )
  {
    _m_prefetchw(&a1[28]);
    result = a1[28].Value;
    do
    {
      v3 = result;
      result = _InterlockedCompareExchange((volatile signed __int32 *)&a1[28], result & 1, result);
    }
    while ( v3 != result );
    v4 = result >> 1;
    if ( result >> 1 )
    {
      result = TppBarrierAdjust(a1 + 7, -v4, 0);
      if ( MEMORY[0x7FFE0386] )
        return TppETWCallbackCancel(a1[17].Value, (int)a1 + 192, a1[10].Value, a1[11].Value, a1[13].Value, v4);
    }
  }
  return result;
}
