/*
 * XREFs of BcpCursorLessThan @ 0x140239A1C
 * Callers:
 *     BcpDisplayProgress @ 0x14023A124 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
