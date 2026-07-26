/*
 * XREFs of WPP_SF_qLLS @ 0x1C0071444
 * Callers:
 *     ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00DF200 (-NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  const wchar_t *v8; // rcx
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  if ( a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a6[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5LL;
  }
  v8 = L"NULL";
  if ( a6 )
    v8 = a6;
  ndisWppFastTraceMessage(
    &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids,
    0x3Bu,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v8,
    2 * v7,
    0LL);
}
