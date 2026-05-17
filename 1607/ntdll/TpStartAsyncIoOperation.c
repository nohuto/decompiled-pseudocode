/*
 * XREFs of TpStartAsyncIoOperation @ 0x18003C110
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x18003C170 (TppIopValidateIo.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpStartAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rcx

  result = TppIopValidateIo(a1, 0LL, 1LL);
  if ( (_DWORD)result )
  {
    TppBarrierAdjust(a1 + 56, 1LL, 0LL, v3);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 280));
    _InterlockedIncrement((volatile signed __int32 *)a1);
    v4 = *(_QWORD *)(a1 + 144);
    result = MEMORY[0x7FFE03C0];
    if ( *(_DWORD *)(v4 + 424) != MEMORY[0x7FFE03C0] )
      return TppAdjustRunningThreadGoal(v4);
  }
  return result;
}
