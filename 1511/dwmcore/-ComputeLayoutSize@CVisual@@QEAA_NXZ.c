/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180048A8C
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004ECA0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180048CB0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048E40 (-OnClipChanged@CVisual@@AEAAXXZ.c)
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

  v1 = *((float *)this + 27);
  v2 = 0;
  v3 = *((float *)this + 28);
  v4 = this;
  v5 = 0.0;
  v6 = *((float *)this + 34);
  v7 = 0.0;
  v8 = *((_QWORD *)this + 8);
  v9 = *((float *)this + 33);
  if ( v8 )
  {
    v5 = *(float *)(v8 + 132);
    v7 = *(float *)(v8 + 136);
  }
  v10 = v5;
  v11 = (float)(v5 * *((float *)this + 31)) + *((float *)this + 29);
  v12 = (float)(v10 * *((float *)this + 25)) + *((float *)this + 22);
  v13 = (float)(v7 * *((float *)this + 26)) + *((float *)this + 23);
  v14 = (float)(v7 * *((float *)this + 32)) + *((float *)this + 30);
  *((float *)this + 33) = v11;
  *((float *)this + 27) = v12;
  *((float *)this + 28) = v13;
  *((float *)this + 34) = v14;
  if ( v11 < 0.0 )
    *((_DWORD *)this + 33) = 0;
  if ( v14 < 0.0 )
    *((_DWORD *)this + 34) = 0;
  if ( v1 != v12 || (v15 = 0, v3 != v13) )
    v15 = 1;
  if ( v9 == *((float *)this + 33) && v6 == *((float *)this + 34) )
  {
    v16 = 0;
  }
  else
  {
    v18 = *((_QWORD *)this + 44);
    v16 = 1;
    if ( v18 && *(_BYTE *)(v18 + 88) )
      CVisual::OnClipChanged(this);
    CVisual::ClearContentTreeDataCaches(v4);
  }
  if ( v15 || v16 )
    return 1;
  return v2;
}
