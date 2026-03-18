/*
 * XREFs of ?DrawSolidRectangle@CRenderDataBuilder@@UEAAJAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800AFA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawSolidRectangle(
        CRenderDataBuilder *this,
        const struct MilRectF *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  _DWORD *v8; // rcx
  _DWORD *v9; // rbx

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 40, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x151u);
  }
  else
  {
    v8 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    v9 = v8 + 1;
    *v8 = 40;
    memset_0(v8 + 1, 0, 0x24uLL);
    *v9 = 307;
    *(_OWORD *)(v9 + 1) = *(_OWORD *)a2;
    *(struct _D3DCOLORVALUE *)(v9 + 5) = *(const struct _D3DCOLORVALUE *)&a3->r;
    *((_DWORD *)this + 10) += 40;
  }
  return v7;
}
