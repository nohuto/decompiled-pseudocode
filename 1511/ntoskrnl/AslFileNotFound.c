/*
 * XREFs of AslFileNotFound @ 0x140546534
 * Callers:
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x140535580 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
