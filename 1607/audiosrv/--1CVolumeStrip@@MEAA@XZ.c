/*
 * XREFs of ??1CVolumeStrip@@MEAA@XZ @ 0x180059574
 * Callers:
 *     ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x180059790 (--_GCVolumeStrip@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180001A3C (-RemoveAt@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComP.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x180028B58 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x180028C50 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ??1?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x18002D8C8 (--1-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V-$CComPtr@UIAu.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeStrip::~CVolumeStrip(CVolumeStrip *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  char *v5; // rbx

  *(_QWORD *)this = &CVolumeStrip::`vftable';
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 30) = 0LL;
  }
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 31) = 0LL;
  }
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 32) = 0LL;
  }
  operator delete(*((void **)this + 28));
  *((_QWORD *)this + 28) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  while ( *((_QWORD *)this + 20) )
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::RemoveAt(
      (void **)this + 19,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)this + 23);
  ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::~CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>((__int64)this + 152);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v5 = (char *)this + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)v5);
  while ( *((_QWORD *)v5 + 6) )
    ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt((_QWORD *)v5 + 5, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)v5 + 9);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)v5 + 5);
  DeleteCriticalSection((LPCRITICAL_SECTION)v5);
}
