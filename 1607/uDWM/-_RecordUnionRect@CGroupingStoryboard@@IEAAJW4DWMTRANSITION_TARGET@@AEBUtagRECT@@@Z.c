/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001CB0
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001E70 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001748 (--0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x1800017BC (-AddMultipleAndSet@-$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x180001A18 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??A?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@@I@Z @ 0x180091B44 (--A-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEBAAEAPEAUUnifiedTargetRect@CStoryboard@.c)
 *     ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x180091CAC (--_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z.c)
 *     ?Add@?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAAJAEBQEAUUnifiedTargetRect@CStoryboard@@@Z @ 0x180091CD8 (-Add@-$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAAJAEBQEAUUnifiedTargetRect@CStoryboa.c)
 *     ??2@YAPEAX_K@Z @ 0x18009AA50 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(__int64 a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  __int16 v6; // di
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  void *v15; // rax
  unsigned int v16; // edx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  PVOID Buffer; // [rsp+40h] [rbp+8h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  LODWORD(Buffer) = 0;
  v6 = v5;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, v5, &Buffer) < 0 )
  {
    v15 = operator new(0x38uLL);
    if ( v15 )
      v15 = (void *)CStoryboard::UnifiedTargetRect::UnifiedTargetRect((__int64)v15, v6, a3);
    Buffer = v15;
    if ( v15 )
    {
      v14 = DynArray<CStoryboard::UnifiedTargetRect *,0>::Add(a1 + 120, &Buffer);
      if ( (v14 & 0x80000000) == 0 )
        return v14;
      if ( Buffer )
        CStoryboard::UnifiedTargetRect::`scalar deleting destructor'(Buffer, v16);
      v18 = 2048;
    }
    else
    {
      v14 = -2147024890;
      v18 = 2040;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v14, v18);
    return v14;
  }
  v7 = a1 + 120;
  v8 = (unsigned int)Buffer;
  DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[](v7, (unsigned int)Buffer);
  v10 = DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[](v9, v8);
  UnionRect((LPRECT)(*(_QWORD *)v10 + 4LL), a3, (const RECT *)(v11 + 4));
  v12 = (_QWORD *)DynArray<CStoryboard::UnifiedTargetRect *,0>::operator[](v7, v8);
  v13 = DynArray<tagRECT,0>::AddMultipleAndSet(*v12 + 24LL, a3);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x7E9u);
  return v14;
}
