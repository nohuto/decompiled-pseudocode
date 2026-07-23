/*
 * XREFs of BcpCursorLessThan @ 0x140239900
 * Callers:
 *     BcpDisplayProgress @ 0x14023A008 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
