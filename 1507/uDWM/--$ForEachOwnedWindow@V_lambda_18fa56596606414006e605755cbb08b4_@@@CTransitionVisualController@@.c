/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_18fa56596606414006e605755cbb08b4_@@_N@Z @ 0x18008BA8C
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_18fa56596606414006e605755cbb08b4_@@_N@Z @ 0x18008BA8C (--$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093E90 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_18fa56596606414006e605755cbb08b4_@@_N@Z @ 0x18008BA8C (--$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008D49C (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_18fa56596606414006e605755cbb08b4_>(
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
          CTransitionVisualController::_RestoreWindowVisual(
            (CTransitionVisualController *)a1,
            *(struct CWindowData **)(*(_QWORD *)(a1 + 512) + 8 * i));
          v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_18fa56596606414006e605755cbb08b4_>(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
