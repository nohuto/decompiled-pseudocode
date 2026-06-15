/*
 * XREFs of ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180043758
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x180027654 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x1800389A0 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18003B3C4 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@AEBV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@@Z @ 0x180068488 (--0CStreamClassPolicyGainsWrapper@@QEAA@AEBV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTrait.c)
 *     ?AddSaDevice@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEAVCSaDeviceInstance@@@Z @ 0x180073CD0 (-AddSaDevice@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x180075C90 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x1800435E4 (-__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
