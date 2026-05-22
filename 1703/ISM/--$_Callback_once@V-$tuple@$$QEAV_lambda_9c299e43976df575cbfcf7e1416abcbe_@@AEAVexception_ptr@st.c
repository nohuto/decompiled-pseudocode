/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800571E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180007654 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180007B04 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007B64 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18005604C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?make_event_watcher@wil@@YA?AV?$unique_any_t@V?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180056118 (-make_event_watcher@wil@@YA-AV-$unique_any_t@V-$event_watcher_t@V-$unique_storage@U-$resource_po.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800566B0 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=41
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_9c299e43976df575cbfcf7e1416abcbe_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  _QWORD *v2; // rbx
  wil::details::event_watcher_state **v3; // rdi
  _QWORD *event_watcher; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r14
  wil::details::event_watcher_state *v7; // r15
  wil::details::event_watcher_state *v8; // rsi
  DWORD LastError; // r12d
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  struct MPC3DStateHelper *InstanceOffInputThread; // rcx
  RTL_SRWLOCK *v15; // rax
  void *v17; // rbx
  void *v18; // rax
  wil::details::event_watcher_state *v19; // [rsp+20h] [rbp-138h] BYREF
  void **v20; // [rsp+28h] [rbp-130h]
  void (__fastcall *v21)(MPCHeadUpdateListener *, char); // [rsp+30h] [rbp-128h]
  char v22; // [rsp+38h] [rbp-120h]
  _QWORD *v23; // [rsp+40h] [rbp-118h]
  _QWORD v24[2]; // [rsp+48h] [rbp-110h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-100h] BYREF
  char v26; // [rsp+68h] [rbp-F0h]
  _QWORD *v27; // [rsp+70h] [rbp-E8h]
  _QWORD *v28; // [rsp+90h] [rbp-C8h]
  __int64 v29; // [rsp+98h] [rbp-C0h]
  _QWORD *v30; // [rsp+A0h] [rbp-B8h]
  _QWORD v31[13]; // [rsp+B0h] [rbp-A8h] BYREF
  _QWORD *v32; // [rsp+118h] [rbp-40h]

  v29 = -2LL;
  v20 = a2;
  try
  {
    v2 = operator new(0x90uLL);
    memset(v2, 0, 0x90uLL);
    *v2 = 0LL;
    InitializeSRWLock((PSRWLOCK)v2 + 1);
    InitializeSRWLock((PSRWLOCK)v2 + 2);
    v3 = (wil::details::event_watcher_state **)(v2 + 3);
    v2[3] = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 12), 0, 0);
    *((_BYTE *)v2 + 136) = 0;
    *((_BYTE *)v2 + 137) = 0;
    *((_BYTE *)v2 + 138) = 0;
    *((_DWORD *)v2 + 35) = 0;
    MPCHeadUpdateListener::s_instance = (struct MPCHeadUpdateListener *)v2;
    v31[0] = off_1800A73E8;
    v32 = v31;
    event_watcher = wil::make_event_watcher(&v19, (__int64)v31);
    v6 = event_watcher;
    if ( v2 + 3 != event_watcher )
    {
      v7 = (wil::details::event_watcher_state *)*event_watcher;
      v8 = *v3;
      if ( *v3 )
      {
        LastError = GetLastError();
        wil::details::event_watcher_state::`scalar deleting destructor'(v8, v10);
        SetLastError(LastError);
      }
      *v3 = v7;
      *v6 = 0LL;
    }
    if ( v19 )
      wil::details::event_watcher_state::`scalar deleting destructor'(v19, v5);
    v11 = v32;
    if ( v32 )
    {
      v12 = v31;
      LOBYTE(v12) = v32 != v31;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v32 + 24LL))(v32, v12);
      v11 = 0LL;
      v32 = 0LL;
    }
    if ( v11 )
    {
      v13 = v31;
      LOBYTE(v13) = v11 != v31;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v11 + 24LL))(v11, v13);
      v32 = 0LL;
    }
    v19 = (wil::details::event_watcher_state *)v25;
    v30 = v2;
    v24[0] = MPCHeadUpdateListener::On3DCompositorRunningChanged;
    v21 = MPCHeadUpdateListener::On3DCompositorRunningChanged;
    v23 = v2;
    v25[0] = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
    v25[1] = MPCHeadUpdateListener::On3DCompositorRunningChanged;
    v26 = v22;
    v27 = v2;
    v28 = v25;
    InstanceOffInputThread = MPC3DStateHelper::GetInstanceOffInputThread();
    MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(
      (__int64)InstanceOffInputThread,
      (__int64)v25,
      (_DWORD *)v2 + 35);
    v15 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
    if ( MPC3DStateHelper::Is3DCompositorRunning(v15) )
      MPCHeadUpdateListener::On3DCompositorRunningChanged((MPCHeadUpdateListener *)v2, 1);
  }
  catch ( ... )
  {
    v17 = *v20;
    v18 = std::current_exception(v24);
    __ExceptionPtrAssign(v17, v18);
    __ExceptionPtrDestroy(v24);
    return 0LL;
  }
  return 1LL;
}
