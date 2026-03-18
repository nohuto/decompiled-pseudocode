/*
 * XREFs of PsIumResumeAfterHibernate @ 0x140126F10
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PspIumInitialize @ 0x1407722B8 (PspIumInitialize.c)
 * Callees:
 *     HvlRegisterLogPages @ 0x140126F30 (HvlRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return HvlRegisterLogPages();
  }
  return result;
}
