/*
 * XREFs of ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000C3B0
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x180005B70 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007810 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007C50 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000B1E0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::Lock(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, a2);
  return a2;
}
