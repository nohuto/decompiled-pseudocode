/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18016F01C
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18016CD8C (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18016F9F4 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801889BC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  const GUID *v7; // r9
  unsigned __int8 v10; // bl
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  CInteractionProcessor *v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  CInteractionProcessor **v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  char *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  char *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  char *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  __int64 *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  char *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  int *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]

  v7 = 0LL;
  v10 = 1;
  if ( *((_BYTE *)a4 + 1) )
    v10 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v10 &= -(*(_BYTE *)a5 != 0);
  if ( (*((_BYTE *)this + 144) & 0x18) != 0 )
  {
    v11 = *((_DWORD *)a5 + 3);
    v24 = *(_QWORD *)((char *)a5 + 4);
    v25 = v11;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v24, (const struct D2DVector3 *)&v24, a3);
    v12 = (unsigned int)v7;
    if ( !v10 )
    {
LABEL_10:
      *(_DWORD *)a6 = *((_DWORD *)this + 96);
      *(_WORD *)a5 = 0;
      v23 = 0;
      *(_QWORD *)((char *)a5 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a5 + 3) = 0;
      goto LABEL_11;
    }
    do
    {
      if ( v12 >= *((_DWORD *)a4 + 8) )
        break;
      v13 = *((_QWORD *)a4 + 1);
      v14 = *(_QWORD *)(v13 + 12LL * v12);
      LODWORD(v13) = *(_DWORD *)(v13 + 12LL * v12 + 8);
      v22 = v14;
      v23 = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v22, (const struct D2DVector3 *)&v22, a2);
      ++v12;
      v10 = anonymous_namespace_::VectorInsideAngleThreshold(&v24, &v22);
    }
    while ( v10 );
  }
  if ( !v10 )
    goto LABEL_10;
LABEL_11:
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v20 = this;
    v27 = &v20;
    v21 = *(_QWORD *)this;
    v29 = &v21;
    v22 = *((_QWORD *)this + 19);
    v31 = &v22;
    v16 = *((_DWORD *)this + 97);
    v33 = &v16;
    v17 = v10;
    v35 = &v17;
    v18 = *(unsigned __int8 *)a5;
    v37 = &v18;
    v19 = *((unsigned __int8 *)a5 + 1);
    v39 = &v19;
    v41 = (char *)a5 + 4;
    v43 = (char *)a5 + 8;
    v45 = (char *)a5 + 12;
    v47 = &v24;
    v49 = (char *)&v24 + 4;
    v51 = &v25;
    v28 = 8LL;
    v30 = 8LL;
    v32 = 8LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5AC9, (LPCGUID)a3, v7, 0xFu, &pData);
  }
  return v10;
}
