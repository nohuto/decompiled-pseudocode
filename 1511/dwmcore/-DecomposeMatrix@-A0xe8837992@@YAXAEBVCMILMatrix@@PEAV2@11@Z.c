/*
 * XREFs of ?DecomposeMatrix@?A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z @ 0x180142384
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x1800A7FB0 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180047400 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800673C4 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     acosf_0 @ 0x1800BC82A (acosf_0.c)
 *     ?DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z @ 0x18013A430 (-DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180157438 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x180157700 (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180157898 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall `anonymous namespace'::DecomposeMatrix(
        _anonymous_namespace_ *this,
        const struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        struct CMILMatrix *a4)
{
  __int128 v4; // xmm0
  char *v5; // r15
  char *v6; // r12
  char *v8; // r13
  int v12; // xmm2_4
  unsigned __int64 v13; // xmm1_8
  int v14; // xmm1_4
  float v15; // xmm6_4
  const struct D2DVector2 *v16; // rdx
  const GUID *v17; // r8
  const GUID *v18; // r9
  int v19; // eax
  const struct D2DVector2 *cData; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  float v22; // [rsp+4Ch] [rbp-BCh] BYREF
  int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  float X[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v29[2]; // [rsp+78h] [rbp-90h] BYREF
  __m256 v30; // [rsp+98h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  _anonymous_namespace_ *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  char *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  char *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  char *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  char *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  char *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  char *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  char *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  char *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  char *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  char *v54; // [rsp+188h] [rbp+80h]
  __int64 v55; // [rsp+190h] [rbp+88h]
  char *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  char *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  char *v60; // [rsp+1B8h] [rbp+B0h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  char *v62; // [rsp+1C8h] [rbp+C0h]
  __int64 v63; // [rsp+1D0h] [rbp+C8h]
  char *v64; // [rsp+1D8h] [rbp+D0h]
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *v66; // [rsp+1E8h] [rbp+E0h]
  __int64 v67; // [rsp+1F0h] [rbp+E8h]
  char *v68; // [rsp+1F8h] [rbp+F0h]
  __int64 v69; // [rsp+200h] [rbp+F8h]
  int *v70; // [rsp+208h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+108h]
  int *v72; // [rsp+218h] [rbp+110h]
  __int64 v73; // [rsp+220h] [rbp+118h]
  int *v74; // [rsp+228h] [rbp+120h]
  __int64 v75; // [rsp+230h] [rbp+128h]
  int *v76; // [rsp+238h] [rbp+130h]
  __int64 v77; // [rsp+240h] [rbp+138h]
  float *v78; // [rsp+248h] [rbp+140h]
  __int64 v79; // [rsp+250h] [rbp+148h]
  float *v80; // [rsp+258h] [rbp+150h]
  __int64 v81; // [rsp+260h] [rbp+158h]
  float *v82; // [rsp+268h] [rbp+160h]
  __int64 v83; // [rsp+270h] [rbp+168h]

  v4 = *(_OWORD *)this;
  v22 = 0.0;
  v5 = (char *)this + 48;
  v21 = 0;
  v6 = (char *)this + 52;
  *(_OWORD *)a2 = v4;
  v8 = (char *)this + 20;
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 3);
  *(_OWORD *)a3 = IdentityMatrix;
  *((_OWORD *)a3 + 1) = *(&IdentityMatrix + 1);
  *((__m256 *)a3 + 1) = ymmword_18019E9D0;
  *(_OWORD *)a4 = IdentityMatrix;
  *((_OWORD *)a4 + 1) = *(&IdentityMatrix + 1);
  *((__m256 *)a4 + 1) = ymmword_18019E9D0;
  v12 = *(_DWORD *)this;
  v13 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 12), (__m128)*((unsigned int *)this + 13)).m128_u64[0];
  v24 = *((_DWORD *)this + 5);
  v28 = v13;
  v29[0] = IdentityMatrix;
  v29[1] = *(&IdentityMatrix + 1);
  v30 = ymmword_18019E9D0;
  v23 = v12;
  CMILMatrix::DecomposeMatrixIntoScaleAndRest(this, a4, (struct CMILMatrix *)v29, &v21);
  if ( v21 )
  {
    v14 = *((_DWORD *)a4 + 5);
    v23 = *(_DWORD *)a4;
    v24 = v14;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v25, (const struct D2DMatrix *)v29);
    v25 = 0;
    v26 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v25, (const struct D2DQuaternion *)&v25);
    v15 = acosf_0(X[1]) * 2.0;
    v22 = v15;
    D2DMatrixRotationZ(a3, v15);
  }
  else
  {
    v15 = v22;
  }
  if ( !(unsigned int)CBaseMatrix::Is2DAffine(this, 1) )
  {
    D2DMatrixTransformation2D(
      a2,
      v16,
      0.0,
      (const struct D2DVector2 *)&v23,
      cData,
      v15,
      (const struct D2DVector2 *)&v28);
    v17 = 0LL;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v19 = (int)v17;
    v33 = 4LL;
    LOBYTE(v19) = v21 != (_DWORD)v17;
    v34 = this;
    v21 = v19;
    v32 = &v21;
    v36 = (char *)this + 4;
    v38 = (char *)this + 8;
    v40 = (char *)this + 12;
    v42 = (char *)this + 16;
    v46 = (char *)this + 24;
    v48 = (char *)this + 28;
    v50 = (char *)this + 32;
    v52 = (char *)this + 36;
    v54 = (char *)this + 40;
    v56 = (char *)this + 44;
    v62 = (char *)this + 56;
    v64 = (char *)this + 60;
    v66 = &v28;
    v68 = (char *)&v28 + 4;
    v70 = &v23;
    v72 = &v24;
    v74 = &v25;
    v76 = &v26;
    v78 = X;
    v80 = &X[1];
    v82 = &v22;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v44 = v8;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v58 = v5;
    v59 = 4LL;
    v60 = v6;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E9C5, v17, v18, 0x1Cu, &pData);
  }
}
