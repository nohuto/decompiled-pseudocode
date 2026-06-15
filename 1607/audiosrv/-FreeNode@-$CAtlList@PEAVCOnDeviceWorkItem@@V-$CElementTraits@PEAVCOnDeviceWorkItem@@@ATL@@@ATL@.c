/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180064468
 * Callers:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019C60 (--1CAudioStream@@MEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180050384 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180051244 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x180054AA0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180059C8C (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180064F54 (-RemoveAt@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCal.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x180066F68 (--1CPolicyConfig@@UEAA@XZ.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18006DA2C (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180050384 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

void __fastcall ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf

  *a2 = *(_QWORD *)(a1 + 32);
  v2 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v2 )
    ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll(a1);
}
