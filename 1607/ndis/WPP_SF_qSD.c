/*
 * XREFs of WPP_SF_qSD @ 0x1C0044498
 * Callers:
 *     ndisMNotifyMachineName @ 0x1C00AF9AC (ndisMNotifyMachineName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qSD(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  const wchar_t *v6; // rcx
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v7 = a3;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  if ( a4 )
    v6 = a4;
  ndisWppFastTraceMessage(&WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0x65u, &v7, 8LL, v6, 2 * v5, va, 4LL, 0LL);
}
