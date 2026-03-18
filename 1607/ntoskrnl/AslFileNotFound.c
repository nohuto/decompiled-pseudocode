/*
 * XREFs of AslFileNotFound @ 0x14057B46C
 * Callers:
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
