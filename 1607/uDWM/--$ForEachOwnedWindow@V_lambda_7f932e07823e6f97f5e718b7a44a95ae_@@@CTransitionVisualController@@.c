/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@_N@Z @ 0x180041F28
 * Callers:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180041EEC (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@_N@Z @ 0x180041F28 (--$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@_N@Z @ 0x180041F28 (--$ForEachOwnedWindow@V_lambda_7f932e07823e6f97f5e718b7a44a95ae_@@@CTransitionVisualController@@.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_7f932e07823e6f97f5e718b7a44a95ae_>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rsi
  struct CTopLevelWindow *v10; // rcx

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 584) & 0x10000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 384);
    if ( !v7 || (*(_BYTE *)(v7 + 264) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 560); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * i);
        if ( (*(_DWORD *)(v9 + 584) & 0xFFF) == 0xFFF )
        {
          v10 = *(struct CTopLevelWindow **)(v9 + 384);
          if ( v10 )
            CTransitionVisualController::_MoveWindowOffscreen(v10, 1);
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_7f932e07823e6f97f5e718b7a44a95ae_>(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
