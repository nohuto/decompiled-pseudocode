/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x1800FDF80
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

__int64 __fastcall TppIopCancelPendingCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int32 v5; // edi
  __int64 result; // rax

  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v5 )
  {
    result = TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v5, 0LL, a4);
    if ( MEMORY[0x7FFE0386] )
      return TppETWCallbackCancel(
               *(_QWORD *)(a1 + 144),
               (int)a1 + 200,
               (int)a1 + 80,
               *(_QWORD *)(a1 + 88),
               *(_QWORD *)(a1 + 104),
               v5);
  }
  return result;
}
