/*
 * XREFs of PopPluginDevicePower @ 0x1400C20DC
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1400C1204 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x1400C124C (PopFxProcessWork.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1400C2248 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginDevicePower(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // edi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  if ( a2 )
  {
    v5 = 0;
    if ( *(int *)(v3 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      PopPepUpdateConstraints(v3, 4LL, a3);
    }
  }
  else
  {
    v5 = 4;
  }
  result = PopPepProcessEvent(v3, 0, v5, 6);
  if ( (_BYTE)result )
  {
    if ( !v4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
