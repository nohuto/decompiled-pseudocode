/*
 * XREFs of PopMapInternalActionToIrpAction @ 0x14011A360
 * Callers:
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     PopNotifyDevice @ 0x1403A51FC (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopMapInternalActionToIrpAction(unsigned int a1, int a2, char a3)
{
  __int64 result; // rax

  result = 7LL;
  if ( a1 == 7 )
  {
    if ( a3 )
      return 3 - (unsigned int)(a2 != 5);
  }
  else
  {
    result = 3LL;
    if ( a2 != 5 )
      return a1;
  }
  return result;
}
