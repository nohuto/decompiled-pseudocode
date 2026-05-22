/*
 * XREFs of std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x18004DE60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18004A724 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180050580 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edi
  struct MPCGamepadInputHelper *Instance; // rbx
  __int64 v8; // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(v4 + 2424);
  *(_DWORD *)(v4 + 2424) = v5;
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v5) & 1) != 0 )
  {
    a1 = *(_QWORD *)(v4 + 2184);
    if ( a1 )
    {
      if ( *(_BYTE *)(a1 + 64) )
        MPCCursorManager::UpdateMouseBinding((MPCCursorManager *)a1);
    }
  }
  if ( ((*(_BYTE *)(v4 + 2424) ^ (unsigned __int8)v6) & 2) != 0 && *(_BYTE *)(v4 + 2160) )
  {
    Instance = MPCGamepadInputHelper::GetInstance(a1, a2, a3, a4);
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v8 + 2160) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x425,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v9);
      JUMPOUT(0x18004DEF3LL);
    }
    *((_BYTE *)Instance + 26) = (*(_DWORD *)(v8 + 2424) & 2) != 0;
  }
}
