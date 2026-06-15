/*
 * XREFs of WPP_SF_dddd @ 0x18007390C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180006E00 (AudioServerIsFormatSupported.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_dddd(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, 55LL, &v5, 4LL, (__int64 *)va);
}
