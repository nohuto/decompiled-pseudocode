/*
 * XREFs of ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180001258 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z @ 0x180001FF0 (--_G-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAPEAXI@Z @ 0x1800050F0 (--_G-$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAPEAXI@Z.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@UEAAPEAXI@Z @ 0x180005790 (--_E-$CGenericApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@UEAAPEAXI@Z.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18000FB3C (--1CAudioSession@@MEAA@XZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180010610 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001C820 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAPEAXI@Z @ 0x18002D0A0 (--_E-$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180031898 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180038990 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAPEAXI@Z @ 0x18003F840 (--_E-$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAPEAXI@Z.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18007B300 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009EAD4 (--1TSSession@@QEAA@XZ.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@UEAAPEAXI@Z @ 0x18009EEA0 (--_G-$CGenericApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x1800A0128 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x1800A0898 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@UEAAPEAXI@Z @ 0x1800A0DF0 (--_E-$CGenericApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1800A1208 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?DestroyApplicationManager@@YAJXZ @ 0x1800A1590 (-DestroyApplicationManager@@YAJXZ.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800A1D74 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A44E8 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5A30 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??_ECGainStage@@MEAAPEAXI@Z @ 0x180032840 (--_ECGainStage@@MEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CRefCountedObject::Release(CRefCountedObject *this)
{
  unsigned __int32 v2; // esi
  void *(__fastcall *v4)(CGainStage *__hidden, unsigned int); // rbx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CRefCountedObject *))(*(_QWORD *)this + 16LL))(this);
    v4 = *(void *(__fastcall **)(CGainStage *__hidden, unsigned int))(*(_QWORD *)this + 8LL);
    if ( v4 == CGainStage::`vector deleting destructor' )
      CGainStage::`vector deleting destructor'(this, 1u);
    else
      v4(this, 1u);
  }
  return v2;
}
