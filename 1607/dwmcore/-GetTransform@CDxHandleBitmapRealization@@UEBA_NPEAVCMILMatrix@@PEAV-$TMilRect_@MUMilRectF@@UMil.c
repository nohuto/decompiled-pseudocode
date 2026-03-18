/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054B70
 * Callers:
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F918 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FB30 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180098B90 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800549E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180055060 (-GetRotation@CDxHandleBitmapRealization@@UEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A9C0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18005AD00 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x1800C0994 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180161FF0 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v3; // xmm0
  _DWORD *v6; // rdi
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  float v11; // xmm13_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  bool v23; // cc
  float v24; // xmm8_4
  float v25; // xmm7_4
  enum DXGI_MODE_ROTATION (__fastcall *v26)(CDxHandleBitmapRealization *__hidden); // rax
  int v27; // eax
  int v28; // xmm1_4
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  __int64 v32; // rdx
  __int64 v33; // r8
  __int128 v34; // xmm1
  int v35; // eax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  CDxHandleBitmapRealization *v39; // rcx
  void (__fastcall *v40)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  float v41; // xmm2_4
  float v42; // xmm3_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm13_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  CMILMatrix *v57; // rcx
  float v58; // xmm2_4
  CMILMatrix *v59; // rcx
  float v60; // xmm1_4
  _OWORD *v61; // rax
  __int128 v62; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v63; // [rsp+38h] [rbp-D0h]
  __int128 v64; // [rsp+48h] [rbp-C0h]
  _BYTE v65[20]; // [rsp+58h] [rbp-B0h]
  unsigned int v66; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v67; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v68; // [rsp+80h] [rbp-88h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-48h]

  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_WORD *)(a2 + 64) = 32085;
  v69 = v3;
  *(_DWORD *)&v65[16] = 0;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( !*(_QWORD *)(a1 + 304) )
    goto LABEL_19;
  v6 = (_DWORD *)(a1 - 112);
  if ( *(int *)(a1 - 112 + 248) < 2 || (v7 = v6[46], v8 = v6[44], v7 <= v8) || (v9 = v6[47], v10 = v6[45], v9 <= v10) )
  {
    v39 = (CDxHandleBitmapRealization *)(v6 + 28);
    v40 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*((_QWORD *)v6 + 14)
                                                                                              + 24LL);
    if ( v40 == CDxHandleBitmapRealization::GetSize )
      CDxHandleBitmapRealization::GetSize(v39, &v66, &v67);
    else
      v40(v39, &v66, &v67);
    v12 = 0.0;
    v13 = 0.0;
    *(_QWORD *)&v69 = 0LL;
    v15 = (float)(int)v66;
    v16 = (float)(int)v67;
    *((float *)&v69 + 2) = (float)(int)v66;
    *((float *)&v69 + 3) = (float)(int)v67;
  }
  else
  {
    v11 = *(float *)(a2 + 12);
    v12 = (float)v8;
    v13 = (float)v10;
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - 0.0)) & _xmm);
    v15 = (float)v7;
    v16 = (float)v9;
    *(float *)&v69 = (float)v8;
    *((float *)&v69 + 1) = (float)v10;
    LODWORD(v17) = COERCE_UNSIGNED_INT((float)v10) ^ _xmm;
    *((float *)&v69 + 2) = (float)v7;
    LODWORD(v18) = COERCE_UNSIGNED_INT((float)v8) ^ _xmm;
    *((float *)&v69 + 3) = (float)v9;
    if ( v14 >= 0.00012207031
      || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a2 + 28) - 0.0)) & _xmm), v19 >= 0.00012207031)
      || (v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a2 + 44) - 0.0)) & _xmm), v20 >= 0.00012207031)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a2 + 60) - 1.0)) & _xmm) >= 0.00012207031 )
    {
      v41 = *(float *)(a2 + 28);
      v42 = *(float *)(a2 + 44);
      v43 = (float)(v11 * v18) + *(float *)a2;
      v44 = (float)(v11 * v17) + *(float *)(a2 + 4);
      v45 = (float)(v11 * 0.0) + *(float *)(a2 + 8);
      *(float *)a2 = v43;
      *(float *)(a2 + 4) = v44;
      v46 = (float)(v41 * v18) + *(float *)(a2 + 16);
      v47 = (float)(v41 * v17) + *(float *)(a2 + 20);
      *(float *)(a2 + 8) = v45;
      v48 = (float)(v41 * 0.0) + *(float *)(a2 + 24);
      *(float *)(a2 + 16) = v46;
      *(float *)(a2 + 20) = v47;
      v49 = (float)(v42 * v18) + *(float *)(a2 + 32);
      *(float *)(a2 + 24) = v48;
      v50 = (float)(v42 * v17) + *(float *)(a2 + 36);
      v51 = *(float *)(a2 + 60);
      *(float *)(a2 + 32) = v49;
      *(float *)(a2 + 36) = v50;
      v52 = (float)(v51 * v18) + *(float *)(a2 + 48);
      v53 = (float)(v51 * v17) + *(float *)(a2 + 52);
      *(float *)(a2 + 40) = (float)(v42 * 0.0) + *(float *)(a2 + 40);
      v54 = (float)(v51 * 0.0) + *(float *)(a2 + 56);
      *(float *)(a2 + 48) = v52;
      *(float *)(a2 + 52) = v53;
      *(float *)(a2 + 56) = v54;
    }
    else
    {
      v21 = v17 + *(float *)(a2 + 52);
      v22 = *(float *)(a2 + 56) + 0.0;
      *(float *)(a2 + 48) = v18 + *(float *)(a2 + 48);
      *(float *)(a2 + 52) = v21;
      *(float *)(a2 + 56) = v22;
    }
    *(_BYTE *)(a2 + 64) = 84;
  }
  v23 = v6[62] < 2;
  v24 = v16 - v13;
  v25 = v15 - v12;
  v62 = _xmm;
  v63 = _xmm;
  v64 = _xmm;
  *(_OWORD *)v65 = _xmm;
  *(_WORD *)&v65[16] = 32085;
  if ( !v23 )
  {
    v26 = *(enum DXGI_MODE_ROTATION (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)v6 + 104LL);
    v27 = v26 == CDxHandleBitmapRealization::GetRotation
        ? CDxHandleBitmapRealization::GetRotation((CDxHandleBitmapRealization *)v6)
        : v26((CDxHandleBitmapRealization *)v6);
    if ( v27 >= 2 )
    {
      switch ( v27 )
      {
        case 2:
          CMILMatrix::Rotate270((CMILMatrix *)&v62);
          v55 = v25;
          v56 = 0.0;
          break;
        case 3:
          CMILMatrix::Scale((CMILMatrix *)&v62, -1.0, -1.0, 1.0);
          v55 = v24;
          v56 = v25;
          break;
        case 4:
          CMILMatrix::Rotate90((CMILMatrix *)&v62);
          v55 = 0.0;
          v56 = v24;
          break;
        default:
          goto LABEL_15;
      }
      CMILMatrix::Translate((CMILMatrix *)&v62, v56, v55, 0.0);
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)&v62);
    }
  }
