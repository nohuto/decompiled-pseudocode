/*
 * XREFs of ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180003670
 * Callers:
 *     ?GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z @ 0x180003798 (-GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18001E530 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180022B80 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180076BEC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800394B0 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18004A464 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

char __fastcall CVisual::GetCurrentTransform(CVisual *this, struct D2DMatrix *a2)
{
  char v4; // bl
  char v5; // r14
  char v6; // r15
  char v7; // r12
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  double v12; // xmm5_8
  float v13; // xmm1_4
  float v14; // xmm1_4
  double v15; // xmm1_8
  float v16; // xmm0_4
  float v17; // xmm0_4
  double v18; // xmm0_8
  double v19; // xmm1_8
  double v20; // xmm0_8
  double v21; // xmm1_8
  float v22; // [rsp+20h] [rbp-40h] BYREF
  int v23; // [rsp+24h] [rbp-3Ch]
  int v24; // [rsp+28h] [rbp-38h]
  int v25; // [rsp+2Ch] [rbp-34h]
  int v26; // [rsp+30h] [rbp-30h]
  float v27; // [rsp+34h] [rbp-2Ch]
  int v28; // [rsp+38h] [rbp-28h]
  int v29; // [rsp+3Ch] [rbp-24h]
  int v30; // [rsp+40h] [rbp-20h]
  int v31; // [rsp+44h] [rbp-1Ch]
  int v32; // [rsp+48h] [rbp-18h]
  int v33; // [rsp+4Ch] [rbp-14h]
  float v34; // [rsp+50h] [rbp-10h]
  float v35; // [rsp+54h] [rbp-Ch]
  int v36; // [rsp+58h] [rbp-8h]
  int v37; // [rsp+5Ch] [rbp-4h]

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
  {
    (*(void (__fastcall **)(CVisual *, struct D2DMatrix *))(*(_QWORD *)this + 160LL))(this, a2);
    v4 = 1;
  }
  else
  {
    *(_QWORD *)((char *)a2 + 52) = 0LL;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_DWORD *)a2 + 10) = 1065353216;
    *((_DWORD *)a2 + 5) = 1065353216;
    *(_DWORD *)a2 = 1065353216;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)((char *)a2 + 12) = 0LL;
    *(_QWORD *)((char *)a2 + 4) = 0LL;
  }
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 20) - 1.0)) & _xmm);
  if ( v8 > 0.0000011920929
    || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 21) - 1.0)) & _xmm),
        v9 > 0.0000011920929) )
  {
    v5 = 1;
    v4 = 1;
  }
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 19) - 0.0)) & _xmm);
  if ( v10 > 0.0000011920929 )
  {
    v6 = 1;
    v4 = 1;
  }
  if ( v5 || v6 )
  {
    v12 = *((double *)this + 17);
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v12 - 0.0)) & _xmm);
    if ( v13 > 0.0000011920929
      || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 18) - 0.0)) & _xmm),
          v14 > 0.0000011920929) )
    {
      *(_QWORD *)&v15 = *((_QWORD *)this + 18) ^ _xmm;
      v33 = 0;
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v26 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v16 = COERCE_DOUBLE(*(_QWORD *)&v12 ^ _xmm);
      v37 = 1065353216;
      v32 = 1065353216;
      v27 = 1.0;
      v22 = 1.0;
      v36 = 1065353216;
      v34 = v16;
      v17 = v15;
      v35 = v17;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v22);
      v7 = 1;
    }
    if ( v5 )
    {
      v18 = *((double *)this + 20);
      v19 = *((double *)this + 21);
      v36 = 0;
      v35 = 0.0;
      v34 = 0.0;
      v33 = 0;
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v26 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v32 = 1065353216;
      v37 = 1065353216;
      v22 = v18;
      v27 = v19;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v22);
    }
    if ( v6 )
    {
      D2DMatrixRotationZ((struct D2DMatrix *)&v22, *((double *)this + 19) * 0.01745329238474369);
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v22);
    }
    if ( v7 )
    {
      v20 = *((double *)this + 17);
      v21 = *((double *)this + 18);
      v33 = 0;
      v31 = 0;
      v30 = 0;
      v29 = 0;
      v28 = 0;
      v26 = 0;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v37 = 1065353216;
      v32 = 1065353216;
      v27 = 1.0;
      v22 = 1.0;
      v36 = 1065353216;
      v34 = v20;
      v35 = v21;
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)&v22);
    }
  }
  return v4;
}
