/*
 * XREFs of PopThermalStandbyEndTracking @ 0x14011A294
 * Callers:
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140142CE0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsEntry @ 0x1401EE5B8 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x1401EE604 (PopThermalCsExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_1402DD94C;
  result = 0LL;
  byte_1402DD94C = 0;
  if ( byte_1402DD94D )
  {
    byte_1402DD94D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_1402DD950) / 0x989680uLL, a3);
  }
  return result;
}
