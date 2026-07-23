/*
 * XREFs of PsIumResumeAfterHibernate @ 0x140132248
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PspIumInitialize @ 0x1407AA3D0 (PspIumInitialize.c)
 * Callees:
 *     VslRegisterLogPages @ 0x140132268 (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
