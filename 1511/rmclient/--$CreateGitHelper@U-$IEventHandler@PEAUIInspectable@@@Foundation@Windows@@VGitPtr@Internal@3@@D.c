/*
 * XREFs of ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002E44
 * Callers:
 *     ?Add@?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180001DA4 (-Add@-$GitEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 * Callees:
 *     ??$Register@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@@Z @ 0x180002BA4 (--$Register@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@-$GitPtrImpl@VGitPtr@Intern.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180002C0C (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002CA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@W.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180002D20 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@.c)
 *     ??0?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180002D5C (--0-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  void *v5; // rax
  int v6; // edi
  __int64 (__fastcall *v7)(__int64, const struct _GUID *, _QWORD *); // rdi
  int Interface; // eax
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rsi

  *a2 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (volatile signed __int32 *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>((__int64)v5);
  if ( v4 )
  {
    v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke((__int64)(v4 + 10));
    if ( v6 >= 0 && a1 )
      v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Register<Windows::Foundation::IEventHandler<IInspectable *>>(
             (__int64)(v4 + 10),
             a1);
    if ( v6 >= 0 )
    {
      v7 = **(__int64 (__fastcall ***)(__int64, const struct _GUID *, _QWORD *))v4;
      if ( v7 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                      (__int64)v4,
                      &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
                      a2);
      else
        Interface = v7((__int64)v4, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a2);
      v6 = Interface;
    }
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v4 )
  {
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
    else
      v10(v4);
  }
  return (unsigned int)v6;
}
