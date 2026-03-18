/*
 * XREFs of THREAD_CODEPAGE @ 0x1C02136D8
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C0148DC4 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C020EA00 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D5C (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE()
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 152LL);
}
