/*
 * XREFs of std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x18004DF30
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180050580 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  MPCCursorManager *v5; // rbx
  __int64 v6; // rax
  struct MPCGamepadInputHelper *Instance; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v4 + 2408) = *(_DWORD *)(a1 + 8);
  v5 = *(MPCCursorManager **)(v4 + 2184);
  if ( v5 && *((_BYTE *)v5 + 64) )
  {
    MPCHolographicInputManager::GetInstance();
    *((_BYTE *)v5 + 56) = *(_DWORD *)(v6 + 2408) == 1;
    MPCCursorManager::UpdateMouseBinding(v5);
  }
  if ( *(_BYTE *)(v4 + 2160) )
  {
    Instance = MPCGamepadInputHelper::GetInstance(a1, a2, a3, a4);
    MPCHolographicInputManager::GetInstance();
    *((_BYTE *)Instance + 25) = *(_DWORD *)(v8 + 2408) == 1;
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v9 + 2160) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x425,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v10);
      JUMPOUT(0x18004DFD2LL);
    }
    *((_BYTE *)Instance + 26) = (*(_DWORD *)(v9 + 2424) & 2) != 0;
  }
}
