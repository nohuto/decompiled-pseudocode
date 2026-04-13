/*
 * XREFs of ?HasKey@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAE@Z @ 0x180021814
 * Callers:
 *     ?GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180021D10 (-GetSettingsContainer@ContentManagement@@YAJPEAPEAUIApplicationDataContainer@Storage@Windows@@@Z.c)
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800220F0 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x1800223F0 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800227B0 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800120D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::HasKey(
        __int64 (__fastcall ***this)(ContentManagement *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2,
        const unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  __int64 (__fastcall **v6)(ContentManagement *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16[1] = -2LL;
  v16[0] = a2;
  *(_BYTE *)a3 = 0;
  v15 = 0LL;
  v6 = *this;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v15);
  v8 = (*v6)((ContentManagement *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 592LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_7;
  }
  v11 = v15;
  v12 = (_QWORD *)Windows::Internal::StringReference::StringReference(v17, v16);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, const unsigned __int16 *))(*(_QWORD *)v11 + 64LL))(v11, *v12, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 593LL;
    goto LABEL_5;
  }
  v9 = 0;
LABEL_7:
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v9;
}
