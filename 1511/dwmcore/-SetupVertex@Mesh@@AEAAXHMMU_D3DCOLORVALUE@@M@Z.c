/*
 * XREFs of ?SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z @ 0x180017A30
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD0CC (-ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall Mesh::SetupVertex(Mesh *this, int a2, double a3, double a4, struct _D3DCOLORVALUE *a5, float a6)
{
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned int v8; // eax
  _QWORD *v9; // r9
  __int64 v10; // r10
  struct _D3DCOLORVALUE v11; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(_QWORD *)this;
  v7 = (__int64)a2 << 6;
  *(_DWORD *)(v7 + v6) = LODWORD(a3);
  *(_DWORD *)(v7 + v6 + 4) = LODWORD(a4);
  *(_DWORD *)(v7 + v6 + 8) = 1065353216;
  *(_QWORD *)(v7 + v6 + 32) = _mm_unpacklo_ps(*(__m128 *)&a3, *(__m128 *)&a4).m128_u64[0];
  *(_DWORD *)(v7 + *(_QWORD *)this + 40) = 0;
  *(struct _D3DCOLORVALUE *)&v11.r = *(struct _D3DCOLORVALUE *)&a5->r;
  v8 = ColorDFromColorF(&v11);
  *(_DWORD *)(v10 + *v9 + 12) = v8;
  *(float *)(v10 + *v9 + 44) = a6;
}
