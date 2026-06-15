/*
 * XREFs of ??1?$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ @ 0x180066410
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x180049F3C (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 *     _CMeterControlBase::GetChannelCountFromDeviceFormat_::_1_::dtor$0 @ 0x18004C893 (_CMeterControlBase--GetChannelCountFromDeviceFormat_--_1_--dtor$0.c)
 *     _CVolumeSoftware::Initialize_::_1_::dtor$0 @ 0x18006D7C0 (_CVolumeSoftware--Initialize_--_1_--dtor$0.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$4 @ 0x18008AC4F (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$4.c)
 *     _CMonitor::Initialize_::_1_::dtor$1 @ 0x180097974 (_CMonitor--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180043160 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>(CPolicyConfig **a1)
{
  __int64 (__fastcall *v1)(CPolicyConfig *); // rdi
  __int64 result; // rax

  if ( *a1 )
  {
    v1 = *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)*a1 + 16LL);
    if ( v1 == CPolicyConfig::Release )
      return CPolicyConfig::Release(*a1);
    else
      return v1(*a1);
  }
  return result;
}
