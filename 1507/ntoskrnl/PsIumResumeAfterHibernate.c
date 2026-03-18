/*
 * XREFs of PsIumResumeAfterHibernate @ 0x14015A5EC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PspIumInitialize @ 0x1407E8D88 (PspIumInitialize.c)
 * Callees:
 *     HvlRegisterLogPages @ 0x14015A60C (HvlRegisterLogPages.c)
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
