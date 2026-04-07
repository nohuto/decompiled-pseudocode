/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@_N@Z @ 0x180011650
 * Callers:
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000A440 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@_N@Z @ 0x180011650 (--$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18001108C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@_N@Z @ 0x180011650 (--$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // ebx
  __int64 v5; // rax
  __int64 i; // rsi
  __int64 v7; // rbp
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 576) & 0x10000000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 384);
    if ( !v5 || (*(_BYTE *)(v5 + 264) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 552); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * i);
        if ( (*(_DWORD *)(v7 + 576) & 0xFFF) == 0xFFF )
        {
          v3 = 0;
          if ( *(_QWORD *)(v7 + 384) )
          {
            if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v7 + 40)) )
              v3 = CVisual::RenderRecursive(*(CVisual **)(v7 + 384));
            a2 = v9;
          }
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_>(v7, a2, 0LL);
        }
        a2 = v9;
      }
    }
  }
  return (unsigned int)v3;
}
