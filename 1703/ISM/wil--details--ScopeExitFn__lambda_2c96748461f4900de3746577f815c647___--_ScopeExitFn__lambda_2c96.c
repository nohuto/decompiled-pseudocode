/*
 * XREFs of wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___ @ 0x18005063C
 * Callers:
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18005036C (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 *     _MPCCursorManager::ProcessProviderHitTest_::_1_::dtor$0 @ 0x1800A1A10 (_MPCCursorManager--ProcessProviderHitTest_--_1_--dtor$0.c)
 * Callees:
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x1800504D4 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

_BYTE *__fastcall wil::details::ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___::_ScopeExitFn__lambda_2c96748461f4900de3746577f815c647___(
        __int64 a1)
{
  char v1; // di
  int v3; // ecx
  _BYTE *result; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    if ( **(_BYTE **)(a1 + 32) )
    {
      *(_OWORD *)*(_QWORD *)a1 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 272LL);
      *(_OWORD *)(*(_QWORD *)a1 + 16LL) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 12LL);
      *(_DWORD *)(*(_QWORD *)a1 + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 268LL);
    }
    else
    {
      *(_OWORD *)*(_QWORD *)a1 = 0uLL;
      *(_OWORD *)(*(_QWORD *)a1 + 16LL) = 0uLL;
      *(_DWORD *)(*(_QWORD *)a1 + 32LL) = 0;
    }
    MPCCursorManager::UpdateCursorVisibility(*(MPCCursorManager **)a1, **(_BYTE **)(a1 + 16), **(_BYTE **)(a1 + 24), 0);
    v3 = *(_DWORD *)(*(_QWORD *)a1 + 60LL);
    if ( v3 == 1 || (v3 & 0x1C) != 0x18 )
      v1 = 1;
    result = *(_BYTE **)(a1 + 8);
    *result = v1 ^ 1;
  }
  return result;
}
