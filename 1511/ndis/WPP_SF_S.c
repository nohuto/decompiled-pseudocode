/*
 * XREFs of WPP_SF_S @ 0x1C005B938
 * Callers:
 *     ndisDoesSystemSupportSriov @ 0x1C009A298 (ndisDoesSystemSupportSriov.c)
 *     ndisPnPAddDevice @ 0x1C009AE5C (ndisPnPAddDevice.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00A1628 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A78E8 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00DCB7C (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_S(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  const wchar_t *v5; // rax

  if ( a3 )
  {
    if ( *a3 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( a3[v4] );
      v3 = 2 * v4 + 2;
    }
    else
    {
      v3 = 14LL;
    }
  }
  else
  {
    v3 = 10LL;
  }
  if ( a3 )
  {
    v5 = L"<NULL>";
    if ( *a3 )
      v5 = a3;
  }
  else
  {
    v5 = L"NULL";
  }
  ndisWppFastTraceMessage(a2, a1, v5, v3, 0LL);
}
