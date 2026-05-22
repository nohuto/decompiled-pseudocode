/*
 * XREFs of ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18004B428
 * Callers:
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180048950 (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004B200 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXPEAX_KI@Z @ 0x18004A87C (-MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXPEAX_KI@Z.c)
 *     ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004DA98 (--$emplace_back@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCInput.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::SetProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4)
{
  struct IMPCInputProviderBase **v6; // rdi
  struct IMPCInputProviderBase **i; // r14
  struct IMPCInputProviderBase *v8; // rbx
  char *v9; // rdi
  __int64 *v10; // rbp
  __int64 *j; // rbx
  __int64 v12; // rcx
  int v13; // ebx
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMPCInputProviderBase *v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = (struct IMPCInputProviderBase **)*((_QWORD *)this + 265);
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 264); i != v6; ++i )
  {
    v8 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 8LL))(*i);
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( a2 == v8 )
      break;
  }
  if ( i == *((struct IMPCInputProviderBase ***)this + 265) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x11B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = (char *)this + 2360;
  v10 = (__int64 *)*((_QWORD *)this + 296);
  for ( j = *(__int64 **)v9; j != v10; ++j )
  {
    v12 = *j;
    if ( *j )
    {
      *j = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  *((_QWORD *)v9 + 1) = *(_QWORD *)v9;
  v18 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
    v9,
    &v18);
  if ( v18 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v18 + 16LL))(v18);
  v13 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v14 && *v14 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(v15, a2, 0LL, v13);
  }
  return 0LL;
}
