/*
 * XREFs of ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009EF9C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002FAC0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x180068608 (--1-$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18009EAD4 (--1TSSession@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x180043574 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
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
