/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180064020
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

unsigned __int32 __fastcall TppWorkCancelPendingCallbacks(_RTL_SRWLOCK *a1)
{
  unsigned __int32 result; // eax
  unsigned __int32 v3; // ett
  unsigned __int32 v4; // edi

  _m_prefetchw(&a1[29]);
  result = a1[29].Value;
  if ( (result & 0xFFFFFFFE) != 0 )
  {
    _m_prefetchw(&a1[29]);
    result = a1[29].Value;
    do
    {
      v3 = result;
      result = _InterlockedCompareExchange((volatile signed __int32 *)&a1[29], result & 1, result);
    }
    while ( v3 != result );
    v4 = result >> 1;
    if ( result >> 1 )
    {
      result = TppBarrierAdjust(a1 + 7, -v4, 0);
      if ( MEMORY[0x7FFE0386] )
        return TppETWCallbackCancel(a1[18].Value, (int)a1 + 200, a1[10].Value, a1[11].Value, a1[13].Value, v4);
    }
  }
  return result;
}
