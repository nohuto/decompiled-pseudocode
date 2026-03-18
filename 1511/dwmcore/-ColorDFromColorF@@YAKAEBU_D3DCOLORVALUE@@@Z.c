/*
 * XREFs of ?ColorDFromColorF@@YAKAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD0CC
 * Callers:
 *     ?SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z @ 0x180017A30 (-SetupVertex@Mesh@@AEAAXHMMU_D3DCOLORVALUE@@M@Z.c)
 *     ?CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV?$ArrayRef@M@@2@Z @ 0x18001F720 (-CreateRectangleMeshWorker@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@KHV-$ArrayRef@M@@2@Z.c)
 *     ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x180117800 (-UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ColorDFromColorF(const struct _D3DCOLORVALUE *a1)
{
  float v1; // xmm0_4
  unsigned int v2; // edx
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v6; // [rsp+8h] [rbp+8h]
  float v7; // [rsp+20h] [rbp+20h]

  v1 = (float)(a1->a * 255.0) + 6291456.25;
  v2 = (LODWORD(v1) & 0xFFFFFFFE) << 8;
  v3 = (float)(a1->b * 255.0) + 6291456.25;
  v7 = v3;
  v4 = (float)(a1->g * 255.0) + 6291456.25;
  v6 = (float)(a1->r * 255.0) + 6291456.25;
  return ((LODWORD(v7) & 0xFFFFFFFE | v2) << 15) | ((int)(((int)(LODWORD(v6) << 10) >> 8) | ((LODWORD(v4) & 0xFFFFFFFE) << 10)) >> 3);
}
