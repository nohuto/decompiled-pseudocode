/*
 * XREFs of ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18018DDB8
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18018DDB8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18018DEF8 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18018DDB8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?GotoParent@?$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z @ 0x18018E008 (-GotoParent@-$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18018E06C (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18018E114 (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 */

__int64 CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(__int64 a1, __int64 a2, ...)
{
  int v2; // ebp
  BOOL v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+20h]
  __int64 v18; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v14 = a2;
  v2 = v18;
  v4 = v18;
  if ( !*(_BYTE *)(a2 + 96) )
    v4 = v18 == 0;
  v15 = 0LL;
  v13 = 0LL;
  *(_DWORD *)(a1 + 28) = v4;
  v5 = CGraphWalker<CBspNode>::GotoPreChild(a1, (__int64 *)va);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4Bu);
    return v6;
  }
  if ( v15 )
  {
    v7 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v15, v14, v17, v2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4Fu);
      return v6;
    }
    CGraphWalker<CBspNode>::GotoParent(a1, (__int64 *)va);
    *(_DWORD *)(a1 + 28) = v4;
  }
  v8 = v17;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5Eu);
  }
  else
  {
    v10 = CGraphWalker<CBspNode>::GotoPostChild(a1, &v13);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x60u);
    }
    else if ( v13 )
    {
      v11 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v13, v14, v8, v2);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x64u);
      else
        CGraphWalker<CBspNode>::GotoParent(a1, (__int64 *)va);
    }
  }
  return v6;
}
