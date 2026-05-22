/*
 * XREFs of ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007B64
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180053948 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800571E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_9c299e43976df575cbfcf7e1416abcbe_@@AEAVexception_ptr@st.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$?4AEAV?$function@$$A6AX_N@Z@std@@X@?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z @ 0x18000877C (--$-4AEAV-$function@$$A6AX_N@Z@std@@X@-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180008B9C (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008BE0 (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 *v9; // rcx
  _DWORD *v10; // rbx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+18h] BYREF

  v15 = a2;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)a1, &SRWLock);
  *a3 = (*(_DWORD *)(a1 + 16))++;
  v7 = a1 + 40;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(__int64 **)(v8 + 8);
  v10 = (_DWORD *)v8;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v6 = (unsigned int)*a3;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= (unsigned int)v6 )
      {
        v10 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( v10 == (_DWORD *)v8 || *a3 < v10[8] )
  {
    v14 = a3;
    v11 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    v7,
                    v6,
                    &v14);
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      v7,
      v11);
    v10 = v14;
  }
  std::function<void (bool)>::operator=<std::function<void (bool)> &,void>(v10 + 10, a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v13 = *(_QWORD *)(a2 + 56);
  if ( v13 )
  {
    LOBYTE(v12) = v13 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v12);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
}
