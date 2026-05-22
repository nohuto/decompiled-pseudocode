/*
 * XREFs of ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004C17C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18004D038 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004DBE8 (--$emplace_back@AEBV-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCIn.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall MPCHolographicInputManager::TrySetProviderAsPrimary(__int64 a1, _QWORD *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rdi
  __int64 **v7; // r13
  _QWORD *v8; // rax
  char v9; // si
  int v10; // ebx
  const char *v11; // r9
  char result; // al
  __int64 *v13; // rdi
  __int64 *i; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rsi
  _QWORD *j; // r14
  __int64 v19; // rdi
  __int64 (__fastcall **v20)(); // [rsp+20h] [rbp-40h] BYREF
  char *v21; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v22)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v24; // [rsp+A0h] [rbp+40h] BYREF

  if ( !*(_BYTE *)(a1 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v6 = *a2;
  v7 = (__int64 **)(a1 + 2360);
  v8 = *(_QWORD **)(a1 + 2360);
  v9 = 1;
  v24 = 1;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 112LL))(*v8);
  if ( v10 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 224LL))(*a2) )
  {
    v9 = 0;
    v20 = off_1800A6D88;
    v21 = &v24;
    v22 = &v20;
    MPCHolographicInputManager::ForEachActiveProvider(a1, &v20);
  }
  result = v24;
  if ( v24 )
  {
    if ( !v9 )
    {
      v21 = (char *)a1;
      v20 = off_1800A6D58;
      v22 = &v20;
      MPCHolographicInputManager::ForEachActiveProvider(a1, &v20);
      v13 = v7[1];
      for ( i = *v7; i != v13; ++i )
      {
        v15 = *i;
        if ( *i )
        {
          *i = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      v7[1] = *v7;
    }
    v16 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 8LL))(*a2);
    v17 = *(_QWORD **)(a1 + 2120);
    for ( j = *(_QWORD **)(a1 + 2112); j != v17; ++j )
    {
      v19 = *j;
      if ( *j )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*j);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( v16 == v19 )
        break;
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( j == *(_QWORD **)(a1 + 2120) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x245,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v11);
      JUMPOUT(0x18004C369LL);
    }
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase> const &>(
      v7,
      a2);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
    return v24;
  }
  return result;
}
