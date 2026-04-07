/*
 * XREFs of ?Add@?$DynArray@PEAUUnifiedTargetRect@CStoryboard@@$0A@@@QEAAJAEBQEAUUnifiedTargetRect@CStoryboard@@@Z @ 0x180091CD8
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001CB0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CStoryboard::UnifiedTargetRect *,0>::Add(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 > *(_DWORD *)(a1 + 20) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8u, 1, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 24)) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return v4;
}
