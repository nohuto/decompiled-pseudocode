/*
 * XREFs of ??$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_4698877d0d6a676928077337e8636fe2_@@_N@Z @ 0x180001A0C
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180001814 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ??$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_4698877d0d6a676928077337e8636fe2_@@_N@Z @ 0x180001A0C (--$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_4698877d0d6a676928077337e8636fe2_@@_N@Z @ 0x180001A0C (--$ForEachOwnedWindow@V_lambda_4698877d0d6a676928077337e8636fe2_@@@CTransitionVisualController@@.c)
 *     _lambda_4698877d0d6a676928077337e8636fe2_::operator() @ 0x180001AD4 (_lambda_4698877d0d6a676928077337e8636fe2_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow<_lambda_4698877d0d6a676928077337e8636fe2_>(
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
          v3 = lambda_4698877d0d6a676928077337e8636fe2_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 512) + 8 * i));
          if ( v3 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow<_lambda_4698877d0d6a676928077337e8636fe2_>(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
