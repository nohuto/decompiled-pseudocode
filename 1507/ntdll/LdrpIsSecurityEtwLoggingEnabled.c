/*
 * XREFs of LdrpIsSecurityEtwLoggingEnabled @ 0x180042DE0
 * Callers:
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
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
