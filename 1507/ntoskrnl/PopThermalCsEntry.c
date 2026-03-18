/*
 * XREFs of PopThermalCsEntry @ 0x14023CA0C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x1401485D4 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x14023F348 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_14032DCE9 = 1;
    LOBYTE(a1) = byte_14032DCE8;
    qword_14032DCF0 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_14032DCE4 )
    return PopThermalStandbyEndTracking(0LL, a2, a3);
  return result;
}
