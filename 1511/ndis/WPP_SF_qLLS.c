/*
 * XREFs of WPP_SF_qLLS @ 0x1C006C7F4
 * Callers:
 *     ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00D9340 (-NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const wchar_t *v8; // rcx
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  if ( a6 )
  {
    if ( *a6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( a6[v7] );
      v6 = 2 * v7 + 2;
    }
    else
    {
      v6 = 14LL;
    }
  }
  else
  {
    v6 = 10LL;
  }
  if ( a6 )
  {
    v8 = L"<NULL>";
    if ( *a6 )
      v8 = a6;
  }
  else
  {
    v8 = L"NULL";
  }
  ndisWppFastTraceMessage(
    &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids,
    0x3Bu,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v8,
    v6,
    0LL);
}
