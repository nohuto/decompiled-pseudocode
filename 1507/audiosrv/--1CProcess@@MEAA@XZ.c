/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x1800119E8
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180011F20 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800070AC (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18000B04C (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18000C5E0 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180011150 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x180030A14 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
                       (__int64)v2,
                       0);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(v2);
      operator delete(v3);
    }
    while ( *((int *)this + 68) > 0 );
  }
  while ( *((int *)this + 74) > 0 )
  {
    v9 = *(void **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                     (__int64)this + 280,
                     0);
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
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64 *)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CUnknown::`vftable';
}
