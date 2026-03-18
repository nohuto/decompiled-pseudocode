/*
 * XREFs of PopThermalCsEntry @ 0x1401EE5B8
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x14011A294 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1401F10A0 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_1402DD94D = 1;
    LOBYTE(a1) = byte_1402DD94C;
    qword_1402DD950 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_1402DD944 )
    return PopThermalStandbyEndTracking(0LL, a2, a3);
  return result;
}
