/*
 * XREFs of ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x180043574
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$4 @ 0x1800454F6 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$4.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$9 @ 0x180046048 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$9.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$4 @ 0x180047A96 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x180047AD7 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$7 @ 0x180047B08 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$7.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x180049060 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper_::_1_::dtor$2 @ 0x180068524 (_CStreamClassPolicyGainsWrapper--CStreamClassPolicyGainsWrapper_--_1_--dtor$2.c)
 *     ??1CEndpointSaDeviceLists@@QEAA@XZ @ 0x180073810 (--1CEndpointSaDeviceLists@@QEAA@XZ.c)
 *     _CEndpointSaDeviceLists::_CEndpointSaDeviceLists_::_1_::dtor$0 @ 0x1800738C1 (_CEndpointSaDeviceLists--_CEndpointSaDeviceLists_--_1_--dtor$0.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x180075DCC (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     _AudioEffectsWatcher::_AudioEffectsWatcher_::_1_::dtor$1 @ 0x180075EBE (_AudioEffectsWatcher--_AudioEffectsWatcher_--_1_--dtor$1.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800847E4 (--1CPolicyConfig@@UEAA@XZ.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$4 @ 0x180084963 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$4.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$5 @ 0x180084994 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$5.c)
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x180090C80 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009EF9C (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800A746C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$4 @ 0x1800A769F (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$6 @ 0x1800A76E0 (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$7 @ 0x1800A7711 (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$7.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x1800435E4 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, struct _GUID *a2, int a3, void (__fastcall *a4)(char *))
{
  int v5; // ebx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[(_QWORD)a2 * a3]; --v5 >= 0; a4(i) )
  {
    i -= (__int64)a2;
    _guard_check_icall_fptr((CBackgroundSessionCallbacks *)a4, a2);
  }
}
