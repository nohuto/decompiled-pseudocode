/*
 * XREFs of ??1CAudioStream@@MEAA@XZ @ 0x180019C60
 * Callers:
 *     ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x1800167A0 (--_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z.c)
 *     ??_GCAudioStream@@MEAAPEAXI@Z @ 0x1800643C0 (--_GCAudioStream@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x1800216E0 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180027AD0 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z @ 0x180027C50 (-Fire@AudioSrvVolumeTelemetryStreamVolume@@EEAAX_KI@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18002D350 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18005072C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180064468 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall CAudioStream::~CAudioStream(CAudioStream *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  __int64 v5; // rcx
  _QWORD **v6; // rbx
  ATL::CAtlPlex *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  void (__fastcall *v11)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int); // rax
  unsigned __int64 v12; // rdx
  AudioSrvVolumeTelemetryStreamVolume *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void *v21; // rbx
  HANDLE ProcessHeap; // rax
  void *v23; // rbx
  HANDLE v24; // rax
  __int64 v25; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v27; // [rsp+30h] [rbp-28h]
  char *v28; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *((_QWORD *)this + 2) = &CAudioStream::`vftable'{for `CUnknown'};
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, this);
  }
  v2 = (char *)*((_QWORD *)this + 57);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 57) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 58);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 58) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 9);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 352);
  v27 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (_QWORD **)((char *)this + 392);
  v28 = (char *)*((_QWORD *)this + 49);
  while ( v28 )
  {
    v5 = *(_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, &v28);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v27 )
    LeaveCriticalSection(lpCriticalSection);
  while ( *((_QWORD *)this + 51) )
  {
    if ( !*v6 )
      ATL::AtlThrowImpl(-2147467259);
    *v6 = (_QWORD *)**v6;
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode((char *)this + 392);
  }
  *v6 = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  v7 = (ATL::CAtlPlex *)*((_QWORD *)this + 52);
  if ( v7 )
  {
    ATL::CAtlPlex::FreeDataChain(v7);
    *((_QWORD *)this + 52) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  v28 = (char *)this + 200;
  *((_QWORD *)this + 25) = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  if ( *((_QWORD *)this + 26) )
  {
    v9 = *((_QWORD *)this + 26);
    if ( GetTickCount64() - v9 > 0x1F4 )
    {
      v10 = *((unsigned int *)this + 56);
      v11 = (void (__fastcall *)(AudioSrvVolumeTelemetryStreamVolume *__hidden, unsigned __int64, unsigned int))**((_QWORD **)this + 25);
      v12 = v9 - *((_QWORD *)this + 27);
      v13 = (CAudioStream *)((char *)this + 200);
      if ( v11 == AudioSrvVolumeTelemetryStreamVolume::Fire )
        AudioSrvVolumeTelemetryStreamVolume::Fire(v13, v12, v10);
      else
        v11(v13, v12, v10);
    }
  }
  LOBYTE(v8) = 1;
  std::wstring::_Tidy((char *)this + 304, v8, 0LL);
  LOBYTE(v14) = 1;
  std::wstring::_Tidy((char *)this + 264, v14, 0LL);
  LOBYTE(v15) = 1;
  std::string::_Tidy((char *)this + 232, v15, 0LL, v16, -2, lpCriticalSection);
  v17 = *((_QWORD *)this + 24);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *((_QWORD *)this + 23);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = *((_QWORD *)this + 22);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = *((_QWORD *)this + 21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v21 = (void *)*((_QWORD *)this + 14);
  if ( v21 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v21);
  }
  v23 = (void *)*((_QWORD *)this + 13);
  if ( v23 )
  {
    v24 = GetProcessHeap();
    HeapFree(v24, 0, v23);
  }
  v25 = *((_QWORD *)this + 7);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
