/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@_N@Z @ 0x18000B968
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@_N@Z @ 0x18000B968 (--$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@_N@Z @ 0x18000B968 (--$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_2a7e5acb7bb4e78ba2706e3012234859_>(
        __int64 a1,
        CTransitionVisualController **a2,
        char a3)
{
  int v3; // r9d
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rsi

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
          CTransitionVisualController::RestoreWindow(*a2, *(struct CWindowData **)(*(_QWORD *)(a1 + 536) + 8 * i), 0);
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_2a7e5acb7bb4e78ba2706e3012234859_>(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
