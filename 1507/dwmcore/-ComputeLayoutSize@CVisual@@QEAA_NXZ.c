/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180036070
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18003C0C0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x1800362A0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180036410 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 */

char __fastcall CVisual::ComputeLayoutSize(CVisual *this)
{
  float v1; // xmm5_4
  char v2; // bl
  float v3; // xmm6_4
  CVisual *v4; // rdx
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm8_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm0_4
  char v15; // si
  char v16; // di
  __int64 v18; // rax

  v1 = *((float *)this + 31);
  v2 = 0;
  v3 = *((float *)this + 32);
  v4 = this;
  v5 = 0.0;
  v6 = *((float *)this + 38);
  v7 = 0.0;
  v8 = *((_QWORD *)this + 10);
  v9 = *((float *)this + 37);
  if ( v8 )
  {
    v5 = *(float *)(v8 + 148);
    v7 = *(float *)(v8 + 152);
  }
  v10 = v5;
  v11 = (float)(v5 * *((float *)this + 35)) + *((float *)this + 33);
  v12 = (float)(v10 * *((float *)this + 29)) + *((float *)this + 26);
  v13 = (float)(v7 * *((float *)this + 30)) + *((float *)this + 27);
  v14 = (float)(v7 * *((float *)this + 36)) + *((float *)this + 34);
  *((float *)this + 37) = v11;
  *((float *)this + 31) = v12;
  *((float *)this + 32) = v13;
  *((float *)this + 38) = v14;
  if ( v11 < 0.0 )
    *((_DWORD *)this + 37) = 0;
  if ( v14 < 0.0 )
    *((_DWORD *)this + 38) = 0;
  if ( v1 != v12 || (v15 = 0, v3 != v13) )
    v15 = 1;
  if ( v9 == *((float *)this + 37) && v6 == *((float *)this + 38) )
  {
    v16 = 0;
  }
  else
  {
    v18 = *((_QWORD *)this + 46);
    v16 = 1;
    if ( v18 && *(_BYTE *)(v18 + 72) )
      CVisual::OnClipChanged(this);
    CVisual::ClearContentTreeDataCaches(v4);
  }
  if ( v15 || v16 )
    return 1;
  return v2;
}
