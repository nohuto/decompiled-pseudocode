/*
 * XREFs of ?UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000FE44
 * Callers:
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18000F9B4 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18000FB10 (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 * Callees:
 *     ?SetD2DPrimitiveColor@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorPrimitiveProperties@@AEBU_D3DCOLORVALUE@@@Z @ 0x180010140 (-SetD2DPrimitiveColor@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorPrimitiveProperties@@AEBU_D3DC.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DPrimitiveProperties::UpdateContextColor(
        CD2DPrimitiveProperties *this,
        const struct _D3DCOLORVALUE *a2)
{
  __int64 (__fastcall *v2)(CD2DContext *__hidden, struct ID2D1PrivateCompositorPrimitiveProperties *, const struct _D3DCOLORVALUE *); // rdi
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *(__int64 (__fastcall **)(CD2DContext *__hidden, struct ID2D1PrivateCompositorPrimitiveProperties *, const struct _D3DCOLORVALUE *))(**(_QWORD **)(*((_QWORD *)this + 3) + 16LL) + 256LL);
  if ( v2 == CD2DContext::SetD2DPrimitiveColor )
    v3 = CD2DContext::SetD2DPrimitiveColor(
           *(CD2DContext **)(*((_QWORD *)this + 3) + 16LL),
           *((struct ID2D1PrivateCompositorPrimitiveProperties **)this + 13),
           a2);
  else
    v3 = v2(
           *(CD2DContext **)(*((_QWORD *)this + 3) + 16LL),
           *((struct ID2D1PrivateCompositorPrimitiveProperties **)this + 13),
           a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x30u);
  return v4;
}
