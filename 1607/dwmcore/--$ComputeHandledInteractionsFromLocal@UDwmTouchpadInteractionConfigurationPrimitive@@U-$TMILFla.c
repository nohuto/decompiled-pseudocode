/*
 * XREFs of ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18016C220
 * Callers:
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18016D62C (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18016F3F4 (_anonymous_namespace_--ReverseAndLeftShift.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x180188310 (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801889BC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4,
        struct D2DMatrix *a5)
{
  __int64 v5; // r15
  _OWORD *v10; // rax
  const struct D2DMatrix *v11; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 result; // rax
  float v15; // ecx
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  float v20; // [rsp+50h] [rbp-B0h] BYREF
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
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  char *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  float *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  _BYTE *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  char *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  char *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  char *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  char *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  char *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  char *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  char *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  char *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  __int64 v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  __int64 *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  __int64 v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  __int64 v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  __int64 *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  __int64 v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  __int64 v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  __int64 *v75; // [rsp+220h] [rbp+120h]
  __int64 v76; // [rsp+228h] [rbp+128h]
  __int64 v77; // [rsp+230h] [rbp+130h]
  __int64 v78; // [rsp+238h] [rbp+138h]

  v5 = (__int64)a3 + 20;
  v10 = (_OWORD *)anonymous_namespace_::ReverseAndLeftShift(v21, (char *)a3 + 20);
  *(_OWORD *)a5 = *v10;
  *((_OWORD *)a5 + 1) = v10[1];
  *((_OWORD *)a5 + 2) = v10[2];
  *((_OWORD *)a5 + 3) = v10[3];
  v11 = D2DMatrixTranspose((struct D2DMatrix *)v21, a5);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v19, a4, v11);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v17 = a1;
    v31 = &v17;
    v18 = *a3;
    v33 = &v18;
    v16 = *(_DWORD *)(a1 + 388);
    v35 = &v16;
    v37 = &v19;
    v39 = (char *)&v19 + 4;
    v41 = &v20;
    v43 = v21;
    v45 = &v22;
    v47 = &v23;
    v49 = &v24;
    v51 = &v25;
    v53 = &v26;
    v55 = &v27;
    v57 = &v28;
    v59 = &v29;
    v63 = a3 + 3;
    v65 = (__int64)a3 + 28;
    v67 = (__int64)a3 + 36;
    v69 = a3 + 5;
    v71 = (__int64)a3 + 44;
    v73 = (__int64)a3 + 52;
    v75 = a3 + 7;
    v77 = (__int64)a3 + 60;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v61 = v5;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5514, v12, v13, 0x1Au, &pData);
  }
  if ( *(float *)&v19 > 0.0 && (a3[2] & 1) == 0 || *(float *)&v19 < 0.0 && (a3[2] & 2) == 0 )
    LODWORD(v19) = 0;
  if ( *((float *)&v19 + 1) > 0.0 && (a3[2] & 4) == 0 || *((float *)&v19 + 1) < 0.0 && (a3[2] & 8) == 0 )
    HIDWORD(v19) = 0;
  if ( v20 < 0.0 && (a3[2] & 0x10) == 0 || v20 > 0.0 && (a3[2] & 0x20) == 0 )
    v20 = 0.0;
  result = a2;
  v15 = v20;
  *(_QWORD *)(a2 + 4) = v19;
  *(float *)(a2 + 12) = v15;
  *(_WORD *)a2 = 0;
  return result;
}
