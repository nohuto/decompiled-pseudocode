/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x18000CCAC
 * Callers:
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001D120 (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$2 @ 0x180031165 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$2.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$5 @ 0x180031189 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$5.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$8 @ 0x1800311AD (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$8.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$11 @ 0x1800311D1 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$11.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$14 @ 0x1800311F5 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$14.c)
 *     _CActionCenterExperienceManager::OnViewPropertiesChanging_::_1_::dtor$17 @ 0x180031219 (_CActionCenterExperienceManager--OnViewPropertiesChanging_--_1_--dtor$17.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$3 @ 0x1800317A6 (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$3.c)
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$5 @ 0x1800317BE (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(RoVariant::OutRef *this)
{
  __int64 v1; // rbx
  __int64 *v2; // r14
  __int64 v3; // rsi
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = *(__int64 **)this;
  if ( v1 )
  {
    v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v1)(
           *((_QWORD *)this + 1),
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v8);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        v3 = v1;
        v4 = 3;
      }
      else
      {
        v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      }
    }
    else
    {
      v3 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      v4 = 7;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = 0;
  }
  v6 = *v2;
  *v2 = v3;
  v7 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 2) = v4;
  if ( v6 )
  {
    if ( ((v7 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
