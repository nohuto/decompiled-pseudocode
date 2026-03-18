/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1401485D4
 * Callers:
 *     PopThermalSxEntry @ 0x14014822C (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x14023CA0C (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14023CA58 (PopThermalCsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_14032DCE8;
  result = 0LL;
  byte_14032DCE8 = 0;
  if ( byte_14032DCE9 )
  {
    byte_14032DCE9 = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_14032DCF0) / 0x989680uLL, a3);
  }
  return result;
}
