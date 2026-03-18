/*
 * XREFs of HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C0065B54
 * Callers:
 *     HUBHSM_ConfiguringHubAfterReset @ 0x1C0006CC0 (HUBHSM_ConfiguringHubAfterReset.c)
 *     HUBHSM_LoggingHubWasReset @ 0x1C0006E70 (HUBHSM_LoggingHubWasReset.c)
 * Callees:
 *     HUBREG_WriteValueToHubHardwareKey @ 0x1C006B3A0 (HUBREG_WriteValueToHubHardwareKey.c)
 */

__int64 __fastcall HUBFDO_LogHubResetRecoveryWasInvoked(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = HUBREG_WriteValueToHubHardwareKey(a1, &g_HubInstHardResetCount, (unsigned int)++*(_DWORD *)(a1 + 52));
  v3 = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)v3 )
  {
    result = HUBREG_WriteValueToHubHardwareKey(a1, L",.", v3);
    *(_DWORD *)(a1 + 64) = 0;
  }
  return result;
}
