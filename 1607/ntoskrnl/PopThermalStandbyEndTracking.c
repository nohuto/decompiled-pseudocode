/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140124C80
 * Callers:
 *     PopThermalSxEntry @ 0x140124ACC (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140146EF4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x140207158 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1402071A4 (PopThermalCsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140302E0C;
  result = 0LL;
  byte_140302E0C = 0;
  if ( byte_140302E0D )
  {
    byte_140302E0D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140302E10) / 0x989680uLL, a3);
  }
  return result;
}
