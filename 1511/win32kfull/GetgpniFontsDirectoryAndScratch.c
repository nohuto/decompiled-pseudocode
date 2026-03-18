/*
 * XREFs of GetgpniFontsDirectoryAndScratch @ 0x1C0114C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall GetgpniFontsDirectoryAndScratch(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &gpniFontsDirectory;
  result = &gpniScratch;
  *a2 = &gpniScratch;
  return result;
}
