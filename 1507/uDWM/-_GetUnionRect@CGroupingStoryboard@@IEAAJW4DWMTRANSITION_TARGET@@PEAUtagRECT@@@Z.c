/*
 * XREFs of ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x18009316C
 * Callers:
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180093594 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180093908 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_GetUnionRect(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v5; // esi
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = -2147024809;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2);
  *a3 = 0LL;
  v7 = 0LL;
  a3[1] = 0LL;
  do
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 144) )
      break;
    v8 = *(_QWORD *)(a1 + 120);
    if ( *(_DWORD *)(v8 + 24 * v7) == v6 )
    {
      v5 = 0;
      *(_OWORD *)a3 = *(_OWORD *)(v8 + 24 * v7 + 4);
    }
    v7 = (unsigned int)(v7 + 1);
  }
  while ( v5 < 0 );
  return (unsigned int)v5;
}
