/*
 * XREFs of BcpCursorLessThan @ 0x14021FA4C
 * Callers:
 *     BcpDisplayProgress @ 0x14022005C (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)ProgressEnd;
}
