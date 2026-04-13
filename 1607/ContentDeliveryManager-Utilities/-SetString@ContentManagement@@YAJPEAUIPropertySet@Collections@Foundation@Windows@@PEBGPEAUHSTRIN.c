/*
 * XREFs of ?SetString@ContentManagement@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAUHSTRING__@@@Z @ 0x180021B04
 * Callers:
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x1800223F0 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800120D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::SetString(
        __int64 (__fastcall ***this)(ContentManagement *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2,
        const unsigned __int16 *a3,
        HSTRING a4)
{
  __int64 (__fastcall **v6)(ContentManagement *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int ActivationFactory; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v21; // [rsp+40h] [rbp-11h] BYREF
  __int64 v22; // [rsp+48h] [rbp-9h] BYREF
  __int64 v23; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp+7h] BYREF
  HSTRING string; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v24[1] = -2LL;
  v24[0] = L"LastCreativeId";
  v23 = 0LL;
  v6 = *this;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v23);
  v8 = (*v6)((ContentManagement *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v21 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v21);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v22 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v21 + 144LL))(
            v21,
            a3,
            &v22);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v13 = v23;
      v14 = v22;
      v15 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v24);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v13 + 80LL))(v13, *v15, v14, v20);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v9 = 0;
LABEL_13:
        v16 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        goto LABEL_15;
      }
      v12 = 627LL;
    }
    else
    {
      v12 = 624LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26D,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_15:
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_17:
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v9;
}
