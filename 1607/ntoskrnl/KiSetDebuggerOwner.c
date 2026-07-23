/*
 * XREFs of KiSetDebuggerOwner @ 0x140083F20
 * Callers:
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 *     KiSendThawExecution @ 0x140083DBC (KiSendThawExecution.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KeSwitchFrozenProcessor @ 0x1401D7A84 (KeSwitchFrozenProcessor.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetDebuggerOwner(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = KiDebuggerIsStallOwner;
  if ( KiDebuggerIsStallOwner
    || !a1
    || (result = KeNumberProcessors_0, (_DWORD)KeNumberProcessors_0 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_1403AB3C8;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
