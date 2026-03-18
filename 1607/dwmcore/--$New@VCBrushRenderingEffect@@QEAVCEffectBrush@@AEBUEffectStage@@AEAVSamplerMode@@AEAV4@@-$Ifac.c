/*
 * XREFs of ??$New@VCBrushRenderingEffect@@QEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@AEAV4@@?$IfaceBuffer@UIRenderingEffect@@$0DA@@@QEAAPEAVCBrushRenderingEffect@@$$QEBQEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@2@Z @ 0x18013AED0
 * Callers:
 *     ?UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18013E1AC (-UpdateDrawListCache@CEffectBrush@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@AEBUEffectStage@@P.c)
 * Callees:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCEffectBrush@@AEBUEffectStage@@VSamplerMode@@2@Z @ 0x1801952BC (--0CBrushRenderingEffect@@QEAA@PEAVCEffectBrush@@AEBUEffectStage@@VSamplerMode@@2@Z.c)
 */

__int64 __fastcall IfaceBuffer<IRenderingEffect,48>::New<CBrushRenderingEffect,CEffectBrush * const,EffectStage const &,SamplerMode &,SamplerMode &>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int16 *a4,
        __int16 *a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int16 v7; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+32h] [rbp-16h]
  __int16 v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+52h] [rbp+Ah]

  result = 0LL;
  if ( a1 )
  {
    v6 = *a2;
    v9 = *a5;
    v10 = *((_BYTE *)a5 + 2);
    v7 = *a4;
    v8 = *((_BYTE *)a4 + 2);
    return CBrushRenderingEffect::CBrushRenderingEffect(a1, v6, a3, &v7, &v9);
  }
  return result;
}
