/*
 * XREFs of PfIoPowerEventNotify @ 0x140530748
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x140548730 (PopUmpoSendLegacyEvent.c)
 * Callees:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 */

__int64 __fastcall PfIoPowerEventNotify(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a1 == 18 )
    return PfPowerActionNotify(5, a3, 0);
  return result;
}
