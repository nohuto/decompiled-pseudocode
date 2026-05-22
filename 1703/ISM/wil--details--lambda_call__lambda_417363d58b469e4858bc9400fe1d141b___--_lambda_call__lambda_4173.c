/*
 * XREFs of wil::details::lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___::_lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x18009B1FC
 * Callers:
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::PrepareParsing_::_1_::dtor$0 @ 0x1800A3ADD (_SpatialInteractionDevices--SpatialInteractionController--PrepareParsing_--_1_--dtor$0.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEAUHSTRING__@@GGGGGE@Z @ 0x180098D64 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEAUHSTRING__@@G.c)
 */

void __fastcall wil::details::lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___::_lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___(
        __int64 a1)
{
  __int64 v1; // rbx
  _WORD *v2; // rdi
  _WORD *v3; // rsi
  _WORD *v4; // r14
  HSTRING *v5; // r15
  int *v6; // rbp
  _DWORD *v7; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v8; // rcx

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    v1 = *(_QWORD *)(a1 + 8);
    v2 = *(_WORD **)(a1 + 40);
    v3 = *(_WORD **)(a1 + 32);
    v4 = *(_WORD **)(a1 + 24);
    v5 = *(HSTRING **)(a1 + 16);
    v6 = *(int **)a1;
    v7 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v7 )
    {
      if ( *v7 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized_(
          v8,
          *v6,
          *(_DWORD *)(v1 + 264),
          *(_DWORD *)(v1 + 268),
          *v5,
          *v4,
          *v3,
          *v2,
          *(_WORD *)(v1 + 104),
          *(_WORD *)(v1 + 106),
          *(_BYTE *)(v1 + 321));
      }
    }
  }
}
