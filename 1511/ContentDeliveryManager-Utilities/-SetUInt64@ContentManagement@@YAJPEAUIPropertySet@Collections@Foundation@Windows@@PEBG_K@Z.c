/*
 * XREFs of ?SetUInt64@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBG_K@Z @ 0x180010B30
 * Callers:
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180010FAC (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@@Z @ 0x180011740 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005540 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018ABC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::SetUInt64(
        __int64 (__fastcall ***this)(ContentManagement *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2,
        const unsigned __int16 *a3)
{
  __int64 (__fastcall **v5)(ContentManagement *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int ActivationFactory; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  _BYTE v19[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23[1] = -2LL;
  v23[0] = a2;
  v21 = 0LL;
  v5 = *this;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v21);
  v7 = (*v5)((ContentManagement *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      559LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_17;
  }
  v20 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v20);
  v8 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v22 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v20 + 104LL))(
            v20,
            a3,
            &v22);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v12 = v21;
      v13 = v22;
      v14 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v23);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v12 + 80LL))(v12, *v14, v13, v19);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v8 = 0;
LABEL_13:
        v15 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_15;
      }
      v11 = 568LL;
    }
    else
    {
      v11 = 565LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v11,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    562LL,
    (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_15:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_17:
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v8;
}
