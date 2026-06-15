/*
 * XREFs of ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4
 * Callers:
 *     ??_G?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAPEAXI@Z @ 0x180002A90 (--_G-$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAPEAXI@Z.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAPEAXI@Z @ 0x180003260 (--_E-$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@UEAAPEAXI@Z @ 0x180003550 (--_E-$CGenericApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@UEAAPEAXI@Z.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z @ 0x180005090 (--_G-$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180005668 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F320 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x180027698 (--1CAudioSession@@MEAA@XZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x180038FA4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAPEAXI@Z @ 0x18003F250 (--_E-$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAPEAXI@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180043160 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x180076590 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009B950 (--1TSSession@@QEAA@XZ.c)
 *     ??_G?$CGenericApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@UEAAPEAXI@Z @ 0x18009BCC0 (--_G-$CGenericApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z @ 0x18009D278 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGPEAH1PEAM11@Z.c)
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18009DA84 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 *     ??_E?$CGenericApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@UEAAPEAXI@Z @ 0x18009DFA0 (--_E-$CGenericApplicationManagerWorkItem@U_PlayToStreamStateChangedContext@@@@UEAAPEAXI@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18009E378 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?DestroyApplicationManager@@YAJXZ @ 0x18009E6CC (-DestroyApplicationManager@@YAJXZ.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18009EE48 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A1858 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ??_ECGainStage@@MEAAPEAXI@Z @ 0x18003ABA0 (--_ECGainStage@@MEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
