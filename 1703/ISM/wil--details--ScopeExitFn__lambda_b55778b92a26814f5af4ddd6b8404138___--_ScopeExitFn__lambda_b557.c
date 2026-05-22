/*
 * XREFs of wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x18009B164
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 *     _SpatialInteractionDevices::SpatialInteractionController::SetHapticsFeedback_::_1_::dtor$0 @ 0x1800A3AE9 (_SpatialInteractionDevices--SpatialInteractionController--SetHapticsFeedback_--_1_--dtor$0.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SetHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x180099128 (-SetHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKGEG@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___(
        __int64 a1)
{
  _WORD *v1; // rdi
  char *v2; // rsi
  _WORD *v3; // r14
  __int64 v4; // rbx
  int *v5; // r15
  _DWORD *v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    v1 = *(_WORD **)(a1 + 32);
    v2 = *(char **)(a1 + 24);
    v3 = *(_WORD **)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(int **)a1;
    v6 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::SetHapticsFeedback_(
          v7,
          *v5,
          *(_DWORD *)(v4 + 264),
          *(_DWORD *)(v4 + 268),
          *v3,
          *v2,
          *v1);
      }
    }
  }
}
