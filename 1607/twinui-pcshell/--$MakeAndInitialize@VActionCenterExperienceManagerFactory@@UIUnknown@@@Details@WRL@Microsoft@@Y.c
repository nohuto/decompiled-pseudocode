/*
 * XREFs of ??$MakeAndInitialize@VActionCenterExperienceManagerFactory@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180015750
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VActionCenterExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180015520 (-CreateInstance@-$SimpleClassFactory@VActionCenterExperienceManagerFactory@@$0A@@WRL@Microsoft@@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180001430 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIIndividualExperienceManagerFactory@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004240 (-Release@-$RuntimeClass@U-$InterfaceList@UIIndividualExperienceManagerFactory@@U-$InterfaceList@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIIndividualExperienceManagerFactory@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013C10 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIIndividualExperienceManagerFactory@@U-$Interfa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ActionCenterExperienceManagerFactory,IUnknown>(
        _QWORD *a1)
{
  char *v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  bool v5; // zf
  unsigned int Interface; // edi

  *a1 = 0LL;
  v2 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    v4 = v2 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 8));
    v5 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IIndividualExperienceManagerFactory'};
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_DWORD *)(v3 + 36) = 1;
    if ( !v5 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v3 = &ActionCenterExperienceManagerFactory::`vftable'{for `IIndividualExperienceManagerFactory'};
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IIndividualExperienceManagerFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v3,
                  &GUID_00000000_0000_0000_c000_000000000046,
                  a1);
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IIndividualExperienceManagerFactory,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return Interface;
}
