/*
 * XREFs of ?HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180009204
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax

  v3 = 0;
  *a3 = 0;
  v4 = *((_QWORD *)this + 45);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v4 + 128LL))(
           *((_QWORD *)this + 45),
           (char *)this + 132,
           a2,
           a3);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF6Bu);
  }
  return v3;
}
