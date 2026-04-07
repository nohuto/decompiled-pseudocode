/*
 * XREFs of ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x18009361C
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180093908 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_NumberOfWindowsInUnionRect(__int64 a1, unsigned int a2)
{
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // r9d
  unsigned int v6; // edx
  __int64 v7; // r8

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2);
  v5 = *(_DWORD *)(a1 + 144);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    while ( *(_DWORD *)(v7 + 24LL * v6) != v4 )
    {
      if ( ++v6 >= v5 )
        return v3;
    }
    return *(unsigned int *)(v7 + 24LL * v6 + 20);
  }
  return v3;
}
