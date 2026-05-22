/*
 * XREFs of ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x18004D0FC
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1800412B0 (-hydroForwardInputReport@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004C36C (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004DA6C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIMPCInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall MPCHolographicInputManager::IsExclusiveTarget(
        __int64 (__fastcall ***a1)(struct IInputTarget *, GUID *, __int64))
{
  __int64 (__fastcall **v2)(struct IInputTarget *, GUID *, __int64); // rbx
  __int64 v3; // rax
  int v4; // eax
  bool v5; // bl
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = *a1;
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IMPCInputTarget>>(&v9);
  v4 = (*v2)((struct IInputTarget *)a1, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v3);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x389,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9) == 1;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
