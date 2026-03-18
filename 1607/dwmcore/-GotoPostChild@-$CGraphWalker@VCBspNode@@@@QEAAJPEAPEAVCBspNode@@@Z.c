/*
 * XREFs of ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x18018E06C
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x18018DDB8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCBspNode@@@@@Z @ 0x18018E2C8 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGrap.c)
 */

__int64 __fastcall CGraphWalker<CBspNode>::GotoPostChild(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  *a2 = 0LL;
  if ( *(_DWORD *)(a1 + 28) )
    v6 = *(_QWORD *)(v2 + 24);
  else
    v6 = *(_QWORD *)(v2 + 16);
  if ( v6 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_DWORD *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Push(a1 + 32, &v10);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x15Du);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v8;
      *(_QWORD *)(a1 + 8) = v6;
      *a2 = v6;
    }
  }
  return v3;
}
