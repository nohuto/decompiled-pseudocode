/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18010F3A0
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18010FFE0 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180110228 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, char a2, int a3, FLOAT *a4)
{
  int v4; // r10d
  const struct D2DMatrix *Matrix4x4Value; // rax
  char v6; // r8
  const GUID *v7; // r9
  int v8; // r10d
  __int64 v9; // r11
  const char *v10; // rcx
  bool v11; // zf
  const GUID *v12; // r8
  __int64 v13; // rax
  char v14; // r8
  const GUID *v15; // r9
  __int64 v16; // r11
  const char *v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rax
  const char *v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // rax
  FLOAT v23; // eax
  const char *v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rax
  const char *v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rax
  const char *v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  struct D2D_MATRIX_3X2_F v35; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR v36; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  const GUID *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  struct D2D_MATRIX_3X2_F *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  FLOAT *p_m12; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  FLOAT *p_m21; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  FLOAT *p_m22; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  FLOAT *p_dx; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  FLOAT *p_dy; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  const GUID *v62; // [rsp+150h] [rbp+50h]
  int v63; // [rsp+158h] [rbp+58h]
  int v64; // [rsp+15Ch] [rbp+5Ch]
  int *v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  char *v69; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+188h] [rbp+88h]
  ULONG *p_Size; // [rsp+190h] [rbp+90h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+1A0h] [rbp+A0h]
  __int64 v74; // [rsp+1A8h] [rbp+A8h]
  __int128 *v75; // [rsp+1B0h] [rbp+B0h]
  __int64 v76; // [rsp+1B8h] [rbp+B8h]
  char *v77; // [rsp+1C0h] [rbp+C0h]
  __int64 v78; // [rsp+1C8h] [rbp+C8h]
  char *v79; // [rsp+1D0h] [rbp+D0h]
  __int64 v80; // [rsp+1D8h] [rbp+D8h]
  char *v81; // [rsp+1E0h] [rbp+E0h]
  __int64 v82; // [rsp+1E8h] [rbp+E8h]
  __int128 *v83; // [rsp+1F0h] [rbp+F0h]
  __int64 v84; // [rsp+1F8h] [rbp+F8h]
  char *v85; // [rsp+200h] [rbp+100h]
  __int64 v86; // [rsp+208h] [rbp+108h]
  char *v87; // [rsp+210h] [rbp+110h]
  __int64 v88; // [rsp+218h] [rbp+118h]
  char *v89; // [rsp+220h] [rbp+120h]
  __int64 v90; // [rsp+228h] [rbp+128h]
  __int128 *v91; // [rsp+230h] [rbp+130h]
  __int64 v92; // [rsp+238h] [rbp+138h]
  char *v93; // [rsp+240h] [rbp+140h]
  __int64 v94; // [rsp+248h] [rbp+148h]
  char *v95; // [rsp+250h] [rbp+150h]
  __int64 v96; // [rsp+258h] [rbp+158h]
  char *v97; // [rsp+260h] [rbp+160h]
  __int64 v98; // [rsp+268h] [rbp+168h]
  int v99; // [rsp+2A0h] [rbp+1A0h] BYREF

  v99 = a3;
  v4 = *((_DWORD *)this + 30);
  if ( v4 )
  {
    switch ( *(_DWORD *)a4 )
    {
      case 0x11:
        v35.m11 = a4[2];
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v34 = v4;
          *((_QWORD *)&v38 + 1) = 4LL;
          *(_QWORD *)&v38 = &v34;
          v30 = "Read";
          *((_QWORD *)&v39 + 1) = 4LL;
          *(_QWORD *)&v39 = &v99;
          v31 = (const GUID *)&unk_18016AD50;
          if ( !a2 )
            v30 = (const char *)&pActivityId;
          LODWORD(v32) = 0;
          if ( v30 )
          {
            v31 = (const GUID *)v30;
            v32 = -1LL;
            do
              ++v32;
            while ( v30[v32] );
          }
          v40 = v31;
          v41 = v32 + 1;
          v43 = &v33;
          v45 = &v35;
          v42 = 0;
          v33 = 17;
          v44 = 4LL;
          v46 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E75F, v31, (LPCGUID)a4, 7u, &v36);
        }
        break;
      case 0x22:
        *(_QWORD *)&v35.m11 = *((_QWORD *)a4 + 1);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v34 = v4;
          *((_QWORD *)&v38 + 1) = 4LL;
          *(_QWORD *)&v38 = &v34;
          v27 = "Read";
          *((_QWORD *)&v39 + 1) = 4LL;
          *(_QWORD *)&v39 = &v99;
          v28 = (const GUID *)&unk_18016AD50;
          if ( !a2 )
            v27 = (const char *)&pActivityId;
          LODWORD(v29) = 0;
          if ( v27 )
          {
            v28 = (const GUID *)v27;
            v29 = -1LL;
            do
              ++v29;
            while ( v27[v29] );
          }
          v40 = v28;
          v41 = v29 + 1;
          v43 = &v33;
          v45 = &v35;
          p_m12 = &v35.m12;
          v42 = 0;
          v33 = 34;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E700, v28, (LPCGUID)a4, 8u, &v36);
        }
        break;
      case 0x33:
        v23 = a4[4];
        *(_QWORD *)&v35.m11 = *((_QWORD *)a4 + 1);
        v35.m21 = v23;
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v34 = v4;
          *((_QWORD *)&v38 + 1) = 4LL;
          *(_QWORD *)&v38 = &v34;
          v24 = "Read";
          *((_QWORD *)&v39 + 1) = 4LL;
          *(_QWORD *)&v39 = &v99;
          v25 = (const GUID *)&unk_18016AD50;
          if ( !a2 )
            v24 = (const char *)&pActivityId;
          LODWORD(v26) = 0;
          if ( v24 )
          {
            v25 = (const GUID *)v24;
            v26 = -1LL;
            do
              ++v26;
            while ( v24[v26] );
          }
          v40 = v25;
          v41 = v26 + 1;
          v43 = &v33;
          v45 = &v35;
          p_m12 = &v35.m12;
          p_m21 = &v35.m21;
          v42 = 0;
          v33 = 51;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          v50 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E69E, v25, (LPCGUID)a4, 9u, &v36);
        }
        break;
      case 0x44:
        *(_OWORD *)&v35.m11 = *(_OWORD *)(a4 + 2);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v34 = v4;
          *((_QWORD *)&v38 + 1) = 4LL;
          *(_QWORD *)&v38 = &v34;
          v20 = "Read";
          *((_QWORD *)&v39 + 1) = 4LL;
          *(_QWORD *)&v39 = &v99;
          v21 = (const GUID *)&unk_18016AD50;
          if ( !a2 )
            v20 = (const char *)&pActivityId;
          LODWORD(v22) = 0;
          if ( v20 )
          {
            v21 = (const GUID *)v20;
            v22 = -1LL;
            do
              ++v22;
            while ( v20[v22] );
          }
          v40 = v21;
          v41 = v22 + 1;
          v43 = &v33;
          v45 = &v35;
          p_m12 = &v35.m12;
          p_m21 = &v35.m21;
          p_m22 = &v35.m22;
          v42 = 0;
          v33 = 68;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          v50 = 4LL;
          v52 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E639, v21, (LPCGUID)a4, 0xAu, &v36);
        }
        break;
      case 0x65:
        v35 = *CExpressionValue::GetMatrix3x2Value((CExpressionValue *)a4);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v17 = "Read";
          v34 = *(_DWORD *)(v16 + 120);
          v11 = v14 == 0;
          *((_QWORD *)&v38 + 1) = 4LL;
          *(_QWORD *)&v38 = &v34;
          v18 = (const GUID *)&unk_18016AD50;
          *((_QWORD *)&v39 + 1) = 4LL;
          *(_QWORD *)&v39 = &v99;
          if ( v11 )
            v17 = (const char *)&pActivityId;
          LODWORD(v19) = 0;
          if ( v17 )
          {
            v18 = (const GUID *)v17;
            v19 = -1LL;
            do
              ++v19;
            while ( v17[v19] );
          }
          v40 = v18;
          v41 = v19 + 1;
          v43 = &v33;
          v45 = &v35;
          p_m12 = &v35.m12;
          p_m21 = &v35.m21;
          p_m22 = &v35.m22;
          p_dx = &v35.dx;
          p_dy = &v35.dy;
          v42 = 0;
          v33 = 101;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          v50 = 4LL;
          v52 = 4LL;
          v54 = 4LL;
          v56 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E5C2, v18, v15, 0xCu, &v36);
        }
        break;
      case 0x106:
        Matrix4x4Value = CExpressionValue::GetMatrix4x4Value((CExpressionValue *)a4);
        v36 = *(EVENT_DATA_DESCRIPTOR *)Matrix4x4Value;
        v37 = *((_OWORD *)Matrix4x4Value + 1);
        v38 = *((_OWORD *)Matrix4x4Value + 2);
        v39 = *((_OWORD *)Matrix4x4Value + 3);
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v10 = "Read";
          v33 = *(_DWORD *)(v9 + 120);
          v11 = v6 == 0;
          v59 = 4LL;
          v58 = &v33;
          v12 = (const GUID *)&unk_18016AD50;
          v61 = 4LL;
          v60 = &v99;
          if ( v11 )
            v10 = (const char *)&pActivityId;
          LODWORD(v13) = 0;
          if ( v10 )
          {
            v12 = (const GUID *)v10;
            v13 = -1LL;
            do
              ++v13;
            while ( v10[v13] );
          }
          v62 = v12;
          v63 = v13 + 1;
          v65 = &v34;
          v67 = &v36;
          v69 = (char *)&v36.Ptr + 4;
          p_Size = &v36.Size;
          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v36.Reserved;
          v75 = &v37;
          v77 = (char *)&v37 + 4;
          v79 = (char *)&v37 + 8;
          v81 = (char *)&v37 + 12;
          v83 = &v38;
          v85 = (char *)&v38 + 4;
          v87 = (char *)&v38 + 8;
          v89 = (char *)&v38 + 12;
          v91 = &v39;
          v93 = (char *)&v39 + 4;
          v95 = (char *)&v39 + 8;
          v97 = (char *)&v39 + 12;
          v64 = 0;
          v34 = v8;
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
          v96 = 4LL;
          v98 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E519, v12, v7, 0x16u, &pData);
        }
        break;
    }
  }
}
