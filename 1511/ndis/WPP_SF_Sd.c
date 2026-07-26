/*
 * XREFs of WPP_SF_Sd @ 0x1C003EF2C
 * Callers:
 *     ndisQueryDeviceFlags @ 0x1C009C954 (ndisQueryDeviceFlags.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A78E8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C00AB1C0 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AC530 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00DCB7C (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Sd(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3, int a4)
{
  __int64 v4; // r9
  __int64 v5; // rax
  const wchar_t *v6; // rax
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  if ( a3 )
  {
    if ( *a3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a3[v5] );
      v4 = 2 * v5 + 2;
    }
    else
    {
      v4 = 14LL;
    }
  }
  else
  {
    v4 = 10LL;
  }
  if ( a3 )
  {
    v6 = L"<NULL>";
    if ( *a3 )
      v6 = a3;
  }
  else
  {
    v6 = L"NULL";
  }
  ndisWppFastTraceMessage(a2, a1, v6, v4, &v7, 4LL, 0LL);
}
