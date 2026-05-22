/*
 * XREFs of ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x18002D550 (-OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002D8E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x18004DE60 (std--_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x18004DF30 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPCGamepadInputHelper *__fastcall MPCGamepadInputHelper::GetInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCGamepadInputHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = MPCGamepadInputHelper::s_instance;
  if ( !MPCGamepadInputHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
      a4);
    __debugbreak();
  }
  return result;
}
