/*
 * XREFs of PopThermalCsExit @ 0x1402071A4
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140124C80 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1402071F0 (PopThermalStandbyNotify.c)
 */

__int64 __fastcall PopThermalCsExit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = PopThermalStandbyEndTracking(1LL, a2, a3);
  LOBYTE(PopSystemThermalInfo) = 1;
  if ( dword_140302E04 )
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
