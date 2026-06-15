/*
 * XREFs of ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140002530
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z @ 0x140001FB4 (-FindStream@CStreamGroup@@IEAAPEAVCStreamInstance@@_K@Z.c)
 *     ?Find@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstance@@PEAU3@@Z @ 0x14000374C (-Find@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400037C4 (-RemoveAt@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEA.c)
 *     ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140003830 (-UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     GetStreamingResourceManager @ 0x1400050F0 (GetStreamingResourceManager.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011450 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamGroup::DestroyStream(CStreamGroup *this, __int64 a2)
{
  GraphStreamingResourceManager *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct ProcessRegistrationToken__ *v7; // rdx
  void (*v8)(void); // rax
  void (__fastcall ***v9)(_QWORD, GUID *, GraphStreamingResourceManager **); // rcx
  void (__fastcall *v10)(_QWORD, GUID *, GraphStreamingResourceManager **); // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct CPipeInstance *v14; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]
  GraphStreamingResourceManager *Stream; // [rsp+40h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v17 = 0;
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
      if ( (int)GetStreamingResourceManager(v6, &Stream) >= 0 )
      {
        v7 = (struct ProcessRegistrationToken__ *)*((_QWORD *)v4 + 6);
        if ( v7 )
        {
          v8 = *(void (**)(void))(*(_QWORD *)Stream + 32LL);
          if ( (char *)v8 == (char *)GraphStreamingResourceManager::UnregisterProcess )
            GraphStreamingResourceManager::UnregisterProcess(Stream, v7);
          else
            v8();
          *((_QWORD *)v4 + 6) = 0LL;
        }
      }
      if ( Stream )
        (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)Stream + 16LL))(Stream);
    }
    if ( *((_BYTE *)v4 + 17) )
    {
      v9 = (void (__fastcall ***)(_QWORD, GUID *, GraphStreamingResourceManager **))*((_QWORD *)this + 32);
      Stream = 0LL;
      if ( v9 )
      {
        v10 = **v9;
        if ( (char *)v10 == (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface )
          ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(
            v9,
            &GUID_f023913b_e06a_4278_a498_925381e3c23a,
            &Stream);
        else
          v10(v9, &GUID_f023913b_e06a_4278_a498_925381e3c23a, &Stream);
        if ( Stream )
        {
          CStreamInstance::DisconnectFromSaDevice((struct CPipeInstance **)v4, Stream);
          if ( Stream )
            (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)Stream + 16LL))(Stream);
        }
      }
    }
    v11 = (void *)*((_QWORD *)v4 + 5);
    if ( v11 )
    {
      CloseHandle(v11);
      *((_QWORD *)v4 + 5) = 0LL;
    }
    v12 = *((_QWORD *)v4 + 4);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = *((_QWORD *)v4 + 3);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = *(struct CPipeInstance **)v4;
    if ( *(_QWORD *)v4 )
    {
      CPipeInstance::~CPipeInstance(*(CPipeInstance **)v4);
      operator delete(v14);
    }
    *(_QWORD *)v4 = 0LL;
    operator delete(v4);
  }
  PublishDeviceGraphWnfState();
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
