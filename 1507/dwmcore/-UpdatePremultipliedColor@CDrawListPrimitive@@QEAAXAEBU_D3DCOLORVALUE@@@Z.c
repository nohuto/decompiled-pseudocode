/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800FEA20
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ @ 0x1800DE414 (-EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ.c)
 * Callees:
 *     ?ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x18009A44C (-ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  unsigned int v2; // r10d
  CDrawListPrimitive *i; // r11
  float v5; // xmm2_4
  int v6; // eax
  int v7; // r10d
  __int64 v8; // r9
  struct _D3DCOLORVALUE v9; // [rsp+20h] [rbp-28h]
  struct _D3DCOLORVALUE v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  for ( i = this; v2 < *((_DWORD *)i + 16); *(_DWORD *)(*((_QWORD *)i + 6) + v8 + 12) = v6 )
  {
    v5 = *(float *)(*((_QWORD *)i + 7) + 32LL * v2 + 12);
    v9.r = v5 * a2->r;
    v9.b = v5 * a2->b;
    v9.g = v5 * a2->g;
    v9.a = v5 * a2->a;
    *(struct _D3DCOLORVALUE *)&v10.r = *(struct _D3DCOLORVALUE *)&v9.r;
    v6 = ColorDFromColorF(&v10);
    v2 = v7 + 1;
  }
}
