/*
 * XREFs of ??1CAudioStream@@MEAA@XZ @ 0x18001E0B0
 * Callers:
 *     ??_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z @ 0x18002F460 (--_GCPerStreamVolumeAudioStream@@EEAAPEAXI@Z.c)
 *     ??_GCAudioStream@@MEAAPEAXI@Z @ 0x180081908 (--_GCAudioStream@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180006060 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800695F8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4 (-GetNext@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CAudioStream::~CAudioStream(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE LockSemaphore; // rbx
  HANDLE ProcessHeap; // rax
  char *v4; // rcx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  ATL::CAtlPlex **v7; // rcx
  HANDLE v8; // rdi
  HANDLE OwningThread; // rdi
  __int64 v10; // rdi
  PRTL_CRITICAL_SECTION_DEBUG v11; // rdi
  HANDLE v12; // rdi
  __int64 v13; // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v15; // [rsp+30h] [rbp-38h]
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [rsp+78h] [rbp+10h] BYREF

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)&this->LockCount = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  this->OwningThread = &CAudioStream::`vftable'{for `CUnknown'};
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      11LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      this);
  }
  LockSemaphore = this[2].LockSemaphore;
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, LockSemaphore);
  this[2].LockSemaphore = 0LL;
  v4 = *(char **)&this[7].LockCount;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *(_QWORD *)&this[7].LockCount = 0LL;
  }
  lpCriticalSection = this + 5;
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = this + 6;
  DebugInfo = this[6].DebugInfo;
  while ( DebugInfo )
  {
    v13 = *(_QWORD *)ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(
                       v5,
                       &DebugInfo);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  while ( this[6].OwningThread )
  {
    if ( !v6->DebugInfo )
      ATL::AtlThrowImpl(-2147467259);
    v6->DebugInfo = *(PRTL_CRITICAL_SECTION_DEBUG *)&v6->DebugInfo->Type;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(&this[6]);
  }
  v6->DebugInfo = 0LL;
  *(_QWORD *)&this[6].LockCount = 0LL;
  this[6].SpinCount = 0LL;
  v7 = (ATL::CAtlPlex **)this[6].LockSemaphore;
  if ( v7 )
  {
    ATL::CAtlPlex::FreeDataChain(v7);
    this[6].LockSemaphore = 0LL;
  }
  DeleteCriticalSection(this + 5);
  v8 = this[4].LockSemaphore;
  if ( v8 )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v8 + 16LL))(this[4].LockSemaphore);
  OwningThread = this[4].OwningThread;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(this[4].OwningThread);
  v10 = *(_QWORD *)&this[4].LockCount;
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*(_QWORD *)&this[4].LockCount);
  v11 = this[4].DebugInfo;
  if ( v11 )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v11->Type + 16LL))(this[4].DebugInfo);
  DeleteCriticalSection(this + 3);
  v12 = this[1].LockSemaphore;
  if ( v12 )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v12 + 16LL))(this[1].LockSemaphore);
  this->OwningThread = &CUnknown::`vftable';
}
