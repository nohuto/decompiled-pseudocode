/*
 * XREFs of PopPepDeviceWaitWake @ 0x1401ED3C4
 * Callers:
 *     PopRequestCompletion @ 0x140120C64 (PopRequestCompletion.c)
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 */

void __fastcall PopPepDeviceWaitWake(__int64 a1, char a2)
{
  signed __int32 v2; // eax

  if ( a2 )
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( v2 == 1 )
    PopPepUpdateConstraints(a1, 5, a2);
}
