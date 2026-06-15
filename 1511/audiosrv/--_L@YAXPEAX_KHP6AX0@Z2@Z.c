/*
 * XREFs of ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180047698
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000C3D4 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x180031370 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18003FD50 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004320C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@AEBV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@@Z @ 0x180066AC8 (--0CStreamClassPolicyGainsWrapper@@QEAA@AEBV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTrait.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x180047524 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int i; // ebx

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
