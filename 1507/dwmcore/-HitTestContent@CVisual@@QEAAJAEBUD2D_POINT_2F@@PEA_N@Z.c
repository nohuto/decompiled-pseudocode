/*
 * XREFs of ?HitTestContent@CVisual@@QEAAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000BB10
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000A900 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax

  v3 = 0;
  *a3 = 0;
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v4 + 120LL))(
           *((_QWORD *)this + 47),
           (char *)this + 148,
           a2,
           a3);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1005u);
  }
  return v3;
}
