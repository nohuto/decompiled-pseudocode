/*
 * XREFs of ??0?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180005FF4
 * Callers:
 *     ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002B34 (--$CreateGitHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@D.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180005F54 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x1800060A4 (--0GitPtr@Internal@Windows@@QEAA@XZ.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>(
        __int64 a1)
{
  _QWORD *v2; // r14
  struct Microsoft::WRL::Details::ModuleBase *v3; // rdi
  __int64 (*v4)(); // rsi

  v2 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Foundation::IEventHandler<IInspectable *>'};
  *v2 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *(_DWORD *)(a1 + 36) = 1;
  if ( v3 )
  {
    v4 = *(__int64 (**)())(*(_QWORD *)v3 + 8LL);
    if ( v4 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v4)(v3);
  }
  *(_QWORD *)a1 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>::`vftable'{for `Windows::Foundation::IEventHandler<IInspectable *>'};
  *v2 = &Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr,2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  Windows::Internal::GitPtr::GitPtr((Windows::Internal::GitPtr *)(a1 + 40));
  return a1;
}
