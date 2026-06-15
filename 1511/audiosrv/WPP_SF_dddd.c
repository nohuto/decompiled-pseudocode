/*
 * XREFs of WPP_SF_dddd @ 0x18008A74C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, 99LL, &v5);
}
