/*
 * XREFs of WPP_SF_qdSS @ 0x1C0071660
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00DEBA0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qdSS(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, const wchar_t *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  const wchar_t *v9; // r9
  const wchar_t *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = -1LL;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  v9 = L"NULL";
  v10 = L"NULL";
  if ( a6 )
    v10 = a6;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v11 = v6 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( a5 )
    v9 = a5;
  ndisWppFastTraceMessage(
    &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids,
    0x2Au,
    &v12,
    8LL,
    &v13,
    4LL,
    v9,
    2 * v11,
    v10,
    2 * v8,
    0LL);
}
