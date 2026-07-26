/*
 * XREFs of WPP_SF_Sd @ 0x1C003DE84
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C009C87C (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C009CB88 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 *     Ndis::BindRegistry::LoadNetworkInterfaceString @ 0x1C009D5C8 (Ndis--BindRegistry--LoadNetworkInterfaceString.c)
 *     ndisQueryDeviceFlags @ 0x1C00B0618 (ndisQueryDeviceFlags.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B2FF8 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
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
