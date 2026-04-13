/*
 * XREFs of ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180022190
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180021BE0 (-ActivateInstance@-$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180046268 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D14 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *result; // rax

  v1 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)((char *)this + 16));
  *((_QWORD *)this + 6) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v3 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( !v3 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`vftable';
  *((_QWORD *)this + 1) = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`vftable'{for `IWeakReferenceSource'};
  *v1 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
