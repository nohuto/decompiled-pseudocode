/*
 * XREFs of ??0SubscriptionImpl@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180044440
 * Callers:
 *     _lambda_770ef59a870ab0485516ac767e870dae_::operator() @ 0x180040F4C (_lambda_770ef59a870ab0485516ac767e870dae_--operator().c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall ContentManagement::TargetedContent::SubscriptionImpl::SubscriptionImpl(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  bool v3; // zf
  RTL_SRWLOCK *result; // rax

  v1 = this + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[1]);
  v3 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v1->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  this[4].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscription,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>>>,1,0>'};
  this[5].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentSubscription'};
  this[6].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscription,ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>,1,0>'};
  this[8].Ptr = (PVOID)1;
  if ( !v3 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  this->Ptr = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable';
  v1->Ptr = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `Microsoft::WRL::FtmBase'};
  this[4].Ptr = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentSubscription,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>>>,1,0>'};
  this[5].Ptr = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentSubscription'};
  this[6].Ptr = &ContentManagement::TargetedContent::SubscriptionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionPriv,Microsoft::WRL::Details::Nil>,1,0>'};
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  LODWORD(this[11].Ptr) = 0;
  this[12].Ptr = 0LL;
  InitializeSRWLock(this + 13);
  InitializeSRWLock(this + 14);
  this[15].Ptr = 0LL;
  result = this;
  this[17].Ptr = 0LL;
  this[19].Ptr = 0LL;
  this[20].Ptr = 0LL;
  return result;
}
