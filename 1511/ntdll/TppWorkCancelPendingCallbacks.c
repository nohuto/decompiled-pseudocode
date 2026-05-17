/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180004460
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800F5710 (TppETWCallbackCancel.c)
 */

__int64 __fastcall TppWorkCancelPendingCallbacks(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // ett
  unsigned int v4; // edi

  _m_prefetchw(a1 + 28);
  result = *((unsigned int *)a1 + 56);
  if ( (result & 0xFFFFFFFE) != 0 )
  {
    _m_prefetchw(a1 + 28);
    LODWORD(result) = *((_DWORD *)a1 + 56);
    do
    {
      v3 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1 + 56, result & 1, result);
    }
    while ( v3 != (_DWORD)result );
    v4 = (unsigned int)result >> 1;
    if ( (unsigned int)result >> 1 )
    {
      result = TppBarrierAdjust(a1 + 7, -v4, 0);
      if ( MEMORY[0x7FFE0386] )
        return TppETWCallbackCancel(a1[17], (int)a1 + 192, a1[10], a1[11], a1[13], v4);
    }
  }
  return result;
}
