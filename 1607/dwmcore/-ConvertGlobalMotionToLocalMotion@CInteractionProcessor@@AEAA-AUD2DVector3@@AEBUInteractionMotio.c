/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18016DC40
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18016BFA8 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180110B1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x180187C14 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180188208 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180188310 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801889BC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        struct D2DMatrix *a6)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  _OWORD *v13; // r10
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  struct _D3DMATRIX *v19; // rcx
  __int64 v20; // rdx
  __int128 *v21; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  const struct D2DMatrix *v23; // r9
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  const GUID *v28; // r8
  const struct D2DMatrix *v29; // r9
  struct D2DMatrix *v30; // r10
  const struct D2DMatrix *v31; // rax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  struct _D3DMATRIX v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  struct _D3DMATRIX v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-20h] BYREF
  int v40; // [rsp+E8h] [rbp-18h]
  struct _D3DMATRIX v41; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int64 **v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  __int64 *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  int *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  __int64 v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  float *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  unsigned int *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  struct D2DMatrix *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  char *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  char *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  char *v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  char *v71; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]
  char *v73; // [rsp+240h] [rbp+140h]
  __int64 v74; // [rsp+248h] [rbp+148h]
  char *v75; // [rsp+250h] [rbp+150h]
  __int64 v76; // [rsp+258h] [rbp+158h]
  char *v77; // [rsp+260h] [rbp+160h]
  __int64 v78; // [rsp+268h] [rbp+168h]
  char *v79; // [rsp+270h] [rbp+170h]
  __int64 v80; // [rsp+278h] [rbp+178h]
  struct _D3DMATRIX *v81; // [rsp+280h] [rbp+180h]
  __int64 v82; // [rsp+288h] [rbp+188h]
  D3DVALUE *p__12; // [rsp+290h] [rbp+190h]
  __int64 v84; // [rsp+298h] [rbp+198h]
  D3DVALUE *p__13; // [rsp+2A0h] [rbp+1A0h]
  __int64 v86; // [rsp+2A8h] [rbp+1A8h]
  D3DVALUE *p__21; // [rsp+2B0h] [rbp+1B0h]
  __int64 v88; // [rsp+2B8h] [rbp+1B8h]
  D3DVALUE *p__22; // [rsp+2C0h] [rbp+1C0h]
  __int64 v90; // [rsp+2C8h] [rbp+1C8h]
  D3DVALUE *p__23; // [rsp+2D0h] [rbp+1D0h]
  __int64 v92; // [rsp+2D8h] [rbp+1D8h]
  D3DVALUE *p__31; // [rsp+2E0h] [rbp+1E0h]
  __int64 v94; // [rsp+2E8h] [rbp+1E8h]
  D3DVALUE *p__32; // [rsp+2F0h] [rbp+1F0h]
  __int64 v96; // [rsp+2F8h] [rbp+1F8h]
  D3DVALUE *p__33; // [rsp+300h] [rbp+200h]
  __int64 v98; // [rsp+308h] [rbp+208h]

  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v41);
  v10 = *(_OWORD *)&D3DMatrix->_21;
  v11 = *(_OWORD *)&D3DMatrix->_31;
  v12 = *(_OWORD *)&D3DMatrix->_41;
  *v13 = *(_OWORD *)&D3DMatrix->_11;
  v13[1] = v10;
  v13[2] = v11;
  v13[3] = v12;
  v15 = CMILMatrix::GetD3DMatrix(v14, &v41);
  v16 = *(_OWORD *)&v15->_21;
  v17 = *(_OWORD *)&v15->_31;
  v18 = *(_OWORD *)&v15->_41;
  *(_OWORD *)a6 = *(_OWORD *)&v15->_11;
  *((_OWORD *)a6 + 1) = v16;
  *((_OWORD *)a6 + 2) = v17;
  *((_OWORD *)a6 + 3) = v18;
  *(float *)&v16 = (float)(1.0 / a3[2]) - 1.0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)).m128_u64[0];
  v40 = v16;
  *(_DWORD *)(a2 + 8) = v16;
  v41 = *CMILMatrix::GetD3DMatrix(v19, &v38);
  if ( !CMILMatrix::IsIdentity<0>((__int64)a1 + 636) )
  {
    v24 = *v21;
    v25 = v21[1];
    v37 = *((_DWORD *)v21 + 16);
    *(_OWORD *)&v36._11 = v24;
    v26 = v21[2];
    *(_OWORD *)&v36._21 = v25;
    v27 = v21[3];
    *(_OWORD *)&v36._31 = v26;
    *(_OWORD *)&v36._41 = v27;
    if ( CMILMatrix::Invert((CMILMatrix *)&v36, v20, v22) )
    {
      v41 = *CMILMatrix::GetD3DMatrix(&v36, &v38);
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v41);
    }
  }
  if ( !(unsigned int)D2DMatrixIsIdentity(v23) )
  {
    v31 = D2DMatrixTranspose(v30, v29);
    if ( D2DMatrixInverse(a6, 0LL, v31) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v34 = a1;
    v43 = &v34;
    v35 = *a1;
    v45 = &v35;
    v39 = a1[19];
    v47 = &v39;
    v33 = *((_DWORD *)a1 + 97);
    v49 = &v33;
    v53 = a2 + 4;
    v55 = a2 + 8;
    v65 = (char *)a6 + 4;
    v67 = (char *)a6 + 8;
    v69 = (char *)a6 + 16;
    v71 = (char *)a6 + 20;
    v73 = (char *)a6 + 24;
    v75 = (char *)a6 + 32;
    v77 = (char *)a6 + 36;
    v79 = (char *)a6 + 40;
    v81 = &v41;
    p__12 = &v41._12;
    p__13 = &v41._13;
    p__21 = &v41._21;
    p__22 = &v41._22;
    p__23 = &v41._23;
    p__31 = &v41._31;
    v44 = 8LL;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 4LL;
    v51 = a2;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v57 = a3;
    v58 = 4LL;
    v59 = (unsigned int *)(a3 + 1);
    v60 = 4LL;
    v61 = (unsigned int *)(a3 + 2);
    v62 = 4LL;
    v63 = a6;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 4LL;
    v92 = 4LL;
    v94 = 4LL;
    p__32 = &v41._32;
    p__33 = &v41._33;
    v96 = 4LL;
    v98 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5987, v28, (LPCGUID)v29, 0x1Eu, &pData);
  }
  return a2;
}
