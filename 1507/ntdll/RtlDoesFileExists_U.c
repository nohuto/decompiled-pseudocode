/*
 * XREFs of RtlDoesFileExists_U @ 0x180079480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesFileExists_U(PCWSTR FileName)
{
  return RtlDoesFileExists_UEx(FileName, 1);
}
