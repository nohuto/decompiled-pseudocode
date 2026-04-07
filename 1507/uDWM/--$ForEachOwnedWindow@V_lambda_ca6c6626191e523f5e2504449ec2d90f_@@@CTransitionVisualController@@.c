/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ca6c6626191e523f5e2504449ec2d90f_@@_N@Z @ 0x1800095FC
 * Callers:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800095C8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ca6c6626191e523f5e2504449ec2d90f_@@_N@Z @ 0x1800095FC (--$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ca6c6626191e523f5e2504449ec2d90f_@@_N@Z @ 0x1800095FC (--$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_ca6c6626191e523f5e2504449ec2d90f_>(
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
  if ( !a3 || (*(_DWORD *)(a1 + 568) & 0x10000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 368);
    if ( !v7 || (*(_BYTE *)(v7 + 264) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 536); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 8 * i);
        if ( (*(_DWORD *)(v9 + 568) & 0xFFF) == 0xFFF )
        {
          v10 = *(struct CTopLevelWindow **)(v9 + 368);
          if ( v10 )
            CTransitionVisualController::_MoveWindowOffscreen(v10, 1);
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_ca6c6626191e523f5e2504449ec2d90f_>(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
