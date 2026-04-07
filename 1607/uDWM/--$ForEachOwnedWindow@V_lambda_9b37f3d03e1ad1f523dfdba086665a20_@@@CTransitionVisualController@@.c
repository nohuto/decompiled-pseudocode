/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@_N@Z @ 0x180008EAC
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@_N@Z @ 0x180008EAC (--$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E1B4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@_N@Z @ 0x180008EAC (--$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@.c)
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180008F74 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_9b37f3d03e1ad1f523dfdba086665a20_>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi
  int v9; // eax

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
          v9 = lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator()(a1, *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8 * i));
          v3 = v9;
          if ( v9 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_9b37f3d03e1ad1f523dfdba086665a20_>(
                   v8,
                   a2,
                   0LL,
                   (unsigned int)v9);
        }
      }
    }
  }
  return (unsigned int)v3;
}
