/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x18000DEA8
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x18000D6F0 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009B5C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18000F1B0 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x18000F960 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x18000FAF4 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010414 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CProcess::~CProcess(CProcess *this, unsigned int a2)
{
  int *v3; // rsi
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  struct _TP_TIMER *v8; // rcx
  void *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  if ( *((int *)this + 68) > 0 )
  {
    v3 = (int *)((char *)this + 256);
    do
    {
      if ( v3[4] <= 0 )
      {
        ATL::_AtlRaiseException((unsigned int)this, a2);
        __debugbreak();
      }
      v4 = (void *)**((_QWORD **)v3 + 1);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        v3,
        0LL);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
    }
    while ( *((int *)this + 68) > 0 );
  }
  while ( *((int *)this + 74) > 0 )
  {
    if ( *((int *)this + 74) <= 0 )
    {
      ATL::_AtlRaiseException((unsigned int)this, a2);
      __debugbreak();
    }
    v6 = (void *)**((_QWORD **)this + 36);
    ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
      (char *)this + 280,
      0LL);
    v7 = GetProcessHeap();
    HeapFree(v7, 0, v6);
  }
  if ( *((_DWORD *)this + 58) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 40LL))(*((_QWORD *)this + 30));
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 69);
  if ( v8 )
  {
    SetThreadpoolTimer(v8, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 69), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 69));
  }
  v9 = (void *)*((_QWORD *)this + 68);
  if ( v9 )
    CloseHandle(v9);
  CoTaskMemFree(*((LPVOID *)this + 24));
  CoTaskMemFree(*((LPVOID *)this + 26));
  CoTaskMemFree(*((LPVOID *)this + 23));
  CoTaskMemFree(*((LPVOID *)this + 22));
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  v10 = (char *)*((_QWORD *)this + 20);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v10);
    *((_QWORD *)this + 20) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 368));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 8);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((char *)this + 280);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((char *)this + 256);
  v11 = *((_QWORD *)this + 31);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 30);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CUnknown::`vftable';
}
