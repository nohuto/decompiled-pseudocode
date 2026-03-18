/*
 * XREFs of HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C0067274
 * Callers:
 *     HUBHSM_ConfiguringHubAfterReset @ 0x1C0007340 (HUBHSM_ConfiguringHubAfterReset.c)
 *     HUBHSM_LoggingHubWasReset @ 0x1C00074F0 (HUBHSM_LoggingHubWasReset.c)
 * Callees:
 *     HUBREG_WriteValueToHubHardwareKey @ 0x1C006D058 (HUBREG_WriteValueToHubHardwareKey.c)
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
