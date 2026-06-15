/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035F78
 * Callers:
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800030D4 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     _AudioEffectsWatcher::_AudioEffectsWatcher_::_1_::dtor$1 @ 0x18003B530 (_AudioEffectsWatcher--_AudioEffectsWatcher_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$4 @ 0x18003B638 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18003B679 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$7 @ 0x18003B6AA (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$7.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$4 @ 0x18003BCB2 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$4.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18003C970 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x180066F68 (--1CPolicyConfig@@UEAA@XZ.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$4 @ 0x180067106 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$4.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$5 @ 0x180067137 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$5.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800765B0 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800871E4 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$4 @ 0x18008740C (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$6 @ 0x18008744D (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::_CEndpointCharacteristics_::_1_::dtor$7 @ 0x18008747E (_CEndpointCharacteristics--_CEndpointCharacteristics_--_1_--dtor$7.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180035FEC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
