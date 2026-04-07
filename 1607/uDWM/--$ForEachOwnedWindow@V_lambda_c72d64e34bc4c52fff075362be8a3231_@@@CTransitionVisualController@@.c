/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_c72d64e34bc4c52fff075362be8a3231_@@_N@Z @ 0x18008E320
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_c72d64e34bc4c52fff075362be8a3231_@@_N@Z @ 0x18008E320 (--$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800945D0 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_c72d64e34bc4c52fff075362be8a3231_@@_N@Z @ 0x18008E320 (--$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008F4CC (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_c72d64e34bc4c52fff075362be8a3231_>(
        __int64 a1,
        __int64 a2,
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
          CTransitionVisualController::_RestoreWindowVisual(
            (CTransitionVisualController *)a1,
            *(struct CWindowData **)(*(_QWORD *)(a1 + 536) + 8 * i));
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_c72d64e34bc4c52fff075362be8a3231_>(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
