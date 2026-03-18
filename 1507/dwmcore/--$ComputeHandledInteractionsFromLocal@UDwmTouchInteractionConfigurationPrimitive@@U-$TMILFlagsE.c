/*
 * XREFs of ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@@Z @ 0x18012CBC0
 * Callers:
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@@Z @ 0x18012DADC (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ReverseAndLeftShift @ 0x18012E7FC (ReverseAndLeftShift.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180149650 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801497DC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4)
{
  __int64 v4; // r14
  const struct D2DMatrix *v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __int64 result; // rax
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  float v19; // [rsp+48h] [rbp-B8h] BYREF
  float v20; // [rsp+4Ch] [rbp-B4h] BYREF
  float v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v23; // [rsp+64h] [rbp-9Ch] BYREF
  char v24; // [rsp+68h] [rbp-98h] BYREF
  char v25; // [rsp+70h] [rbp-90h] BYREF
  char v26; // [rsp+74h] [rbp-8Ch] BYREF
  char v27; // [rsp+78h] [rbp-88h] BYREF
  char v28; // [rsp+80h] [rbp-80h] BYREF
  char v29; // [rsp+84h] [rbp-7Ch] BYREF
  char v30; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  __int64 *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  float *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  float *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  float *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  _BYTE *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  char *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  char *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  char *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  char *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  char *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]
  char *v56; // [rsp+180h] [rbp+80h]
  __int64 v57; // [rsp+188h] [rbp+88h]
  char *v58; // [rsp+190h] [rbp+90h]
  __int64 v59; // [rsp+198h] [rbp+98h]
  char *v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  __int64 v62; // [rsp+1B0h] [rbp+B0h]
  __int64 v63; // [rsp+1B8h] [rbp+B8h]
  __int64 *v64; // [rsp+1C0h] [rbp+C0h]
  __int64 v65; // [rsp+1C8h] [rbp+C8h]
  __int64 v66; // [rsp+1D0h] [rbp+D0h]
  __int64 v67; // [rsp+1D8h] [rbp+D8h]
  __int64 v68; // [rsp+1E0h] [rbp+E0h]
  __int64 v69; // [rsp+1E8h] [rbp+E8h]
  __int64 *v70; // [rsp+1F0h] [rbp+F0h]
  __int64 v71; // [rsp+1F8h] [rbp+F8h]
  __int64 v72; // [rsp+200h] [rbp+100h]
  __int64 v73; // [rsp+208h] [rbp+108h]
  __int64 v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  __int64 *v76; // [rsp+220h] [rbp+120h]
  __int64 v77; // [rsp+228h] [rbp+128h]
  __int64 v78; // [rsp+230h] [rbp+130h]
  __int64 v79; // [rsp+238h] [rbp+138h]

  v4 = (__int64)a3 + 20;
  ReverseAndLeftShift(v22, (char *)a3 + 20);
  v9 = D2DMatrixTranspose((struct D2DMatrix *)v22, (const struct D2DMatrix *)v22);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v19, a4, v9);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v18 = a1;
    v32 = &v18;
    v17 = *a3;
    v34 = &v17;
    v16 = *(_DWORD *)(a1 + 356);
    v36 = &v16;
    v38 = &v19;
    v40 = &v20;
    v42 = &v21;
    v44 = v22;
    v46 = &v23;
    v48 = &v24;
    v50 = &v25;
    v52 = &v26;
    v54 = &v27;
    v56 = &v28;
    v58 = &v29;
    v60 = &v30;
    v64 = a3 + 3;
    v66 = (__int64)a3 + 28;
    v68 = (__int64)a3 + 36;
    v70 = a3 + 5;
    v72 = (__int64)a3 + 44;
    v74 = (__int64)a3 + 52;
    v76 = a3 + 7;
    v78 = (__int64)a3 + 60;
    v33 = 8LL;
    v35 = 8LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 4LL;
    v62 = v4;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F1D2, v10, v11, 0x1Au, &pData);
  }
  v12 = v19;
  if ( v19 > 0.0 && (a3[2] & 1) == 0 || v19 < 0.0 && (a3[2] & 2) == 0 )
    v12 = 0.0;
  v13 = v20;
  if ( v20 > 0.0 && (a3[2] & 4) == 0 || v20 < 0.0 && (a3[2] & 8) == 0 )
    v13 = 0.0;
  v14 = v21;
  if ( v21 < 0.0 && (a3[2] & 0x10) == 0 || v21 > 0.0 && (a3[2] & 0x20) == 0 )
    v14 = 0.0;
  *(float *)(a2 + 4) = v12;
  result = a2;
  *(float *)(a2 + 8) = v13;
  *(float *)(a2 + 12) = v14;
  *(_WORD *)a2 = 0;
  return result;
}
