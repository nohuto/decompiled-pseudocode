/*
 * XREFs of ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140003DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400032B0 (--1CStreamInstance@@QEAA@XZ.c)
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x14000383C (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Find@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstance@@PEAU3@@Z @ 0x14000538C (-Find@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005404 (-RemoveAt@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEA.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140005464 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     GetStreamingResourceManager @ 0x1400054D0 (GetStreamingResourceManager.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x1400094A0 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CStreamGroup::DestroyStream(CStreamGroup *this, __int64 a2)
{
  GraphStreamingResourceManager *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  void (__fastcall *v7)(GraphStreamingResourceManager *__hidden, struct ProcessRegistrationToken__ *); // r15
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v10; // [rsp+28h] [rbp-8h]
  GraphStreamingResourceManager *Stream; // [rsp+50h] [rbp+20h] BYREF

  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  Stream = CStreamGroup::FindStream(this, a2);
  v4 = Stream;
  if ( Stream )
  {
    v5 = ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::Find((char *)this + 96, &Stream);
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt((char *)this + 96, v5);
    v6 = *((_QWORD *)this + 32);
    if ( v6 )
    {
      Stream = 0LL;
      if ( (int)GetStreamingResourceManager(v6, &Stream) >= 0 && *((_QWORD *)v4 + 6) )
      {
        v7 = *(void (__fastcall **)(GraphStreamingResourceManager *__hidden, struct ProcessRegistrationToken__ *))(*(_QWORD *)Stream + 32LL);
        if ( v7 == GraphStreamingResourceManager::UnregisterProcess )
          GraphStreamingResourceManager::UnregisterProcess(Stream, *((struct ProcessRegistrationToken__ **)v4 + 6));
        else
          v7(Stream, *((struct ProcessRegistrationToken__ **)v4 + 6));
        *((_QWORD *)v4 + 6) = 0LL;
      }
      if ( Stream )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)Stream + 16LL))(Stream);
    }
    if ( *((_BYTE *)v4 + 17) )
    {
      ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(
        &Stream,
        *((_QWORD *)this + 32));
      CStreamInstance::DisconnectFromSaDevice((struct CPipeInstance **)v4, Stream);
      if ( Stream )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)Stream + 16LL))(Stream);
    }
    CStreamInstance::~CStreamInstance(v4);
    operator delete(v4);
  }
  PublishDeviceGraphWnfState();
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
