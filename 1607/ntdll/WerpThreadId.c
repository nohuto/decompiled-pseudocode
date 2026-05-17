/*
 * XREFs of WerpThreadId @ 0x180007848
 * Callers:
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall WerpThreadId(__int64 a1)
{
  int InformationThread; // eax
  unsigned int v2; // ecx
  _BYTE v4[24]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread(a1, 0LL, v4, 48LL, 0LL);
  v2 = v5;
  if ( InformationThread < 0 )
    return 0;
  return v2;
}
