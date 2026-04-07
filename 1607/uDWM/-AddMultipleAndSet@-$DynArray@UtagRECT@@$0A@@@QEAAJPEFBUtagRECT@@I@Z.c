/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x1800017BC
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001CB0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<tagRECT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 <= *(_DWORD *)(a1 + 20) )
    {
      *(_OWORD *)(*(_QWORD *)a1 + 16 * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
    else
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, 1LL, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
    }
  }
  return v4;
}
