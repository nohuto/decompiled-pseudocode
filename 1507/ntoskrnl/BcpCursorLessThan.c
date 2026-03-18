/*
 * XREFs of BcpCursorLessThan @ 0x14026EE74
 * Callers:
 *     BcpDisplayProgress @ 0x14026F484 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)ProgressEnd;
}
