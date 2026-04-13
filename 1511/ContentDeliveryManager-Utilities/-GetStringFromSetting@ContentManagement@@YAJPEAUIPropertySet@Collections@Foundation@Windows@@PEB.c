/*
 * XREFs of ?GetStringFromSetting@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z @ 0x18001082C
 * Callers:
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011410 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@@Z @ 0x180011740 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011B40 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180005540 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180018ABC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::GetStringFromSetting(
        __int64 (__fastcall ***this)(ContentManagement *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2,
        const unsigned __int16 *a3,
        HSTRING *a4)
{
  __int64 (__fastcall **v6)(ContentManagement *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rsi
  _QWORD *v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rsi
  __int64 v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22[1] = -2LL;
  v22[0] = L"LastCreativeId";
  *(_QWORD *)a3 = 0LL;
  v19 = 0LL;
  v6 = *this;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v19);
  v8 = (*v6)((ContentManagement *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      532LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_15;
  }
  v20 = 0LL;
  v10 = v19;
  v11 = (_QWORD *)Windows::Internal::StringReference::StringReference(v23, v22);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, *v11, &v20);
  v9 = v12;
  if ( v12 >= 0 )
  {
    v21 = 0LL;
    v13 = (**v20)(v20, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v21);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v21 + 152LL))(v21, a3);
      v9 = v13;
      if ( v13 >= 0 )
      {
        v9 = 0;
LABEL_11:
        v15 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_13;
      }
      v14 = 540LL;
    }
    else
    {
      v14 = 538LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v14,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    535LL,
    (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v12);
LABEL_13:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
  }
LABEL_15:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v9;
}
