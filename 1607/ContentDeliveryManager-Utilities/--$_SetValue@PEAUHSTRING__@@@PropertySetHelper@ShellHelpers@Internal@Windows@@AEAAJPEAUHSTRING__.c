/*
 * XREFs of ??$_SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180042AA0
 * Callers:
 *     ?AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedContentRequestType@12@PEAUHSTRING__@@1PEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@IAEAVRequestSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@PEAPEAUIAppServiceResponse@678@PEAW4AppServiceResponseStatus@678@@Z @ 0x18003EF0C (-AttemptSendAppServiceAndWaitForResponse@TargetedContent@ContentManagement@@YAJW4SubscribedConte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003A04 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJA@AA @ 0x180048564 (--_9IPropertyValue@Foundation@Windows@@$BJA@AA.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<HSTRING__ *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v22[8]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-11h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+7h] BYREF
  HSTRING string; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v25[1] = -2LL;
  v25[0] = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v25);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_28;
  }
  v24 = 0LL;
  v10 =  Windows::Foundation::IPropertyValue::`vcall'{144,{flat}}(v25[0], a4, &v24);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v23 = 0LL;
    v11 = (**v24)(v24, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v23);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"internal\\shell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v11);
LABEL_24:
      v17 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      goto LABEL_26;
    }
    v12 = v23;
    v13 = 0LL;
    v21 = 0LL;
    if ( *a1 )
    {
      v14 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
              *a1,
              &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
              &v21);
      v9 = v14;
      if ( v14 >= 0 )
        v9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v14);
      v13 = v21;
      if ( v9 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v21 + 80LL))(v21, a2, v12, v22);
        v9 = v15;
        if ( v15 >= 0 )
        {
          v16 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v9 = 0;
          goto LABEL_22;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41,
          (__int64)"internal\\shell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v15);
        v13 = v21;
      }
    }
    else
    {
      v9 = -2147467261;
    }
    if ( v13 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
LABEL_22:
    if ( v9 >= 0 )
      v9 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (__int64)"internal\\shell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v10);
LABEL_26:
  v18 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
  }
LABEL_28:
  v19 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v9;
}
