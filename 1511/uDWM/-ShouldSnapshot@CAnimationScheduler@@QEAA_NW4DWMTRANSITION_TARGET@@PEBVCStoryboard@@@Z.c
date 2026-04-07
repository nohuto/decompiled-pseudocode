/*
 * XREFs of ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180005B1C
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180007384 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003915C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall CAnimationScheduler::ShouldSnapshot(__int64 a1, __int16 a2, _DWORD *a3)
{
  char v3; // si
  unsigned int v7; // ebp
  _DWORD *v8; // r14

  v3 = 0;
  v7 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8LL * v7);
      if ( a3 != v8
        && v8[6] != 4
        && ((*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v8 + 96LL))(v8, a2 & 0xFFF) & 1) != 0 )
      {
        break;
      }
      if ( ++v7 >= *(_DWORD *)(a1 + 40) )
        return v3;
    }
    return 1;
  }
  return v3;
}
