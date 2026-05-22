/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004E98C
 * Callers:
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18002D2E0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180040BE8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180045020 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180048950 (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800491E0 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004DA98 (--$emplace_back@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCInput.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 **v12; // rdi
  char **i; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v15; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 4) = *(_QWORD *)a2;
  v3 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 3) = v3;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 80LL))(
         v4,
         *((_QWORD *)this + 4),
         (char *)this + 40);
  if ( v6 >= 0 )
  {
    v9 = (char *)this + 16;
    MPCHolographicInputManager::GetInstance();
    v11 = v10;
    v12 = (__int64 **)(v10 + 2112);
    for ( i = *(char ***)(v10 + 2112); i != *(char ***)(v10 + 2120); ++i )
    {
      if ( *i == v9 )
      {
        v6 = -2147024809;
        v7 = 30LL;
        goto LABEL_5;
      }
    }
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v12,
      (__int64 *)&v15);
    if ( v15 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( *(_QWORD *)(v11 + 2360) == *(_QWORD *)(v11 + 2368) )
    {
      v15 = v9;
      if ( v9 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
      std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        (__int64 **)(v11 + 2360),
        (__int64 *)&v15);
      if ( v15 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( *(_QWORD *)(v11 + 2176) )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 248LL))(v9);
    return 0LL;
  }
  else
  {
    v7 = 27LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
}
