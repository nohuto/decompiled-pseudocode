/*
 * XREFs of ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x180123E14
 * Callers:
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x180169CFC (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::GetCustomBlurEffectNoRef(CDrawingContext *this, struct CCustomBlur **a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  struct CCustomBlur **v5; // rdi
  int v6; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 57) + 176LL))(*((_QWORD *)this + 57));
  v4 = 0;
  v5 = (struct CCustomBlur **)(v3 + 168);
  if ( *(_QWORD *)(v3 + 168)
    || (v6 = CCustomBlur::Create(*(struct ID2D1DeviceContext **)(v3 + 40), (struct CCustomBlur **)(v3 + 168)),
        v4 = v6,
        v6 >= 0) )
  {
    *a2 = *v5;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x982u);
  }
  return v4;
}
