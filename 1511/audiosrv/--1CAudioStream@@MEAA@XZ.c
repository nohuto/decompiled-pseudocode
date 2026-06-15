/*
 * XREFs of ??1CAudioStream@@MEAA@XZ @ 0x1800207D0
 * Callers:
 *     ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x18001CFE0 (--_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z.c)
 *     ??_GCAudioStream@@MEAAPEAXI@Z @ 0x18007CBB0 (--_GCAudioStream@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180039400 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x180093480 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A1C90 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioStream::~CAudioStream(CAudioStream *this)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  char *v4; // rcx
  char *v5; // rcx
  __int64 v6; // rcx
  _QWORD **v7; // rbx
  ATL::CAtlPlex *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CAudioStream::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, this);
  }
  v2 = (void *)*((_QWORD *)this + 12);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v2);
  *((_QWORD *)this + 12) = 0LL;
  v4 = (char *)*((_QWORD *)this + 35);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 35) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 36);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 36) = 0LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 192);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = (_QWORD **)((char *)this + 232);
  v17 = *((_QWORD *)this + 29);
  while ( v17 )
  {
    v14 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                       v6,
                       &v17);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  while ( *((_QWORD *)this + 31) )
  {
    if ( !*v7 )
      ATL::AtlThrowImpl(-2147467259);
    *v7 = (_QWORD *)**v7;
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode((char *)this + 232);
  }
  *v7 = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v8 = (ATL::CAtlPlex *)*((_QWORD *)this + 32);
  if ( v8 )
  {
    ATL::CAtlPlex::FreeDataChain(v8);
    *((_QWORD *)this + 32) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v9 = *((_QWORD *)this + 22);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 22));
  v10 = *((_QWORD *)this + 21);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 21));
  v11 = *((_QWORD *)this + 20);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 20));
  v12 = *((_QWORD *)this + 19);
  if ( v12 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*((_QWORD *)this + 19));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v13 = *((_QWORD *)this + 7);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*((_QWORD *)this + 7));
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
