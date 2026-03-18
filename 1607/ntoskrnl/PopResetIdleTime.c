/*
 * XREFs of PopResetIdleTime @ 0x140007F48
 * Callers:
 *     PopSetSystemState @ 0x1400B4D8C (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1400B4DC8 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x140131F28 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1403F5874 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140544AF4 (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetIdleTime(int a1)
{
  if ( !PopPlatformAoAc || (unsigned int)(a1 - 3) > 1 )
  {
    dword_140303388 = 0;
    byte_1403033D0 = 0;
  }
  dword_1403033C0 = 0;
  return PopTraceSystemIdleTimeReset();
}
