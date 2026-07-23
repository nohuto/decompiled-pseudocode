/*
 * XREFs of TppIopCancelPendingCallbacks @ 0x1800FDF80
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

int __fastcall TppIopCancelPendingCallbacks(__int64 a1)
{
  __int32 v2; // edi
  int result; // eax

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  if ( v2 )
  {
    result = TppBarrierAdjust((_RTL_SRWLOCK *)(a1 + 56), -v2, 0);
    if ( MEMORY[0x7FFE0386] )
      return TppETWCallbackCancel(
               *(_QWORD *)(a1 + 144),
               (int)a1 + 200,
               (int)a1 + 80,
               *(_QWORD *)(a1 + 88),
               *(_QWORD *)(a1 + 104),
               v2);
  }
  return result;
}
