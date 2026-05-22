/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004CC70
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004DA6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IInputTarget **a4)
{
  bool v7; // zf
  __int64 v8; // rax
  const char *v9; // r9
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64); // rbx
  __int64 v11; // rax
  int v12; // eax
  MPCHolographicInputManager *v13; // rcx
  __int64 (__fastcall **v14)(_QWORD *, GUID *, struct IInputTarget **); // rax
  __int64 v15; // rax
  MPCHolographicInputManager *v16; // rbx
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  MPCHolographicInputManager *v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = this;
  v7 = (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3) == 0;
  v8 = *(_QWORD *)a3;
  if ( !v7 )
  {
    v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 168))(a3);
    v16 = (MPCHolographicInputManager *)v15;
    v19 = (MPCHolographicInputManager *)v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v17 = (**(__int64 (__fastcall ***)(MPCHolographicInputManager *, GUID *, struct IInputTarget **))v16)(
            v16,
            &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
            a4);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x339,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 184LL))(
           a3,
           a2) )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 160LL))(a3, 0LL);
    }
    v14 = *(__int64 (__fastcall ***)(_QWORD *, GUID *, struct IInputTarget **))v16;
    v13 = v16;
    goto LABEL_16;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(v8 + 176))(a3, a2) )
  {
    v19 = 0LL;
    if ( !*a4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x32C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v9);
      __debugbreak();
    }
    v10 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a4;
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMPCInputTarget>>(&v19);
    v12 = (*v10)(*a4, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v11);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x32F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *))(*(_QWORD *)a3 + 160LL))(
      a3,
      v19);
    v13 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      v14 = *(__int64 (__fastcall ***)(_QWORD *, GUID *, struct IInputTarget **))v13;
LABEL_16:
      ((void (__fastcall *)(MPCHolographicInputManager *))v14[2])(v13);
    }
  }
}
