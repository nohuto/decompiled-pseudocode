/*
 * XREFs of PopThermalCsExit @ 0x1401EE604
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x14011A294 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1401EE650 (PopThermalStandbyNotify.c)
 */

__int64 __fastcall PopThermalCsExit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = PopThermalStandbyEndTracking(1LL, a2, a3);
  LOBYTE(PopSystemThermalInfo) = 1;
  if ( dword_1402DD944 )
  {
    LOBYTE(v4) = 1;
    result = PopThermalStandbyNotify(v4);
    PopSystemThermalInfo = 256;
  }
  else if ( HIBYTE(PopSystemThermalInfo) )
  {
    result = PopThermalStandbyNotify(0LL);
    HIBYTE(PopSystemThermalInfo) = 0;
  }
  return result;
}
