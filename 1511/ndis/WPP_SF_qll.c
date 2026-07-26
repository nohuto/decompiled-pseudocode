/*
 * XREFs of WPP_SF_qll @ 0x1C006113C
 * Callers:
 *     NdisSetSessionCompartmentId @ 0x1C0060F30 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qll(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_47113055b93e7e97d5d7f65fd208740c_Traceguids, 0xBu, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
