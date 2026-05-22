/*
 * XREFs of ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180053948
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180053E60 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180007B04 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007B64 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180053708 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180054370 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RuntimeClassInitialize(MPCRawInputProvider *this, struct IRawInputClient *a2)
{
  __int64 v4; // rcx
  void *v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  HANDLE Event; // r14
  void *v9; // rbx
  DWORD LastError; // esi
  const char *v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  int v16; // eax
  __int64 v17; // rax
  RTL_SRWLOCK *v18; // rax
  __int128 v20; // [rsp+40h] [rbp-21h]
  char v21; // [rsp+50h] [rbp-11h]
  void **v22; // [rsp+60h] [rbp-1h] BYREF
  __int128 v23; // [rsp+68h] [rbp+7h]
  char v24; // [rsp+78h] [rbp+17h]
  MPCRawInputProvider *v25; // [rsp+80h] [rbp+1Fh]
  void ***v26; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((struct IRawInputClient **)this + 2) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 6) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  *((_DWORD *)this + 7) = 512;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::FailFast_GetLastError(retaddr, v5, v6, v7);
    __debugbreak();
  }
  GetLastError();
  v9 = (void *)*((_QWORD *)this + 13);
  if ( v9 )
  {
    LastError = GetLastError();
    if ( !CloseHandle(v9) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x875,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v11);
      __debugbreak();
    }
    SetLastError(LastError);
  }
  *((_QWORD *)this + 13) = Event;
  v12 = (_QWORD *)((char *)this + 96);
  v13 = *((_QWORD *)this + 12);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = CoreUICreate((char *)this + 96);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  if ( !*v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v15);
    __debugbreak();
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), MPCRawInputProvider *))(*(_QWORD *)*v12 + 264LL))(
          *v12,
          *((_QWORD *)this + 13),
          MPCRawInputProvider::InputReceivedStatic,
          this);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  *((_BYTE *)this + 112) = 1;
  *(_QWORD *)&v20 = MPCRawInputProvider::OnCompositorRunningStateChanged;
  DWORD2(v20) = 0;
  v22 = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
  v23 = v20;
  v24 = v21;
  v25 = this;
  v26 = &v22;
  MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(v17, (__int64)&v22, (_DWORD *)this + 46);
  MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v18) )
    MPCRawInputProvider::OnCompositorRunningStateChanged(this, 1);
  return 0LL;
}
