/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18010D8FC
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x18012135C (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x1801213A8 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

void __fastcall CBaseExpression::LogSetOutputValue(LPCGUID pActivityId)
{
  const GUID *v1; // r9
  __int64 v3; // rax
  CExpressionValue *v4; // rcx
  __int64 v5; // rax
  const struct D2DMatrix *Matrix4x4Value; // rax
  __int64 v7; // r8
  const GUID *v8; // r9
  __int64 v9; // r11
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int64 v11; // r8
  const GUID *v12; // r9
  __int64 v13; // r11
  unsigned int Data1; // eax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  __int128 v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int128 *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  char *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  _QWORD *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  char *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  __int64 *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  char *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  ULONG *p_Size; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int128 *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  char *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  char *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  char *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  __int128 *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  char *v63; // [rsp+1F0h] [rbp+F0h]
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
  char *v75; // [rsp+250h] [rbp+150h]
  __int64 v76; // [rsp+258h] [rbp+158h]

  v1 = (const GUID *)*(unsigned int *)pActivityId[7].Data4;
  if ( !(_DWORD)v1 )
    return;
  v3 = *(_QWORD *)&pActivityId[7].Data1;
  v4 = (CExpressionValue *)&pActivityId[3];
  v17 = 0LL;
  if ( !v3 )
  {
    v17 = 0LL;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    v5 = *(unsigned __int8 *)(v3 + 8);
  }
  else
  {
    if ( *(_DWORD *)(v3 + 4) != 2 )
      goto LABEL_9;
    v5 = *(_QWORD *)(v3 + 8);
  }
  v17 = v5;
LABEL_9:
  switch ( *(_DWORD *)v4 )
  {
    case 0x11:
      LODWORD(v18) = *(_DWORD *)pActivityId[3].Data4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_180190AC0 & 1) != 0
        && (qword_180190AC8 & 1) == qword_180190AC8 )
      {
        v15 = (int)v1;
        *(_QWORD *)&v22 = &v15;
        *(_QWORD *)&v23 = &v16;
        v24 = &v17;
        v26 = &v18;
        *((_QWORD *)&v22 + 1) = 4LL;
        v16 = 17;
        *((_QWORD *)&v23 + 1) = 4LL;
        v25 = 8LL;
        v27 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E4D1, pActivityId, v1, 6u, &v20);
      }
      break;
    case 0x22:
      *(_QWORD *)&v18 = *(_QWORD *)pActivityId[3].Data4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_180190AC0 & 1) != 0
        && (qword_180190AC8 & 1) == qword_180190AC8 )
      {
        v15 = (int)v1;
        *(_QWORD *)&v22 = &v15;
        *(_QWORD *)&v23 = &v16;
        v24 = &v17;
        v26 = &v18;
        v28 = (char *)&v18 + 4;
        *((_QWORD *)&v22 + 1) = 4LL;
        v16 = 34;
        *((_QWORD *)&v23 + 1) = 4LL;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E482, pActivityId, v1, 7u, &v20);
      }
      break;
    case 0x33:
      Data1 = pActivityId[4].Data1;
      *(_QWORD *)&v18 = *(_QWORD *)pActivityId[3].Data4;
      DWORD2(v18) = Data1;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_180190AC0 & 1) != 0
        && (qword_180190AC8 & 1) == qword_180190AC8 )
      {
        v15 = (int)v1;
        *(_QWORD *)&v22 = &v15;
        *(_QWORD *)&v23 = &v16;
        v24 = &v17;
        v26 = &v18;
        v28 = (char *)&v18 + 4;
        v30 = (char *)&v18 + 8;
        *((_QWORD *)&v22 + 1) = 4LL;
        v16 = 51;
        *((_QWORD *)&v23 + 1) = 4LL;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E430, pActivityId, v1, 8u, &v20);
      }
      break;
    case 0x44:
      v18 = *(_OWORD *)pActivityId[3].Data4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_180190AC0 & 1) != 0
        && (qword_180190AC8 & 1) == qword_180190AC8 )
      {
        v15 = (int)v1;
        *(_QWORD *)&v22 = &v15;
        *(_QWORD *)&v23 = &v16;
        v24 = &v17;
        v26 = &v18;
        v28 = (char *)&v18 + 4;
        v30 = (char *)&v18 + 8;
        v32 = (char *)&v18 + 12;
        *((_QWORD *)&v22 + 1) = 4LL;
        v16 = 68;
        *((_QWORD *)&v23 + 1) = 4LL;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E3DB, pActivityId, v1, 9u, &v20);
      }
      break;
    case 0x65:
      Matrix3x2Value = CExpressionValue::GetMatrix3x2Value(v4);
      v18 = *(_OWORD *)&Matrix3x2Value->m11;
      v19[0] = *(_QWORD *)&Matrix3x2Value->m[2][0];
      if ( (unsigned int)pRelatedActivityId > 4
        && ((unsigned __int8)v13 & (unsigned __int8)qword_180190AC0) != 0
        && (v13 & qword_180190AC8) == qword_180190AC8 )
      {
        v15 = *(_DWORD *)(v11 + 120);
        *(_QWORD *)&v22 = &v15;
        *(_QWORD *)&v23 = &v16;
        v24 = &v17;
        v26 = &v18;
        v28 = (char *)&v18 + 4;
        v30 = (char *)&v18 + 8;
        v32 = (char *)&v18 + 12;
        v34 = v19;
        v36 = (char *)v19 + 4;
        *((_QWORD *)&v22 + 1) = 4LL;
        v16 = 101;
        *((_QWORD *)&v23 + 1) = 4LL;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E374, (LPCGUID)v11, v12, 0xBu, &v20);
      }
      break;
    case 0x106:
      Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v4);
      v20 = *(EVENT_DATA_DESCRIPTOR *)Matrix4x4Value;
      v21 = *((_OWORD *)Matrix4x4Value + 1);
      v22 = *((_OWORD *)Matrix4x4Value + 2);
      v23 = *((_OWORD *)Matrix4x4Value + 3);
      if ( (unsigned int)pRelatedActivityId > 4
        && ((unsigned __int8)v9 & (unsigned __int8)qword_180190AC0) != 0
        && (v9 & qword_180190AC8) == qword_180190AC8 )
      {
        v16 = *(_DWORD *)(v7 + 120);
        v39 = &v16;
        v41 = &v15;
        v43 = &v17;
        v45 = &v20;
        v47 = (char *)&v20.Ptr + 4;
        p_Size = &v20.Size;
        p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v20.Reserved;
        v53 = &v21;
        v55 = (char *)&v21 + 4;
        v57 = (char *)&v21 + 8;
        v59 = (char *)&v21 + 12;
        v61 = &v22;
        v63 = (char *)&v22 + 4;
        v65 = (char *)&v22 + 8;
        v67 = (char *)&v22 + 12;
        v69 = &v23;
        v71 = (char *)&v23 + 4;
        v73 = (char *)&v23 + 8;
        v75 = (char *)&v23 + 12;
        v40 = 4LL;
        v15 = (int)v8;
        v42 = 4LL;
        v44 = 8LL;
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
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E2DB, (LPCGUID)v7, v8, 0x15u, &pData);
      }
      break;
  }
}
