/*
 * XREFs of ??1?$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ @ 0x18005091C
 * Callers:
 *     _CMeterControlBase::GetChannelCountFromDeviceFormat_::_1_::dtor$0 @ 0x18003B7EC (_CMeterControlBase--GetChannelCountFromDeviceFormat_--_1_--dtor$0.c)
 *     _CVolumeSoftware::Initialize_::_1_::dtor$0 @ 0x180056E9E (_CVolumeSoftware--Initialize_--_1_--dtor$0.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$4 @ 0x180073D83 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$4.c)
 *     _CMonitor::Initialize_::_1_::dtor$1 @ 0x180080363 (_CMonitor--Initialize_--_1_--dtor$1.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x18008D137 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>(CPolicyConfig **a1)
{
  CPolicyConfig *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CPolicyConfig::Release )
      CPolicyConfig::Release(v1);
    else
      v2();
  }
}
