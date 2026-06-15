/*
 * XREFs of ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800474B4
 * Callers:
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x180030ADC (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     _CStreamClassPolicyManager::GetPolicyVolumeForStreamClass_::_1_::dtor$9 @ 0x18004B758 (_CStreamClassPolicyManager--GetPolicyVolumeForStreamClass_--_1_--dtor$9.c)
 *     _AudioEffectsWatcher::_AudioEffectsWatcher_::_1_::dtor$1 @ 0x18004BB32 (_AudioEffectsWatcher--_AudioEffectsWatcher_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$4 @ 0x18004C5C4 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18004C605 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$7 @ 0x18004C636 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$7.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$4 @ 0x18004C8E5 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$4.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18004D110 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper_::_1_::dtor$2 @ 0x180066B64 (_CStreamClassPolicyGainsWrapper--CStreamClassPolicyGainsWrapper_--_1_--dtor$2.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x18007F23C (--1CPolicyConfig@@UEAA@XZ.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$4 @ 0x18007F3BB (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$4.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$5 @ 0x18007F3EC (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$5.c)
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x18008E540 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009BDD0 (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800A4C30 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$4 @ 0x1800A4E63 (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$6 @ 0x1800A4EA4 (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$7 @ 0x1800A4ED5 (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$7.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180047524 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
