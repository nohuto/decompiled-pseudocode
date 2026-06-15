/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x1800297C0
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180029F40 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x180018C84 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180028F10 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18002BC04 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x18002ECD4 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800303A4 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CProcess::~CProcess(CProcess *this)
{
  char *v2; // rdi
  void *v3; // rbx
  char *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rbx
  int i; // ebx
  int j; // ebx

  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  if ( *((int *)this + 68) > 0 )
  {
    v2 = (char *)this + 256;
    do
    {
      v3 = *(void **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                       v2,
                       0LL);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(v2);
      operator delete(v3);
    }
    while ( *((int *)this + 68) > 0 );
  }
  while ( *((int *)this + 74) > 0 )
  {
    v9 = *(void **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                     (char *)this + 280,
                     0LL);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt((char *)this + 280);
    operator delete(v9);
  }
  if ( *((_DWORD *)this + 58) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 40LL))(*((_QWORD *)this + 30));
  CoTaskMemFree(*((LPVOID *)this + 24));
  CoTaskMemFree(*((LPVOID *)this + 26));
  CoTaskMemFree(*((LPVOID *)this + 23));
  CoTaskMemFree(*((LPVOID *)this + 22));
  CProcess::CleanupProcessTerminationWatcher((struct _TP_WAIT **)this, 0);
  v4 = (char *)*((_QWORD *)this + 20);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 20) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 8);
  if ( *((_QWORD *)this + 35) )
  {
    for ( i = 0; i < *((_DWORD *)this + 74); ++i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*((_QWORD *)this + 35) + 8LL * i));
    free(*((void **)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 36);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 36) = 0LL;
  }
  *((_DWORD *)this + 74) = 0;
  if ( *((_QWORD *)this + 32) )
  {
    for ( j = 0; j < *((_DWORD *)this + 68); ++j )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*((_QWORD *)this + 32) + 8LL * j));
    free(*((void **)this + 32));
    *((_QWORD *)this + 32) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 33);
  if ( v6 )
  {
    free(v6);
    *((_QWORD *)this + 33) = 0LL;
  }
  *((_DWORD *)this + 68) = 0;
  v7 = *((_QWORD *)this + 31);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 31));
  v8 = *((_QWORD *)this + 30);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 30));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CUnknown::`vftable';
}
