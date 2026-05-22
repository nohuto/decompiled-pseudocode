/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180050580
 * Callers:
 *     std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x18004DE60 (std--_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x18004DF30 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  const char *v4; // r9
  bool v5; // al
  char v6; // zf
  const char *v7; // r9
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v2 + 2160) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x425,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
    __debugbreak();
  }
  v5 = (*(_BYTE *)(v2 + 2424) & 1) == 0;
  v6 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v5;
  if ( v6 || !v5 )
  {
    v6 = *((_BYTE *)this + 66) == 0;
    if ( *((_BYTE *)this + 66) )
    {
      if ( !(unsigned int)MITDisableMouseIntercept(v3) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x136,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v8);
        __debugbreak();
      }
      *((_BYTE *)this + 66) = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v6 = *((_BYTE *)this + 66) == 0;
    if ( !*((_BYTE *)this + 66) )
    {
      if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x130,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v7);
        __debugbreak();
      }
      *((_BYTE *)this + 66) = 1;
LABEL_10:
      v6 = *((_BYTE *)this + 66) == 0;
    }
  }
  MPCCursorManager::UpdateCursorVisibility(this, v6, 1, 1);
}
