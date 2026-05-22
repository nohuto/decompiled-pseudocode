/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x180053B5C
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x180053E20 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180007CD4 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocator@U-$pair@$$C.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180054730 (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=61
void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *v2; // rax
  RTL_SRWLOCK *v3; // rbx
  unsigned int v4; // edx
  const char *v5; // r9
  volatile signed __int32 *v6; // rcx
  SpeechRuntimeListener *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  void *v14; // rcx
  const char *v15; // r9
  __int64 v16; // rcx
  SpeechRuntimeListener *v17; // rcx
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  v21 = *((_DWORD *)this + 46);
  MPC3DStateHelper::GetInstance();
  v3 = v2;
  wil::srwlock::lock_exclusive(v2, &SRWLock);
  if ( std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
         (__int64 **)&v3[5],
         &v21) != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x134,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v5);
    __debugbreak();
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v7 = (SpeechRuntimeListener *)*((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v7 )
    SpeechRuntimeListener::`scalar deleting destructor'(v7, v4);
  if ( *((_QWORD *)this + 13) )
  {
    v8 = *((_QWORD *)this + 12);
    if ( v8 )
    {
      if ( *((_BYTE *)this + 112) && (*(int (__fastcall **)(__int64))(*(_QWORD *)v8 + 280LL))(v8) >= 0 )
        *((_BYTE *)this + 112) = 0;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 232LL))(*((_QWORD *)this + 12));
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *((_QWORD *)this + 12);
  if ( v10 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 2);
  if ( v11 && *((_BYTE *)this + 113) )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, (char *)this + 24);
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( *((_QWORD *)this + 15) )
  {
    std::_Deallocate(*((char **)this + 15), (*((_QWORD *)this + 17) - *((_QWORD *)this + 15)) / 1888LL, 0x760uLL);
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 13);
  if ( v14 && !CloseHandle(v14) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x875,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v15);
  v16 = *((_QWORD *)this + 12);
  if ( v16 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( *((_QWORD *)this + 11) )
  {
    v17 = (SpeechRuntimeListener *)*((_QWORD *)this + 11);
    if ( v17 )
      SpeechRuntimeListener::`scalar deleting destructor'(v17, v13);
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 10);
  if ( v18 )
  {
    *((_QWORD *)this + 10) = 0LL;
    if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 32LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v19 = *((_QWORD *)this + 2);
  if ( v19 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
