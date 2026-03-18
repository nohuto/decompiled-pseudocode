/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x18009865C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 120LL, 1LL, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v6 = *(_QWORD *)a1 + 120 * v2;
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v6 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v6 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v6 + 64) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(v6 + 80) = *(_OWORD *)(a2 + 80);
      *(_OWORD *)(v6 + 96) = *(_OWORD *)(a2 + 96);
      *(_QWORD *)(v6 + 112) = *(_QWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
