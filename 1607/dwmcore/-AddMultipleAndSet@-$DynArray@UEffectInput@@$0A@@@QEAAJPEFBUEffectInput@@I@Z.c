/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UEffectInput@@$0A@@@QEAAJPEFBUEffectInput@@I@Z @ 0x18013B204
 * Callers:
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<EffectInput,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x48u, 1, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      v6 = 9 * v2;
      v7 = *(_QWORD *)a1;
      *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 8 * v6 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v7 + 8 * v6 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v7 + 8 * v6 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v7 + 8 * v6 + 64) = *(_QWORD *)(a2 + 64);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  return v5;
}
