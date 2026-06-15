/*
 * XREFs of WPP_SF_ii @ 0x18008A7B8
 * Callers:
 *     ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x180087E40 (-GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, 58LL, (__int64 *)va);
}
