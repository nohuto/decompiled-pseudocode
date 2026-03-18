/*
 * XREFs of THREAD_CODEPAGE @ 0x1C0213864
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C011F0F4 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C020E620 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D9C (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE()
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 152LL);
}
