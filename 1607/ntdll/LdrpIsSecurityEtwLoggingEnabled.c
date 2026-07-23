/*
 * XREFs of LdrpIsSecurityEtwLoggingEnabled @ 0x18000DCF4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 * Callees:
 *     <none>
 */

char LdrpIsSecurityEtwLoggingEnabled()
{
  char v0; // cl

  v0 = 0;
  if ( MEMORY[0x7FFE0384]
    && ((MEMORY[0x7FFE0385] & 0x40) != 0
     || MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0) )
  {
    return 1;
  }
  return v0;
}
