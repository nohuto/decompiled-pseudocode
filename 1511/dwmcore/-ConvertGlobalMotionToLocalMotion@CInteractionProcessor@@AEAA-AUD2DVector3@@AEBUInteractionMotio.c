/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x180141FA4
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180140704 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1800AABC4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x1801575C4 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180157C78 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        __int64 a2,
        float *a3,
        const struct D2DMatrix *a4,
        struct D2DMatrix *a5,
        struct D2DMatrix *a6)
{
  unsigned int *v6; // r12
  float v11; // xmm1_4
  const struct D2DMatrix *v12; // rcx
  const GUID *v13; // r9
  const struct D2DMatrix *v14; // rax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  float v20; // [rsp+50h] [rbp-B0h]
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  __m256 v23; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 **v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  __int64 *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  __int64 v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  float *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  unsigned int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  unsigned int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  struct D2DMatrix *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  char *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  char *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  char *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  char *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  char *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  char *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  char *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  char *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  __int128 *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  char *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  char *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  __int128 *v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  char *v71; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]
  char *v73; // [rsp+240h] [rbp+140h]
  __int64 v74; // [rsp+248h] [rbp+148h]
  __m256 *v75; // [rsp+250h] [rbp+150h]
  __int64 v76; // [rsp+258h] [rbp+158h]
  float *v77; // [rsp+260h] [rbp+160h]
  __int64 v78; // [rsp+268h] [rbp+168h]
  float *v79; // [rsp+270h] [rbp+170h]
  __int64 v80; // [rsp+278h] [rbp+178h]

  v6 = (unsigned int *)(a3 + 1);
  *(_OWORD *)a5 = IdentityMatrix;
  *((_OWORD *)a5 + 1) = *(&IdentityMatrix + 1);
  *((__m256 *)a5 + 1) = ymmword_18019E9D0;
  *(_OWORD *)a6 = IdentityMatrix;
  *((_OWORD *)a6 + 1) = *(&IdentityMatrix + 1);
  *((__m256 *)a6 + 1) = ymmword_18019E9D0;
  v11 = (float)(1.0 / a3[2]) - 1.0;
  *(_QWORD *)a2 = _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)).m128_u64[0];
  v20 = v11;
  *(float *)(a2 + 8) = v11;
  v21 = IdentityMatrix;
  v22 = *(&IdentityMatrix + 1);
  v23 = ymmword_18019E9D0;
  if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 70)) && D2DMatrixInverse((struct D2DMatrix *)&v21, 0LL, v12) )
    D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, (const struct D2DMatrix *)&v21);
  if ( !D2DMatrixIsIdentity(a4) )
  {
    v14 = D2DMatrixTranspose(a5, a4);
    if ( D2DMatrixInverse(a6, 0LL, v14) )
      D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)a2, a6);
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v18 = a1;
    v25 = &v18;
    v17 = *a1;
    v27 = &v17;
    v19 = a1[17];
    v29 = &v19;
    v16 = *((_DWORD *)a1 + 89);
    v31 = &v16;
    v35 = a2 + 4;
    v37 = a2 + 8;
    v43 = (unsigned int *)(a3 + 2);
    v47 = (char *)a6 + 4;
    v49 = (char *)a6 + 8;
    v51 = (char *)a6 + 16;
    v53 = (char *)a6 + 20;
    v55 = (char *)a6 + 24;
    v57 = (char *)a6 + 32;
    v59 = (char *)a6 + 36;
    v61 = (char *)a6 + 40;
    v63 = &v21;
    v65 = (char *)&v21 + 4;
    v67 = (char *)&v21 + 8;
    v69 = &v22;
    v71 = (char *)&v22 + 4;
    v73 = (char *)&v22 + 8;
    v75 = &v23;
    v26 = 8LL;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 4LL;
    v33 = a2;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v39 = a3;
    v40 = 4LL;
    v41 = v6;
    v42 = 4LL;
    v44 = 4LL;
    v45 = a6;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    v77 = &v23.m256_f32[1];
    v79 = &v23.m256_f32[2];
    v80 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E883, (LPCGUID)4, v13, 0x1Eu, &pData);
  }
  return a2;
}
