/*
 * XREFs of WPP_SF_qs @ 0x1C006311C
 * Callers:
 *     ndisQueuePowerIrp @ 0x1C00636F4 (ndisQueuePowerIrp.c)
 *     ndisPowerIrpWorker @ 0x1C00D49B0 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qs(unsigned __int16 a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

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
  ndisWppFastTraceMessage(&WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a1, &v7, 8LL, v6, v5, 0LL);
}
