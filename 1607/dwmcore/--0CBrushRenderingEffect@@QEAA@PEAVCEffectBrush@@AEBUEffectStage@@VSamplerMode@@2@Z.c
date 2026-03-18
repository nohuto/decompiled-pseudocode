/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCEffectBrush@@AEBUEffectStage@@VSamplerMode@@2@Z @ 0x1801952BC
 * Callers:
 *     ??$New@VCBrushRenderingEffect@@QEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@AEAV4@@?$IfaceBuffer@UIRenderingEffect@@$0DA@@@QEAAPEAVCBrushRenderingEffect@@$$QEBQEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@2@Z @ 0x18013AED0 (--$New@VCBrushRenderingEffect@@QEAVCEffectBrush@@AEBUEffectStage@@AEAVSamplerMode@@AEAV4@@-$Ifac.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rbp
  bool v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  *(_QWORD *)(a1 + 24) = 0LL;
  `vector constructor iterator'(
    (TemporaryConfiguration *)(a1 + 32),
    3LL,
    2LL,
    (void (__fastcall *)(TemporaryConfiguration *))SamplerMode::SamplerMode);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = 0LL;
  for ( *(_BYTE *)(a1 + 44) = *(_BYTE *)a3;
        (unsigned int)v9 < *(_DWORD *)(a3 + 4);
        *(_QWORD *)(a1 + 8 * v12 + 16) = v11 | v10 )
  {
    v10 = *(_BYTE *)(a3 + 72 * v9 + 16) && *(_BYTE *)(a3 + 72 * v9 + 74);
    v11 = *(_QWORD *)(a3 + 72 * v9 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = (int)v9;
    v9 = (unsigned int)(v9 + 1);
  }
  *(_WORD *)(a1 + 32) = *(_WORD *)a4;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a4 + 2);
  *(_WORD *)(a1 + 35) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a5 + 2);
  return a1;
}
