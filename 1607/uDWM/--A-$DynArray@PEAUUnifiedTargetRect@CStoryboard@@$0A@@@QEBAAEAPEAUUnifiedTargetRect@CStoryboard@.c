/*
 * XREFs of ??A?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@@I@Z @ 0x180091B44
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001CB0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x180001F58 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
