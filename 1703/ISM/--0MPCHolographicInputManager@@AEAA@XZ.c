/*
 * XREFs of ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004A9E0
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18004DDE0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_a6dafc035b20d634b29ec3c0443d964a_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180007518 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800075AC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??$?4AEAV?$function@$$A6AX_N@Z@std@@X@?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z @ 0x18000877C (--$-4AEAV-$function@$$A6AX_N@Z@std@@X@-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180008B9C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008BE0 (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z @ 0x18004A7DC (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z.c)
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18004D480 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=65
MPCHolographicInputManager *__fastcall MPCHolographicInputManager::MPCHolographicInputManager(
        MPCHolographicInputManager *this)
{
  _DWORD *v2; // rsi
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rdx
  __int64 ***v9; // r14
  RTL_SRWLOCK *Ptr; // rax
  RTL_SRWLOCK v11; // rcx
  PSRWLOCK v12; // rbx
  unsigned int *v13; // rax
  _QWORD *v14; // rdx
  RTL_SRWLOCK *v15; // rax
  RTL_SRWLOCK *v16; // rbx
  char v17; // bl
  char v19; // [rsp+40h] [rbp-29h]
  _QWORD v20[2]; // [rsp+50h] [rbp-19h] BYREF
  char v21; // [rsp+60h] [rbp-9h]
  MPCHolographicInputManager *v22; // [rsp+68h] [rbp-1h]
  _QWORD *v23; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  PSRWLOCK v25; // [rsp+D8h] [rbp+6Fh] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v27; // [rsp+E8h] [rbp+7Fh]

  *((_QWORD *)this + 262) = 0LL;
  *((_QWORD *)this + 263) = 0LL;
  *((_QWORD *)this + 264) = 0LL;
  *((_QWORD *)this + 265) = 0LL;
  *((_QWORD *)this + 266) = 0LL;
  *((_QWORD *)this + 267) = 0LL;
  *((_QWORD *)this + 268) = 0LL;
  *((_QWORD *)this + 269) = 0LL;
  *((_WORD *)this + 1080) = 0;
  *((_BYTE *)this + 2164) = 0;
  *((_DWORD *)this + 542) = 0;
  *((_QWORD *)this + 272) = 0LL;
  *((_QWORD *)this + 273) = 0LL;
  memset((char *)this + 2192, 0, 0xA8uLL);
  *((_QWORD *)this + 295) = 0LL;
  *((_QWORD *)this + 296) = 0LL;
  *((_QWORD *)this + 297) = 0LL;
  *((_QWORD *)this + 298) = 0LL;
  *((_QWORD *)this + 299) = 0LL;
  *((_QWORD *)this + 300) = 0LL;
  *((_DWORD *)this + 602) = 1;
  *((_QWORD *)this + 302) = 0LL;
  *((_DWORD *)this + 606) = 0;
  v2 = (_DWORD *)((char *)this + 2428);
  *((_DWORD *)this + 607) = 0;
  *((_QWORD *)this + 304) = 0LL;
  v3 = (RTL_SRWLOCK *)operator new(0x20uLL);
  v25 = v3;
  LOBYTE(v3->Ptr) = 0;
  v3[1].Ptr = 0LL;
  v3[2].Ptr = 0LL;
  LOWORD(v3[3].Ptr) = 0;
  BYTE2(v3[3].Ptr) = 0;
  MPCGamepadInputHelper::UpdateGamepadFocus((MPCGamepadInputHelper *)v3, 0);
  MPCGamepadInputHelper::s_instance = (struct MPCGamepadInputHelper *)v3;
  v4 = *((_QWORD *)this + 298);
  if ( v4 )
  {
    *((_QWORD *)this + 298) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = CoreUICreate((char *)this + 2384);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  *((_BYTE *)this + 2088) = 0;
  v25 = (PSRWLOCK)v20;
  v20[0] = &std::_Func_impl<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager * const,std::_Ph<1> const &>,std::allocator<int>,void,bool>::`vftable';
  v20[1] = MPCHolographicInputManager::OnHitTestingStateChanged;
  v21 = v19;
  v22 = this;
  v23 = v20;
  v27 = v20;
  MPC3DStateHelper::GetInstance();
  v7 = v6;
  wil::srwlock::lock_exclusive(v6, &SRWLock);
  *v2 = LODWORD(v7[2].Ptr)++;
  v9 = (__int64 ***)&v7[7];
  Ptr = (RTL_SRWLOCK *)v7[7].Ptr;
  v11.Ptr = Ptr[1].Ptr;
  v12 = Ptr;
  if ( !*((_BYTE *)v11.Ptr + 25) )
  {
    v8 = (unsigned int)*v2;
    do
    {
      if ( *((_DWORD *)v11.Ptr + 8) >= (unsigned int)v8 )
      {
        v12 = (PSRWLOCK)v11.Ptr;
        v11.Ptr = *(PVOID *)v11.Ptr;
      }
      else
      {
        v11.Ptr = (PVOID)*((_QWORD *)v11.Ptr + 2);
      }
    }
    while ( !*((_BYTE *)v11.Ptr + 25) );
  }
  if ( v12 == Ptr || *v2 < LODWORD(v12[4].Ptr) )
  {
    v25 = (PSRWLOCK)((char *)this + 2428);
    v13 = (unsigned int *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                            (__int64)v9,
                            v8,
                            (_DWORD **)&v25);
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      v9,
      &v25,
      (__int64 *)v12,
      v13 + 8,
      v13);
    v12 = v25;
  }
  std::function<void (bool)>::operator=<std::function<void (bool)> &,void>((__int64)&v12[5], (__int64)v20);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v23 )
  {
    v14 = v23;
    LOBYTE(v14) = v23 != v20;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v14);
    v23 = 0LL;
  }
  MPC3DStateHelper::GetInstance();
  v16 = v15;
  wil::srwlock::lock_shared(v15, &v25);
  v17 = BYTE6(v16[2].Ptr);
  if ( v25 )
    ReleaseSRWLockShared(v25);
  if ( v17 )
    MPCHolographicInputManager::OnHitTestingStateChanged(this, 1);
  return this;
}
