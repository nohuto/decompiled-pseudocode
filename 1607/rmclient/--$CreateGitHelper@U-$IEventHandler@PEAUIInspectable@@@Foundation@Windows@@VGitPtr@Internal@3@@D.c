/*
 * XREFs of ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002B40
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180002900 (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002C50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@W.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180002CD0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@.c)
 *     ??$Make@U?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x180002D30 (--$Make@U-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Inter.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // edi
  __int64 (__fastcall *v8)(__int64, GUID *, _QWORD *); // rax
  int Interface; // eax
  void (__fastcall *v10)(__int64); // rax
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  char v13; // [rsp+70h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (char *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>>(&v12);
  v5 = 0LL;
  if ( &v13 != v4 )
  {
    v5 = *(_QWORD *)v4;
    *(_QWORD *)v4 = 0LL;
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !v5 )
    return 2147942414LL;
  v7 = 0;
  if ( *(_DWORD *)(v5 + 48) )
  {
    v7 = *(_DWORD *)(v5 + 52);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1800166A8 + 32LL))(qword_1800166A8);
  }
  *(_DWORD *)(v5 + 48) = 0;
  if ( v7 >= 0 )
  {
    if ( a1 )
    {
      v7 = *(_DWORD *)(v5 + 52);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64))(*(_QWORD *)qword_1800166A8 + 24LL))(
               qword_1800166A8,
               a1,
               &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
               v5 + 48);
    }
  }
  if ( v7 >= 0 )
  {
    v8 = **(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5;
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    v5,
                    &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
                    a2);
    else
      Interface = v8(v5, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a2);
    v7 = Interface;
  }
  v10 = *(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL);
  if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  else
    v10(v5);
  return (unsigned int)v7;
}
