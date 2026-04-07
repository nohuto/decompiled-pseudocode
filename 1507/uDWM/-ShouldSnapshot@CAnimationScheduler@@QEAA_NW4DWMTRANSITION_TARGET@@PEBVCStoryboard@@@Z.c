/*
 * XREFs of ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000B6E8
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18000C710 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F944 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
