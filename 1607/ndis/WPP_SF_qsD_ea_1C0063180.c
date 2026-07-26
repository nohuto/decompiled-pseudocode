/*
 * XREFs of WPP_SF_qsD @ 0x1C0063180
 * Callers:
 *     ndisPowerIrpWorker @ 0x1C00D49B0 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qsD(__int64 a1, __int64 a2, __int64 a3, const char *a4, ...)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const char *v6; // rax
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
  v6 = "NULL";
  if ( a4 )
    v6 = a4;
  ndisWppFastTraceMessage(&WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, 0x8Du, &v7, 8LL, v6, v5, va, 4LL, 0LL);
}
