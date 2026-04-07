/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x180007C68
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x180007C68 (--$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x180007C68 (--$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_49101be3cc2274a1c9941772b9f9e2bf_>(
        __int64 a1,
        CTransitionVisualController **a2,
        char a3)
{
  int v3; // r9d
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 576) & 0x10000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 384);
    if ( !v7 || (*(_BYTE *)(v7 + 264) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 552); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * i);
        if ( (*(_DWORD *)(v9 + 576) & 0xFFF) == 0xFFF )
        {
          CTransitionVisualController::RestoreWindow(*a2, *(struct CWindowData **)(*(_QWORD *)(a1 + 528) + 8 * i), 0);
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_49101be3cc2274a1c9941772b9f9e2bf_>(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
