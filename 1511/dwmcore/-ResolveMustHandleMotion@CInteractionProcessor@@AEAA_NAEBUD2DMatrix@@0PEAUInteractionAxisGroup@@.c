/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801428B0
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801412EC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?VectorInsideAngleThreshold@?A0xe8837992@@YA_NAEBUD2DVector3@@0@Z @ 0x180142F80 (-VectorInsideAngleThreshold@-A0xe8837992@@YA_NAEBUD2DVector3@@0@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180157C78 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  unsigned __int8 v8; // bl
  char *v9; // r14
  int v10; // eax
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // r15d
  __int64 v14; // rdx
  int v15; // eax
  const struct D2DVector3 *v16; // r8
  int v17; // ecx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  struct D2DMatrix *v22; // [rsp+40h] [rbp-C0h] BYREF
  CInteractionProcessor *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  CInteractionProcessor **v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  struct D2DMatrix **v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  char *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  char *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  char *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  int *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]

  v22 = a2;
  v8 = 1;
  if ( *((_BYTE *)a4 + 1) )
    v8 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v8 &= -(*(_BYTE *)a5 != 0);
  v9 = (char *)a5 + 4;
  v10 = *((_DWORD *)a5 + 3);
  v27 = *(_QWORD *)((char *)a5 + 4);
  v28 = v10;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v27, (const struct D2DVector3 *)&v27, a3);
  v13 = (unsigned int)v12;
  if ( !v8 )
    goto LABEL_9;
  do
  {
    if ( v13 >= *((_DWORD *)a4 + 8) )
      break;
    v14 = *((_QWORD *)a4 + 1);
    v15 = *(_DWORD *)(v14 + 12LL * v13 + 8);
    v25 = *(_QWORD *)(v14 + 12LL * v13);
    v26 = v15;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v25, (const struct D2DVector3 *)&v25, v22);
    ++v13;
    v8 = `anonymous namespace'::VectorInsideAngleThreshold(
           (_anonymous_namespace_ *)&v27,
           (const struct D2DVector3 *)&v25,
           v16);
  }
  while ( v8 );
  v9 = (char *)a5 + 4;
  if ( !v8 )
  {
LABEL_9:
    v17 = *((_DWORD *)this + 88);
    v26 = 0;
    *(_DWORD *)a6 = v17;
    *(_QWORD *)v9 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)v9 + 2) = 0;
    *(_WORD *)a5 = 0;
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v23 = this;
    v30 = &v23;
    v24 = *(_QWORD *)this;
    v32 = &v24;
    v25 = *((_QWORD *)this + 17);
    v34 = &v25;
    v21 = *((_DWORD *)this + 89);
    v36 = &v21;
    v19 = v8;
    v38 = &v19;
    v20 = *(unsigned __int8 *)a5;
    v40 = &v20;
    LODWORD(v22) = *((unsigned __int8 *)a5 + 1);
    v42 = &v22;
    v46 = (char *)a5 + 8;
    v48 = (char *)a5 + 12;
    v50 = &v27;
    v52 = (char *)&v27 + 4;
    v54 = &v28;
    v31 = 8LL;
    v33 = 8LL;
    v35 = 8LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v44 = v9;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017E6C9, v11, v12, 0xFu, &pData);
  }
  return v8;
}
