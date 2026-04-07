/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180034A00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180036340 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     cosf_0 @ 0x18004FF1E (cosf_0.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     sinf_0 @ 0x18004FF72 (sinf_0.c)
 */

int __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  float v3; // xmm8_4
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm15_4
  __int64 v7; // rax
  float v8; // xmm0_4
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  float v12; // xmm12_4
  __int64 v13; // rax
  float v14; // xmm13_4
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void (__fastcall *v18)(CVisual *, int); // rdi
  int v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm11_4
  float v23; // xmm10_4
  float v24; // xmm12_4
  float v25; // xmm9_4
  float v26; // xmm8_4
  float v27; // xmm13_4
  float v28; // xmm12_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm14_4
  float v32; // xmm13_4
  float v33; // xmm8_4
  float v34; // xmm14_4
  float v35; // xmm6_4
  float v36; // xmm2_4
  float v37; // xmm7_4
  float v38; // xmm4_4
  float v39; // xmm12_4
  float v40; // xmm6_4
  float v41; // xmm3_4
  float v42; // xmm13_4
  float v43; // xmm8_4
  float v44; // xmm5_4
  float v45; // xmm14_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  _DWORD *v49; // rdx
  int v50; // ecx
  int v51; // r8d
  int v52; // eax
  float v53; // xmm6_4
  int v54; // edx
  int v55; // r8d
  float v56; // xmm7_4
  float v57; // xmm5_4
  float v58; // xmm5_4
  float v59; // xmm4_4
  float v60; // xmm4_4
  float v61; // xmm15_4
  __int64 v62; // r8
  int result; // eax
  int v64; // ebx
  __int64 v65; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v66; // [rsp+3Ch] [rbp-CCh]
  __int64 v67; // [rsp+44h] [rbp-C4h]
  float v68; // [rsp+4Ch] [rbp-BCh]
  __int64 v69; // [rsp+50h] [rbp-B8h]
  __int64 v70; // [rsp+58h] [rbp-B0h]
  _BYTE v71[24]; // [rsp+60h] [rbp-A8h]
  float v72; // [rsp+78h] [rbp-90h]
  float v73; // [rsp+7Ch] [rbp-8Ch]
  float v74; // [rsp+80h] [rbp-88h]
  float v75; // [rsp+84h] [rbp-84h]
  float v76; // [rsp+88h] [rbp-80h]
  int v77; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+94h] [rbp-74h]
  int v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+9Ch] [rbp-6Ch]
  float v81; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v82; // [rsp+ACh] [rbp-5Ch]
  __int64 v83; // [rsp+B4h] [rbp-54h]
  float v84; // [rsp+BCh] [rbp-4Ch]
  __int64 v85; // [rsp+C0h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-40h]
  __int64 v87; // [rsp+D0h] [rbp-38h]
  float v88; // [rsp+D8h] [rbp-30h]
  float v89; // [rsp+DCh] [rbp-2Ch]
  int v90; // [rsp+E0h] [rbp-28h]
  int v91; // [rsp+E4h] [rbp-24h]
  int v92; // [rsp+E8h] [rbp-20h] BYREF
  int v93; // [rsp+ECh] [rbp-1Ch] BYREF
  double v94; // [rsp+F0h] [rbp-18h]
  double v95; // [rsp+F8h] [rbp-10h]
  double v96; // [rsp+100h] [rbp-8h]
  double v97; // [rsp+108h] [rbp+0h]
  double v98; // [rsp+110h] [rbp+8h]
  double v99; // [rsp+118h] [rbp+10h]

  v1 = *((_QWORD *)this + 45);
  v3 = 0.0;
  if ( v1 )
    v73 = *(double *)(v1 + 48);
  else
    v73 = 0.0;
  v4 = *((_QWORD *)this + 46);
  if ( v4 )
    v72 = *(double *)(v4 + 48);
  else
    v72 = 0.0;
  v5 = *((_QWORD *)this + 47);
  if ( v5 )
    v6 = *(double *)(v5 + 48);
  else
    v6 = 0.0;
  v7 = *((_QWORD *)this + 51);
  v8 = FLOAT_1_0;
  if ( v7 )
    v74 = *(double *)(v7 + 48);
  else
    v74 = FLOAT_1_0;
  v9 = *((_QWORD *)this + 52);
  if ( v9 )
    v75 = *(double *)(v9 + 48);
  else
    v75 = FLOAT_1_0;
  v10 = *((_QWORD *)this + 53);
  if ( v10 )
    v76 = *(double *)(v10 + 48);
  else
    v76 = FLOAT_1_0;
  v11 = *((_QWORD *)this + 48);
  if ( v11 )
    v12 = *(double *)(v11 + 48);
  else
    v12 = 0.0;
  v13 = *((_QWORD *)this + 49);
  if ( v13 )
    v14 = *(double *)(v13 + 48);
  else
    v14 = 0.0;
  v15 = *((_QWORD *)this + 50);
  if ( v15 )
    v3 = *(double *)(v15 + 48);
  v16 = *((_QWORD *)this + 54);
  if ( v16 )
    v8 = *(double *)(v16 + 48);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 22) - v8)) & _xmm) > 0.0000011920929 )
  {
    v17 = *(_QWORD *)this;
    *((double *)this + 22) = v8;
    v18 = *(void (__fastcall **)(CVisual *, int))(v17 + 24);
    if ( v18 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 32);
    else
      v18(this, 32);
  }
  v19 = *((_DWORD *)this + 112) ^ _xmm;
  LODWORD(v88) = *((_DWORD *)this + 110) ^ _xmm;
  LODWORD(v20) = *((_DWORD *)this + 111) ^ _xmm;
  v87 = 1065353216LL;
  v89 = v20;
  v90 = v19;
  v21 = (float)(v3 * 0.017453292) * 0.5;
  v86 = 0LL;
  v85 = 0LL;
  v83 = 0LL;
  v82 = 0LL;
  v91 = 1065353216;
  v84 = 1.0;
  v81 = 1.0;
  v22 = sinf_0(v21);
  v23 = cosf_0(v21);
  v24 = (float)(v12 * 0.017453292) * 0.5;
  v25 = sinf_0(v24);
  v26 = cosf_0(v24);
  v27 = (float)(v14 * 0.017453292) * 0.5;
  v28 = sinf_0(v27);
  v29 = cosf_0(v27);
  v30 = v29 * v26;
  v31 = v28 * v26;
  v32 = (float)((float)(v29 * v25) * v23) + (float)((float)(v28 * v26) * v22);
  v33 = (float)((float)(v29 * v26) * v22) - (float)((float)(v28 * v25) * v23);
  v34 = (float)(v31 * v23) - (float)((float)(v29 * v25) * v22);
  v35 = (float)((float)(v28 * v25) * v22) + (float)(v30 * v23);
  v36 = v33 + v33;
  v37 = v35 * (float)(v32 + v32);
  v38 = v32 * (float)(v32 + v32);
  v39 = v35 * (float)(v33 + v33);
  v40 = v35 * (float)(v34 + v34);
  v41 = v32 * (float)(v34 + v34);
  v42 = v32 * (float)(v33 + v33);
  LODWORD(v67) = 0;
  v43 = v33 * (float)(v33 + v33);
  *(_DWORD *)&v71[4] = 0;
  v44 = v34 * (float)(v34 + v34);
  v45 = v34 * v36;
  *((float *)&v66 + 1) = v42 - v40;
  *(float *)&v70 = v42 + v40;
  v69 = COERCE_UNSIGNED_INT(v45 + v37);
  *((float *)&v70 + 1) = v45 - v37;
  *((float *)&v65 + 1) = (float)(1.0 - v44) - v43;
  *(float *)&v66 = v41 + v39;
  *((float *)&v67 + 1) = v41 - v39;
  v68 = (float)(1.0 - v38) - v43;
  *(_OWORD *)&v71[8] = _xmm;
  *(float *)v71 = (float)(1.0 - v38) - v44;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v46 = *((float *)this + 110) - *((float *)this + 113);
  v47 = *((float *)this + 111) - *((float *)this + 114);
  *(_QWORD *)v71 = 1065353216LL;
  v70 = 0LL;
  *(float *)&v71[8] = v46;
  v48 = *((float *)this + 112) - *((float *)this + 115);
  *(float *)&v71[12] = v47;
  v69 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  *(float *)&v71[16] = v48;
  *(_DWORD *)&v71[20] = 1065353216;
  v68 = 1.0;
  HIDWORD(v65) = 1065353216;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v49 = (_DWORD *)*((_QWORD *)this + 40);
  v50 = v49[22];
  v51 = v49[20] - v49[23];
  v78 = v49[24];
  v80 = v49[21] - v49[25];
  v52 = v50 + *((_DWORD *)this + 73);
  v77 = v50;
  v79 = v51;
  v53 = (float)v52;
  v54 = 0;
  v55 = v51 - v50;
  v56 = (float)(v78 + *((_DWORD *)this + 74));
  if ( v55 < 0 )
    v55 = 0;
  if ( v80 - v78 >= 0 )
    v54 = v80 - v78;
  *(_OWORD *)&v71[4] = 0uLL;
  v70 = 0LL;
  v69 = 0LL;
  v67 = 0LL;
  *((float *)&v65 + 1) = (float)v55 * v74;
  v66 = 0LL;
  *(float *)v71 = v76;
  *(_DWORD *)&v71[20] = 1065353216;
  v68 = (float)v54 * v75;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v58 = v57 * *((float *)this + 113);
  *(_QWORD *)v71 = 1065353216LL;
  v60 = v59 * *((float *)this + 114);
  v70 = 0LL;
  v61 = v6 + *((float *)this + 115);
  v69 = 0LL;
  v67 = 0LL;
  *(float *)&v71[16] = v61;
  v66 = 0LL;
  *(_DWORD *)&v71[20] = 1065353216;
  v68 = 1.0;
  HIDWORD(v65) = 1065353216;
  *(float *)&v71[8] = v58 + (float)(v53 + v73);
  *(float *)&v71[12] = v60 + (float)(v56 + v72);
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)&v81,
    (const struct D2DMatrix *)((char *)&v65 + 4));
  v92 = 250;
  memset_0(&v93, 0, 0x34uLL);
  v62 = *((_QWORD *)this + 41);
  v94 = v81;
  v95 = *(float *)&v82;
  v96 = *((float *)&v83 + 1);
  v97 = v84;
  v98 = v88;
  v99 = v89;
  v93 = *(_DWORD *)(v62 + 24);
  result = MilResource_SendCommand(&v92, 0x38u, *(struct MIL_CHANNEL__ **)(v62 + 16));
  v64 = result;
  if ( result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, result, 0x86u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v64, 0x2D1u);
    return v64;
  }
  return result;
}
