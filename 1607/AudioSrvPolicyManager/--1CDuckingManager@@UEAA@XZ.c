/*
 * XREFs of ??1CDuckingManager@@UEAA@XZ @ 0x180005984
 * Callers:
 *     ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180005940 (--_ECDuckingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCActiveAudioSession@@V?$CElementTraits@PEAVCActiveAudioSession@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009640 (-RemoveAt@-$CAtlArray@PEAVCActiveAudioSession@@V-$CElementTraits@PEAVCActiveAudioSession@@@ATL@@.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009780 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDuckWorkItem@@V?$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAPEAVCDuckWorkItem@@XZ @ 0x180009888 (-RemoveHead@-$CAtlList@PEAVCDuckWorkItem@@V-$CElementTraits@PEAVCDuckWorkItem@@@ATL@@@ATL@@QEAAP.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180009D68 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingManager::~CDuckingManager(CDuckingManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  unsigned int v3; // r15d
  unsigned __int64 v4; // rsi
  _QWORD *v5; // r14
  const wchar_t *v6; // rax
  void *v7; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rbx
  const wchar_t *v10; // rax
  HANDLE v11; // rax
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h]

  *((_DWORD *)this + 78) = 1;
  *(_QWORD *)this = &CDuckingManager::`vftable'{for `CUnknown'};
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CDuckingManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &CDuckingManager::`vftable'{for `IAudioDuckingManager'};
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = 0LL;
    v5 = (_QWORD *)((char *)this + 72);
    do
    {
      if ( v4 >= *((_QWORD *)this + 10) )
        ATL::AtlThrowImpl(-2147024809);
      _mm_lfence();
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v6 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD, _UNKNOWN **))(***(_QWORD ***)(*v5 + 8 * v4) + 64LL))(
                                **(_QWORD **)(*v5 + 8 * v4),
                                &WPP_GLOBAL_Control);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v6);
      }
      if ( v4 >= *((_QWORD *)this + 10) )
        ATL::AtlThrowImpl(-2147024809);
      v7 = *(void **)(*v5 + 8 * v4);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v7);
      ATL::CAtlArray<CActiveAudioSession *,ATL::CElementTraits<CActiveAudioSession *>>::RemoveAt((char *)this + 72, v4);
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *((_QWORD *)this + 10) );
  }
  LeaveCriticalSection(v1);
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 208);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  while ( *((_QWORD *)this + 33) )
  {
    v9 = (_QWORD *)ATL::CAtlList<CDuckWorkItem *,ATL::CElementTraits<CDuckWorkItem *>>::RemoveHead((char *)this + 248);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      v10 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 64LL))(*v9);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v10);
    }
    if ( v9 )
    {
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v9);
    }
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((char *)this + 248);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  while ( *((_QWORD *)this + 19) )
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt((char *)this + 144, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v12 = (void *)*((_QWORD *)this + 22);
  if ( v12 )
    free(v12);
  v13 = *((_QWORD *)this + 18);
  if ( v13 )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
      v13,
      *((_QWORD *)this + 19));
    free(*((void **)this + 18));
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v14 = (void *)*((_QWORD *)this + 9);
  if ( v14 )
    free(v14);
  DeleteCriticalSection(v1);
  *(_QWORD *)this = &CUnknown::`vftable';
}
