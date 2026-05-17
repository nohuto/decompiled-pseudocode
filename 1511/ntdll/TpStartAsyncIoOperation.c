/*
 * XREFs of TpStartAsyncIoOperation @ 0x18000AB50
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppIopValidateIo @ 0x18000ABB0 (TppIopValidateIo.c)
 */

__int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax

  result = TppIopValidateIo(a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    TppBarrierAdjust((unsigned __int64 *)(a1 + 56), 1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 136) + 424LL) != MEMORY[0x7FFE03C0] )
      return TppAdjustRunningThreadGoal();
  }
  return result;
}
