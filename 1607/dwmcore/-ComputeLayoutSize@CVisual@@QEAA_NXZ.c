/*
 * XREFs of ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180050B44
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x180113538 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18004FB1C (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18004FB44 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180050DE0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180051090 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 */

char __fastcall CVisual::ComputeLayoutSize(CVisual *this)
{
  char v1; // bl
  float v2; // xmm7_4
  float v3; // xmm3_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  __int64 v6; // rax
  float v7; // xmm10_4
  float v8; // xmm4_4
  float *v9; // r11
  float v10; // xmm6_4
  __int64 v11; // r11
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  char v16; // si
  char v17; // di
  __int64 v19; // rax
  float v20; // [rsp+80h] [rbp+8h] BYREF
  float v21; // [rsp+84h] [rbp+Ch]

  v1 = 0;
  v2 = *((float *)this + 44);
  v3 = 0.0;
  v4 = *((float *)this + 45);
  v5 = *((float *)this + 49);
  v6 = *((_QWORD *)this + 18);
  v7 = *((float *)this + 48);
  if ( v6 )
    v3 = *(float *)(v6 + 192);
  CVisual::GetRelativeOffsetInternal(this, (__int64)&v20);
  v10 = (float)(v21 * v8) + v9[42];
  v9[44] = (float)(v20 * v3) + v9[41];
  v9[45] = v10;
  CVisual::GetRelativeLayoutSizeInternal((CVisual *)v9, (__int64)&v20);
  v14 = (float)(v20 * v3) + *(float *)(v11 + 184);
  v15 = (float)(v21 * v13) + *(float *)(v11 + 188);
  *(float *)(v11 + 196) = v15;
  *(float *)(v11 + 192) = v14;
  if ( v14 < 0.0 )
    *(_DWORD *)(v11 + 192) = 0;
  if ( v15 < 0.0 )
    *(_DWORD *)(v11 + 196) = 0;
  if ( v2 != v12 || (v16 = 0, v4 != v10) )
    v16 = 1;
  if ( v7 == *(float *)(v11 + 192) && v5 == *(float *)(v11 + 196) )
  {
    v17 = 0;
  }
  else
  {
    v19 = *(_QWORD *)(v11 + 296);
    v17 = 1;
    if ( v19 && *(_BYTE *)(v19 + 168) )
      CVisual::OnClipChanged((CVisual *)v11);
    CVisual::ClearContentTreeDataCaches((CVisual *)v11);
  }
  if ( v16 || v17 )
    return 1;
  return v1;
}
