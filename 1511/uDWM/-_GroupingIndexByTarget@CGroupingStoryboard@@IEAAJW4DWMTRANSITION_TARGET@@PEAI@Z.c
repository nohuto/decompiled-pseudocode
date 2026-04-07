/*
 * XREFs of ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x180001FAC
 * Callers:
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x180002190 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800021D4 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180002238 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096330 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_GroupingIndexByTarget(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  int v6; // r10d
  unsigned int v7; // r8d
  unsigned int v8; // edx

  *a3 = *(_DWORD *)(a1 + 144);
  v5 = -2147024809;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, a2);
  if ( v6 != 4095 )
  {
    v7 = *(_DWORD *)(a1 + 144);
    v8 = 0;
    if ( v7 )
    {
      while ( *(_DWORD *)(56LL * v8 + *(_QWORD *)(a1 + 120)) != v6 )
      {
        if ( ++v8 >= v7 )
          return v5;
      }
      *a3 = v8;
      return 0;
    }
  }
  return v5;
}
