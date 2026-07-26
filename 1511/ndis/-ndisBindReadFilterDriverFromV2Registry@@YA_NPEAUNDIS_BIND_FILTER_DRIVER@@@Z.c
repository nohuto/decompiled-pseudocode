/*
 * XREFs of ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A78E8
 * Callers:
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A78A4 (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001EC60 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x1C003EF2C (WPP_SF_Sd.c)
 *     WPP_SF_S @ 0x1C005B938 (WPP_SF_S.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00A1628 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A2098 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

char __fastcall ndisBindReadFilterDriverFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1)
{
  int v2; // eax
  __int64 v3; // r8
  enum KRegKey::BooleanDisposition v4; // r9d
  char FilterDriverSettingsFromV2Registry; // bl
  HANDLE Handle[2]; // [rsp+70h] [rbp-288h] BYREF
  wchar_t Dest[304]; // [rsp+80h] [rbp-278h] BYREF

  if ( (int)RtlStringCchPrintfW(
              Dest,
              300LL,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Filters\\{%08x-%04x-%04x-%02x%02x-"
               "%02x%02x%02x%02x%02x%02x}\\Kernel",
              a1->Guid.Data1,
              a1->Guid.Data2,
              a1->Guid.Data3,
              a1->Guid.Data4[0],
              a1->Guid.Data4[1],
              a1->Guid.Data4[2],
              a1->Guid.Data4[3],
              a1->Guid.Data4[4],
              a1->Guid.Data4[5],
              a1->Guid.Data4[6],
              a1->Guid.Data4[7]) < 0 )
    return 0;
  Handle[0] = 0LL;
  v2 = KRegKey::Open((KRegKey *)Handle, 1u, Dest, 0LL);
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      if ( (unsigned __int8)byte_1C0083711 >= 2u )
        WPP_SF_S(0xBu, &WPP_10e48bb64bbb401b7e1b3e1f08acf4e0_Traceguids, Dest);
    }
    else if ( (unsigned __int8)byte_1C0083711 >= 2u )
    {
      WPP_SF_Sd(0xCu, &WPP_10e48bb64bbb401b7e1b3e1f08acf4e0_Traceguids, Dest, v2);
    }
    FilterDriverSettingsFromV2Registry = 0;
  }
  else
  {
    FilterDriverSettingsFromV2Registry = ndisBindReadFilterDriverSettingsFromV2Registry(
                                           a1,
                                           (struct KRegKey *)Handle,
                                           v3,
                                           v4);
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return FilterDriverSettingsFromV2Registry;
}
