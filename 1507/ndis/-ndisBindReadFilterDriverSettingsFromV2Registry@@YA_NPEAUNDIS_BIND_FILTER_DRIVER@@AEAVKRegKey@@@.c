/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C009CDC8
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C009C87C (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1C005BBC8 (WPP_SF_S.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C009D2F8 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A0598 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBGAEAV?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@@Z @ 0x1C00A5484 (-QueryValueString@KRegKey@@QEAAJPEBGAEAV-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@@Z.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(
        struct NDIS_BIND_FILTER_DRIVER *a1,
        struct KRegKey *a2,
        __int64 a3,
        enum KRegKey::BooleanDisposition a4)
{
  wchar_t **v4; // rbx
  unsigned int v7; // esi
  wchar_t *v8; // r8
  __int64 v9; // rcx
  wchar_t *v10; // rax
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = &off_1C0071010;
  a1->FilterBindFlags = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *v4;
    *(_DWORD *)&v12.Length = 0;
    v12.Buffer = 0LL;
    if ( !v8 )
      goto LABEL_8;
    v9 = 0x7FFFLL;
    v10 = v8;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
      break;
    v12.Buffer = v8;
    v12.Length = 2 * (0x7FFF - v9);
    v12.MaximumLength = v12.Length + 2;
LABEL_8:
    if ( (int)KRegKey::QueryValueBoolean(a2, &v12, &v13, a4) < 0 )
      break;
    if ( v13 )
      a1->FilterBindFlags |= *((_DWORD *)v4 + 2);
    ++v7;
    v4 += 2;
    if ( v7 >= 5 )
    {
      KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset(&a1->FilterClass, 0LL);
      KRegKey::QueryValueString(a2, L"FilterClass", &a1->FilterClass);
      return 1;
    }
  }
  if ( (unsigned __int8)byte_1C0085311 >= 2u )
    WPP_SF_S(0xAu, &WPP_10e48bb64bbb401b7e1b3e1f08acf4e0_Traceguids, *v4);
  return 0;
}
