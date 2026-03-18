/*
 * XREFs of THREAD_CODEPAGE @ 0x1C020C134
 * Callers:
 *     SfnIMECONTROL @ 0x1C0205E50 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0246070 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C02461D8 (RtlWCSMessageWParamCharToMB.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall THREAD_CODEPAGE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 432)
                             + 152LL);
}
