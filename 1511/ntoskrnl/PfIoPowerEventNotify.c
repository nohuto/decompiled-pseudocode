/*
 * XREFs of PfIoPowerEventNotify @ 0x1404F7B0C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 *     PopUmpoSendLegacyEvent @ 0x1404FA078 (PopUmpoSendLegacyEvent.c)
 * Callees:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 */

__int64 __fastcall PfIoPowerEventNotify(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a1 == 18 )
    return PfPowerActionNotify(5, a3, 0);
  return result;
}
