/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x180135018
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  unsigned int i; // r8d
  __int64 v5; // rdx
  float v6; // xmm3_4
  float v7; // xmm0_4
  unsigned int v8; // ecx
  float v9; // xmm0_4
  unsigned int v10; // ecx
  float v11; // xmm0_4
  float v12; // [rsp+0h] [rbp-18h]

  for ( i = 0;
        i < *((_DWORD *)this + 18);
        *(_DWORD *)(v5 + *((_QWORD *)this + 6) + 12) = ((int)(LODWORD(v12) << 10) >> 11) | (((int)(LODWORD(v11) << 10) >> 3) | v10) & 0xFFFFFF00 )
  {
    v5 = i++;
    v5 *= 32LL;
    v6 = *(float *)(*((_QWORD *)this + 7) + v5 + 12);
    v7 = (float)((float)(v6 * a2->a) * 255.0) + 6291456.25;
    v8 = (LODWORD(v7) << 23) & 0xFF00FFFF;
    v9 = (float)((float)(v6 * a2->b) * 255.0) + 6291456.25;
    v10 = ((LODWORD(v9) << 15) | v8) & 0xFFFF00FF;
    v11 = (float)((float)(v6 * a2->g) * 255.0) + 6291456.25;
    v12 = (float)((float)(v6 * a2->r) * 255.0) + 6291456.25;
  }
}
