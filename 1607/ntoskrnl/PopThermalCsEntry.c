/*
 * XREFs of PopThermalCsEntry @ 0x140207158
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140547F5C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140124C80 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140209EE0 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_140302E0D = 1;
    LOBYTE(a1) = byte_140302E0C;
    qword_140302E10 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_140302E04 )
    return PopThermalStandbyEndTracking(0LL, a2, a3);
  return result;
}
