/*
 * XREFs of ??$Make@VCImmersiveWindowFactory@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x18002A1D8
 * Callers:
 *     ??$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@AEBV_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@Z @ 0x180029B20 (--$ActivateExperienceWithPropertySetCore@V_lambda_8bd04181e3f7733dc8d539cb679ff25f_@@@@YAJPEBGPE.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x18002C3E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@VNil@Det.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CImmersiveWindowFactory>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  *a1 = 0LL;
  v2 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(v2);
    *v3 = &CImmersiveWindowFactory::`vftable'{for `CImmersiveWindowFactoryBase'};
    v3[1] = &CImmersiveWindowFactory::`vftable'{for `CWrlLightweightHandlerBase'};
    v3[5] = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IStdMarshalInfo>,Microsoft::WRL::Details::Nil>,1,0>'};
    v3[6] = &CImmersiveWindowFactory::`vftable'{for `IConfigureWindowFactory'};
    v3[7] = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>,Microsoft::WRL::Details::Nil>,1,0>'};
    v3[17] = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
