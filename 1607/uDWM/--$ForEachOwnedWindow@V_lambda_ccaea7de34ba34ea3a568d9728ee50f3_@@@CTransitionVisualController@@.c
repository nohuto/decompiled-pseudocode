/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@_N@Z @ 0x180005308
 * Callers:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000516C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@_N@Z @ 0x180005308 (--$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@_N@Z @ 0x180005308 (--$ForEachOwnedWindow@V_lambda_ccaea7de34ba34ea3a568d9728ee50f3_@@@CTransitionVisualController@@.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800053D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_ccaea7de34ba34ea3a568d9728ee50f3_>(
        __int64 a1,
        _DWORD **a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 584) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 384);
    if ( !v6 || (*(_BYTE *)(v6 + 264) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 560); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * i);
        if ( (*(_DWORD *)(v8 + 584) & 0xFFF) == 0xFFF )
        {
          if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            ++**a2;
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_ccaea7de34ba34ea3a568d9728ee50f3_>(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
