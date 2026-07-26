/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00A744C
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00A1324 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1C005F76C (WPP_SF_S.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00A7D10 (-QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A7EA8 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A80D4 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(
        struct NDIS_BIND_FILTER_DRIVER *a1,
        struct KRegKey *a2,
        __int64 a3,
        enum KRegKey::BooleanDisposition a4)
{
  wchar_t **v4; // rbx
  unsigned int v5; // esi
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  a1->FilterBindFlags = 0;
  v4 = &off_1C0075000;
  v5 = 0;
  while ( (int)KRegKey::QueryValueBoolean(a2, *v4, &v9, a4) >= 0 )
  {
    if ( v9 )
      a1->FilterBindFlags |= *((_DWORD *)v4 + 2);
    ++v5;
    v4 += 2;
    if ( v5 >= 5 )
    {
      KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset(&a1->FilterClass, 0LL);
      KRegKey::QueryValueString(a2, L"FilterClass", &a1->FilterClass);
      return 1;
    }
  }
  if ( (unsigned __int8)byte_1C00895D1 >= 2u )
    WPP_SF_S(0xAu, &WPP_5d5c5ead9ada3b452eff0fb01fda438c_Traceguids, *v4);
  return 0;
}