LABEL_15:
  v23 = v6[62] < 2;
  v62 = _xmm;
  v63 = _xmm;
  v64 = _xmm;
  *(_OWORD *)v65 = _xmm;
  *(_WORD *)&v65[16] = 32085;
  if ( !v23 )
  {
    v28 = v6[50];
    LODWORD(v62) = v6[49];
    LODWORD(v63) = v6[51];
    DWORD1(v62) = v28;
    v29 = v6[52];
    v64 = _xmm;
    v30 = v6[54];
    DWORD1(v63) = v29;
    v31 = v6[53];
    *(_QWORD *)&v65[12] = 0x40003F800000LL;
    *(_DWORD *)&v65[4] = v30;
    *(_DWORD *)v65 = v31;
    *((_QWORD *)&v62 + 1) = 0LL;
    *((_QWORD *)&v63 + 1) = 0LL;
    *(_DWORD *)&v65[8] = 0;
    if ( !(unsigned __int8)CMILMatrix::IsIdentity<0>(&v62) )
    {
      if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a2, v32, v33) )
      {
        v34 = v63;
        v35 = *(_DWORD *)&v65[16];
        *(_OWORD *)a2 = v62;
        v36 = v64;
        *(_OWORD *)(a2 + 16) = v34;
        v37 = *(_OWORD *)v65;
        *(_OWORD *)(a2 + 32) = v36;
        *(_OWORD *)(a2 + 48) = v37;
        *(_DWORD *)(a2 + 64) = v35;
        goto LABEL_19;
      }
      CMILMatrix::Ensure3DFlags((CMILMatrix *)&v62);
      if ( (v65[16] & 3) != 1 )
      {
        if ( (v65[16] & 0xC) == 4 )
        {
          v57 = (CMILMatrix *)a2;
LABEL_43:
          CMILMatrix::Translate(v57, *(float *)v65, *(float *)&v65[4], *(float *)&v65[8]);
          goto LABEL_19;
        }
        if ( (v65[16] & 0xC0) == 0x40 )
        {
          v58 = *((float *)&v63 + 1);
          v59 = (CMILMatrix *)a2;
          v60 = *(float *)&v62;
LABEL_42:
          CMILMatrix::Scale(v59, v60, v58, *((float *)&v64 + 2));
          goto LABEL_43;
        }
        if ( (v65[17] & 0xC) == 4 )
        {
          CMILMatrix::Rotate90((CMILMatrix *)a2);
          v58 = *((float *)&v62 + 1);
          LODWORD(v60) = v63 ^ _xmm;
          goto LABEL_42;
        }
        v61 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v68, a2, &v62);
        *(_OWORD *)a2 = *v61;
        *(_OWORD *)(a2 + 16) = v61[1];
        *(_OWORD *)(a2 + 32) = v61[2];
        *(_OWORD *)(a2 + 48) = v61[3];
        *(_DWORD *)(a2 + 64) = 0;
      }
    }
  }
LABEL_19:
  if ( a3 )
    *a3 = v69;
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
