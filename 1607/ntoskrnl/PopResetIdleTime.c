/*
 * XREFs of PopResetIdleTime @ 0x140007ABC
 * Callers:
 *     PopSetSystemState @ 0x1400B2BC4 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1400B2C00 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x140132498 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140545034 (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetIdleTime(int a1)
{
  if ( !PopPlatformAoAc || (unsigned int)(a1 - 3) > 1 )
  {
    dword_1403032C8 = 0;
    byte_140303310 = 0;
  }
  dword_140303300 = 0;
  return PopTraceSystemIdleTimeReset();
}
