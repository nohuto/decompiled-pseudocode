/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_678e02ded86544c2cd395b42c4824875_@@_N@Z @ 0x18008BB3C
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E7E8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_678e02ded86544c2cd395b42c4824875_@@_N@Z @ 0x18008BB3C (--$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_678e02ded86544c2cd395b42c4824875_@@_N@Z @ 0x18008BB3C (--$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@.c)
 *     _lambda_678e02ded86544c2cd395b42c4824875_::operator() @ 0x18008BBF4 (_lambda_678e02ded86544c2cd395b42c4824875_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_678e02ded86544c2cd395b42c4824875_>(
        __int64 a1,
        __int64 a2,
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
          v3 = lambda_678e02ded86544c2cd395b42c4824875_::operator()(a1, *(_QWORD *)(*(_QWORD *)(a1 + 512) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_678e02ded86544c2cd395b42c4824875_>(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
