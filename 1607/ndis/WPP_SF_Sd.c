/*
 * XREFs of WPP_SF_Sd @ 0x1C0042B64
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A1324 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisQueryDeviceFlags @ 0x1C00AADD0 (ndisQueryDeviceFlags.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AF6C4 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AFCA0 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00E2BC0 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Sd(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3, int a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  const wchar_t *v7; // r8
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = L"NULL";
  if ( a3 )
    v7 = a3;
  ndisWppFastTraceMessage(a2, a1, v7, 2 * v6, &v8, 4LL, 0LL);
}
