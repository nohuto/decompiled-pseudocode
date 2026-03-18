/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18012AA90
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18012B334 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, __int64 a2, int a3, FLOAT *a4)
{
  const GUID *v4; // r8
  const struct D2DMatrix *Matrix4x4Value; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // r10
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // r10
  FLOAT v12; // eax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+70h] [rbp-90h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h] BYREF
  const char *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  struct D2D_MATRIX_3X2_F *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  FLOAT *p_m12; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  FLOAT *p_m21; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  FLOAT *p_m22; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  FLOAT *p_dx; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  FLOAT *p_dy; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  const char *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  int *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  char *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  ULONG *p_Size; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int128 *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  char *v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  char *v57; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  char *v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  __int128 *v61; // [rsp+1F0h] [rbp+F0h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h]
  char *v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]
  char *v65; // [rsp+210h] [rbp+110h]
  __int64 v66; // [rsp+218h] [rbp+118h]
  char *v67; // [rsp+220h] [rbp+120h]
  __int64 v68; // [rsp+228h] [rbp+128h]
  __int128 *v69; // [rsp+230h] [rbp+130h]
  __int64 v70; // [rsp+238h] [rbp+138h]
  char *v71; // [rsp+240h] [rbp+140h]
  __int64 v72; // [rsp+248h] [rbp+148h]
  char *v73; // [rsp+250h] [rbp+150h]
  __int64 v74; // [rsp+258h] [rbp+158h]
  char *v75; // [rsp+260h] [rbp+160h]
  __int64 v76; // [rsp+268h] [rbp+168h]
  int v77; // [rsp+2A0h] [rbp+1A0h] BYREF

  v77 = a3;
  v4 = (const GUID *)*((unsigned int *)this + 30);
  if ( (_DWORD)v4 )
  {
    switch ( *(_DWORD *)a4 )
    {
      case 0x12:
        v15.m11 = a4[2];
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = (int)v4;
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 18;
          v23 = 4LL;
          v25 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D8AB, v4, (LPCGUID)a4, 7u, &v16);
        }
        break;
      case 0x23:
        *(_QWORD *)&v15.m11 = *((_QWORD *)a4 + 1);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = (int)v4;
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          p_m12 = &v15.m12;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 35;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D84C, v4, (LPCGUID)a4, 8u, &v16);
        }
        break;
      case 0x34:
        v12 = a4[4];
        *(_QWORD *)&v15.m11 = *((_QWORD *)a4 + 1);
        v15.m21 = v12;
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = (int)v4;
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          p_m12 = &v15.m12;
          p_m21 = &v15.m21;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 52;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D7EA, v4, (LPCGUID)a4, 9u, &v16);
        }
        break;
      case 0x45:
        *(_OWORD *)&v15.m11 = *(_OWORD *)(a4 + 2);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = (int)v4;
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          p_m12 = &v15.m12;
          p_m21 = &v15.m21;
          p_m22 = &v15.m22;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 69;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D785, v4, (LPCGUID)a4, 0xAu, &v16);
        }
        break;
      case 0x46:
        *(_OWORD *)&v15.m11 = *(_OWORD *)(a4 + 2);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = (int)v4;
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          p_m12 = &v15.m12;
          p_m21 = &v15.m21;
          p_m22 = &v15.m22;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 70;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D720, v4, (LPCGUID)a4, 0xAu, &v16);
        }
        break;
      case 0x47:
        *(_OWORD *)&v15.m11 = *(_OWORD *)(a4 + 2);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = (int)v4;
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          p_m12 = &v15.m12;
          p_m21 = &v15.m21;
          p_m22 = &v15.m22;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 71;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D785, v4, (LPCGUID)a4, 0xAu, &v16);
        }
        break;
      case 0x68:
        v15 = *CExpressionValue::GetMatrix3x2Value((CExpressionValue *)a4);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v14 = *(_DWORD *)(v11 + 120);
          *(_QWORD *)&v18 = &v14;
          *(_QWORD *)&v19 = &v77;
          v20 = "Read";
          v22 = &v13;
          v24 = &v15;
          p_m12 = &v15.m12;
          p_m21 = &v15.m21;
          p_m22 = &v15.m22;
          p_dx = &v15.dx;
          p_dy = &v15.dy;
          *((_QWORD *)&v18 + 1) = 4LL;
          *((_QWORD *)&v19 + 1) = 4LL;
          v21 = 5LL;
          v13 = 104;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 4LL;
          v35 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D6A9, v9, v10, 0xCu, &v16);
        }
        break;
      case 0x109:
        Matrix4x4Value = CExpressionValue::GetMatrix4x4Value((CExpressionValue *)a4);
        v16 = *(EVENT_DATA_DESCRIPTOR *)Matrix4x4Value;
        v17 = *((_OWORD *)Matrix4x4Value + 1);
        v18 = *((_OWORD *)Matrix4x4Value + 2);
        v19 = *((_OWORD *)Matrix4x4Value + 3);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v13 = *(_DWORD *)(v8 + 120);
          v37 = &v13;
          v39 = &v77;
          v41 = "Read";
          v43 = &v14;
          v45 = &v16;
          v47 = (char *)&v16.Ptr + 4;
          p_Size = &v16.Size;
          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v16.Reserved;
          v53 = &v17;
          v55 = (char *)&v17 + 4;
          v57 = (char *)&v17 + 8;
          v59 = (char *)&v17 + 12;
          v61 = &v18;
          v63 = (char *)&v18 + 4;
          v65 = (char *)&v18 + 8;
          v67 = (char *)&v18 + 12;
          v69 = &v19;
          v71 = (char *)&v19 + 4;
          v73 = (char *)&v19 + 8;
          v75 = (char *)&v19 + 12;
          v38 = 4LL;
          v40 = 4LL;
          v42 = 5LL;
          v14 = 265;
          v44 = 4LL;
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
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D600, v6, v7, 0x16u, &pData);
        }
        break;
    }
  }
}
