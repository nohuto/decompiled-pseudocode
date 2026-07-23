/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1401251F0
 * Callers:
 *     PopThermalSxEntry @ 0x14012503C (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x140206F84 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x140206FD0 (PopThermalCsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140302E6C;
  result = 0LL;
  byte_140302E6C = 0;
  if ( byte_140302E6D )
  {
    byte_140302E6D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140302E70) / 0x989680uLL, a3);
  }
  return result;
}
