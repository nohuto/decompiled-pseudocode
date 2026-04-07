/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@_N@Z @ 0x180001B78
 * Callers:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180001500 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@_N@Z @ 0x180001B78 (--$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@_N@Z @ 0x180001B78 (--$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180001C40 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_>(
        __int64 a1,
        _DWORD **a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 568) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 368);
    if ( !v6 || (*(_BYTE *)(v6 + 264) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 536); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 8 * i);
        if ( (*(_DWORD *)(v8 + 568) & 0xFFF) == 0xFFF )
        {
          if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            ++**a2;
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_>(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
