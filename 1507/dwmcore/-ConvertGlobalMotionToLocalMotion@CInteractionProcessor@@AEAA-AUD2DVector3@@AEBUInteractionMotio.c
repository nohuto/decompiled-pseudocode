/*
 * XREFs of ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@@Z @ 0x18012E008
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012CA18 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18005DBC0 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180149650 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801497DC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ConvertGlobalMotionToLocalMotion(
        __int64 *a1,
        __int64 a2,
        float *a3,
        const struct D2DMatrix *a4,
        struct D2DMatrix *a5)
{
  float v5; // xmm0_4
  int *v6; // r15
  int *v7; // r12
  const struct D2DMatrix *v11; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  float v14; // ecx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  float v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v22; // [rsp+64h] [rbp-9Ch] BYREF
  char v23; // [rsp+68h] [rbp-98h] BYREF
  char v24; // [rsp+70h] [rbp-90h] BYREF
  char v25; // [rsp+74h] [rbp-8Ch] BYREF
  char v26; // [rsp+78h] [rbp-88h] BYREF
  char v27; // [rsp+80h] [rbp-80h] BYREF
  char v28; // [rsp+84h] [rbp-7Ch] BYREF
  char v29; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 **v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int64 *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  __int64 v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  __int64 v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  float *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  _BYTE *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  char *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  char *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  char *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  char *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  char *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  char *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  char *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  char *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]

  v5 = *a3;
  v6 = (int *)(a3 + 1);
  v7 = (int *)(a3 + 2);
  *((float *)&v16 + 1) = a3[1];
  *(float *)&v16 = v5;
  v17 = (float)(1.0 / a3[2]) - 1.0;
  if ( D2DMatrixInverse((struct D2DMatrix *)v21, 0LL, a4) )
  {
    v11 = D2DMatrixTranspose(a5, (const struct D2DMatrix *)v21);
    D3DXVec3TransformCoord((struct D2DVector3 *)a2, (const struct D2DVector3 *)&v16, v11);
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
    {
      v20 = a1;
      v31 = &v20;
      v19 = *a1;
      v33 = &v19;
      v16 = a1[17];
      v35 = &v16;
      v18 = *((_DWORD *)a1 + 89);
      v37 = &v18;
      v41 = a2 + 4;
      v43 = a2 + 8;
      v51 = v21;
      v53 = &v22;
      v55 = &v23;
      v57 = &v24;
      v59 = &v25;
      v61 = &v26;
      v63 = &v27;
      v65 = &v28;
      v67 = &v29;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 4LL;
      v39 = a2;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v45 = a3;
      v46 = 4LL;
      v47 = v6;
      v48 = 4LL;
      v49 = v7;
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
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F56D, v12, v13, 0x15u, &pData);
    }
  }
  else
  {
    v14 = v17;
    *(_QWORD *)a2 = v16;
    *(float *)(a2 + 8) = v14;
  }
  return a2;
}
