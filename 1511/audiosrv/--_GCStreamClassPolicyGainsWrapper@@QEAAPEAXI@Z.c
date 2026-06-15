/*
 * XREFs of ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009BDD0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180037880 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x180066D04 (--1-$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009B950 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800474B4 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 */

CStreamClassPolicyGainsWrapper *__fastcall CStreamClassPolicyGainsWrapper::`scalar deleting destructor'(
        CStreamClassPolicyGainsWrapper *this)
{
  `eh vector destructor iterator'(
    (char *)this + 1048,
    (struct _GUID *)0x30,
    21,
    (void (__fastcall *)(char *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
  `eh vector destructor iterator'(
    (char *)this + 40,
    (struct _GUID *)0x30,
    21,
    (void (__fastcall *)(char *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  operator delete(this);
  return this;
}
