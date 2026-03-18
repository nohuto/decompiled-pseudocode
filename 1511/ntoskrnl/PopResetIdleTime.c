/*
 * XREFs of PopResetIdleTime @ 0x1400F1E98
 * Callers:
 *     PopSetSystemState @ 0x1400F1DD8 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1400F1E14 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14012723C (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14050A84C (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetIdleTime(int a1)
{
  if ( !PopPlatformAoAc || (unsigned int)(a1 - 3) > 1 )
  {
    dword_1402DEAC8 = 0;
    byte_1402DEB10 = 0;
  }
  dword_1402DEB00 = 0;
  return PopTraceSystemIdleTimeReset();
}
