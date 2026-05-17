/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180064030
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

__int64 __fastcall TppWorkCancelPendingCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // ett
  unsigned int v7; // edi

  _m_prefetchw((const void *)(a1 + 232));
  result = *(unsigned int *)(a1 + 232);
  if ( (result & 0xFFFFFFFE) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 232));
    LODWORD(result) = *(_DWORD *)(a1 + 232);
    do
    {
      v6 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), result & 1, result);
    }
    while ( v6 != (_DWORD)result );
    v7 = (unsigned int)result >> 1;
    if ( (unsigned int)result >> 1 )
    {
      result = TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v7, 0LL, a4);
      if ( MEMORY[0x7FFE0386] )
        return TppETWCallbackCancel(
                 *(_QWORD *)(a1 + 144),
                 (int)a1 + 200,
                 *(_QWORD *)(a1 + 80),
                 *(_QWORD *)(a1 + 88),
                 *(_QWORD *)(a1 + 104),
                 v7);
    }
  }
  return result;
}
