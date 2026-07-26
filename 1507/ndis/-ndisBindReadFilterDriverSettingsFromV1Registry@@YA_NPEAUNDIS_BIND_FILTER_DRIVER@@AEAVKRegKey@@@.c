/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00B3114
 * Callers:
 *     ?ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C00B2FF8 (-ndisBindReadFilterDriverFromV1Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A0598 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A5484 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A54F8 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV1Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  unsigned __int16 v5; // cx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  a1->FilterBindFlags = 0;
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"FilterType", &v6) < 0 )
    return 0;
  if ( v6 == 1 )
  {
    a1->FilterBindFlags |= 2u;
  }
  else if ( v6 != 2 )
  {
    if ( (unsigned __int8)byte_1C0085311 < 2u )
      return 0;
    v5 = 13;
    goto LABEL_15;
  }
  if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"FilterRunType", &v6) >= 0 )
  {
    if ( v6 == 1 )
    {
      a1->FilterBindFlags |= 0xCu;
    }
    else
    {
      if ( v6 != 2 )
      {
        if ( (unsigned __int8)byte_1C0085311 < 2u )
          return 0;
        v5 = 14;
        goto LABEL_15;
      }
      a1->FilterBindFlags |= 1u;
    }
    KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)&a1->FilterClass._p, 0LL);
    KRegKey::QueryValueString((HANDLE *)&a2->_p, L"FilterClass", (void **)&a1->FilterClass._p);
    if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"UnbindOnAttach", &v6) >= 0 )
    {
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          if ( (unsigned __int8)byte_1C0085311 < 2u )
            return 0;
          v5 = 15;
          goto LABEL_15;
        }
        a1->FilterBindFlags |= 4u;
      }
      else
      {
        a1->FilterBindFlags &= ~4u;
      }
    }
    if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"UnbindOnDetach", &v6) >= 0 )
    {
      if ( v6 )
      {
        if ( v6 != 1 )
        {
          if ( (unsigned __int8)byte_1C0085311 < 2u )
            return 0;
          v5 = 16;
          goto LABEL_15;
        }
        a1->FilterBindFlags |= 8u;
      }
      else
      {
        a1->FilterBindFlags &= ~8u;
      }
    }
    if ( KRegKey::QueryValueUlong(a2, (wchar_t *)L"NdisBootStart", &v6) < 0 )
      return 1;
    if ( !v6 )
    {
      a1->FilterBindFlags |= 0x10u;
      return 1;
    }
    if ( v6 == 1 )
      return 1;
    if ( (unsigned __int8)byte_1C0085311 >= 2u )
    {
      v5 = 17;
LABEL_15:
      WPP_SF_(v5, &WPP_10e48bb64bbb401b7e1b3e1f08acf4e0_Traceguids);
    }
  }
  return 0;
}
