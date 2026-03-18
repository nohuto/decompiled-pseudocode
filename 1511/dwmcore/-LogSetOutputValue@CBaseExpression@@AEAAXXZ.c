/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18012877C
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ @ 0x180136B74 (-GetMatrix3x2Value@CExpressionValue@@QEBAAEBUD2D_MATRIX_3X2_F@@XZ.c)
 *     ?GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ @ 0x180136BC0 (-GetMatrix4x4Value@CExpressionValue@@QEBAAEBUD2DMatrix@@XZ.c)
 */

void __fastcall CBaseExpression::LogSetOutputValue(LPCGUID pActivityId)
{
  const GUID *v1; // r9
  __int64 v3; // rax
  CExpressionValue *v4; // rcx
  int v5; // edx
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  const struct D2DMatrix *Matrix4x4Value; // rax
  __int64 v15; // r8
  const GUID *v16; // r9
  __int64 v17; // r11
  const struct D2D_MATRIX_3X2_F *Matrix3x2Value; // rax
  __int64 v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r11
  unsigned int Data1; // eax
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int128 *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  _QWORD *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  int *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  __int64 *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  char *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  ULONG *p_Size; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  __int128 *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  char *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  char *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  char *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  __int128 *v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1E8h] [rbp+E8h]
  char *v71; // [rsp+1F0h] [rbp+F0h]
  __int64 v72; // [rsp+1F8h] [rbp+F8h]
  char *v73; // [rsp+200h] [rbp+100h]
  __int64 v74; // [rsp+208h] [rbp+108h]
  char *v75; // [rsp+210h] [rbp+110h]
  __int64 v76; // [rsp+218h] [rbp+118h]
  __int128 *v77; // [rsp+220h] [rbp+120h]
  __int64 v78; // [rsp+228h] [rbp+128h]
  char *v79; // [rsp+230h] [rbp+130h]
  __int64 v80; // [rsp+238h] [rbp+138h]
  char *v81; // [rsp+240h] [rbp+140h]
  __int64 v82; // [rsp+248h] [rbp+148h]
  char *v83; // [rsp+250h] [rbp+150h]
  __int64 v84; // [rsp+258h] [rbp+158h]

  v1 = (const GUID *)*(unsigned int *)pActivityId[7].Data4;
  if ( !(_DWORD)v1 )
    return;
  v3 = *(_QWORD *)&pActivityId[7].Data1;
  v4 = (CExpressionValue *)&pActivityId[3];
  v25 = 0LL;
  v5 = *(_DWORD *)v4;
  if ( !v3 )
  {
    v25 = 0LL;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    v6 = *(unsigned __int8 *)(v3 + 8);
  }
  else
  {
    if ( *(_DWORD *)(v3 + 4) != 2 )
      goto LABEL_9;
    v6 = *(_QWORD *)(v3 + 8);
  }
  v25 = v6;
LABEL_9:
  v7 = v5 - 18;
  if ( v7 )
  {
    v8 = v7 - 17;
    if ( v8 )
    {
      v9 = v8 - 17;
      if ( v9 )
      {
        v10 = v9 - 17;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 33;
              if ( v13 )
              {
                if ( v13 == 161 )
                {
                  Matrix4x4Value = CExpressionValue::GetMatrix4x4Value(v4);
                  v28 = *(EVENT_DATA_DESCRIPTOR *)Matrix4x4Value;
                  v29 = *((_OWORD *)Matrix4x4Value + 1);
                  v30 = *((_OWORD *)Matrix4x4Value + 2);
                  v31 = *((_OWORD *)Matrix4x4Value + 3);
                  if ( (unsigned int)pRelatedActivityId > 4
                    && ((unsigned __int8)v17 & (unsigned __int8)qword_18019E950) != 0
                    && (v17 & qword_18019E958) == qword_18019E958 )
                  {
                    v24 = *(_DWORD *)(v15 + 120);
                    v47 = &v24;
                    v49 = &v23;
                    v51 = &v25;
                    v53 = &v28;
                    v55 = (char *)&v28.Ptr + 4;
                    p_Size = &v28.Size;
                    p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&v28.Reserved;
                    v61 = &v29;
                    v63 = (char *)&v29 + 4;
                    v65 = (char *)&v29 + 8;
                    v67 = (char *)&v29 + 12;
                    v69 = &v30;
                    v71 = (char *)&v30 + 4;
                    v73 = (char *)&v30 + 8;
                    v75 = (char *)&v30 + 12;
                    v77 = &v31;
                    v79 = (char *)&v31 + 4;
                    v81 = (char *)&v31 + 8;
                    v83 = (char *)&v31 + 12;
                    v48 = 4LL;
                    v23 = 265;
                    v50 = 4LL;
                    v52 = 8LL;
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
                    v80 = 4LL;
                    v82 = 4LL;
                    v84 = 4LL;
                    TlgWrite(
                      (TraceLoggingHProvider)&pRelatedActivityId,
                      &unk_18017D36D,
                      (LPCGUID)v15,
                      v16,
                      0x15u,
                      &pData);
                  }
                }
              }
              else
              {
                Matrix3x2Value = CExpressionValue::GetMatrix3x2Value(v4);
                v26 = *(_OWORD *)&Matrix3x2Value->m11;
                v27[0] = *(_QWORD *)&Matrix3x2Value->m[2][0];
                if ( (unsigned int)pRelatedActivityId > 4
                  && ((unsigned __int8)v21 & (unsigned __int8)qword_18019E950) != 0
                  && (v21 & qword_18019E958) == qword_18019E958 )
                {
                  v23 = *(_DWORD *)(v19 + 120);
                  *(_QWORD *)&v30 = &v23;
                  *(_QWORD *)&v31 = &v24;
                  v32 = &v25;
                  v34 = &v26;
                  v36 = (char *)&v26 + 4;
                  v38 = (char *)&v26 + 8;
                  v40 = (char *)&v26 + 12;
                  v42 = v27;
                  v44 = (char *)v27 + 4;
                  *((_QWORD *)&v30 + 1) = 4LL;
                  v24 = 104;
                  *((_QWORD *)&v31 + 1) = 4LL;
                  v33 = 8LL;
                  v35 = 4LL;
                  v37 = 4LL;
                  v39 = 4LL;
                  v41 = 4LL;
                  v43 = 4LL;
                  v45 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D406, (LPCGUID)v19, v20, 0xBu, &v28);
                }
              }
            }
            else
            {
              v26 = *(_OWORD *)pActivityId[3].Data4;
              if ( (unsigned int)pRelatedActivityId > 4
                && (qword_18019E950 & 1) != 0
                && (qword_18019E958 & 1) == qword_18019E958 )
              {
                v23 = (int)v1;
                *(_QWORD *)&v30 = &v23;
                *(_QWORD *)&v31 = &v24;
                v32 = &v25;
                v34 = &v26;
                v36 = (char *)&v26 + 4;
                v38 = (char *)&v26 + 8;
                v40 = (char *)&v26 + 12;
                *((_QWORD *)&v30 + 1) = 4LL;
                v24 = 71;
                *((_QWORD *)&v31 + 1) = 4LL;
                v33 = 8LL;
                v35 = 4LL;
                v37 = 4LL;
                v39 = 4LL;
                v41 = 4LL;
                TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D4C2, pActivityId, v1, 9u, &v28);
              }
            }
          }
          else
          {
            v26 = *(_OWORD *)pActivityId[3].Data4;
            if ( (unsigned int)pRelatedActivityId > 4
              && (qword_18019E950 & 1) != 0
              && (qword_18019E958 & 1) == qword_18019E958 )
            {
              v23 = (int)v1;
              *(_QWORD *)&v30 = &v23;
              *(_QWORD *)&v31 = &v24;
              v32 = &v25;
              v34 = &v26;
              v36 = (char *)&v26 + 4;
              v38 = (char *)&v26 + 8;
              v40 = (char *)&v26 + 12;
              *((_QWORD *)&v30 + 1) = 4LL;
              v24 = 70;
              *((_QWORD *)&v31 + 1) = 4LL;
              v33 = 8LL;
              v35 = 4LL;
              v37 = 4LL;
              v39 = 4LL;
              v41 = 4LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D46D, pActivityId, v1, 9u, &v28);
            }
          }
        }
        else
        {
          v26 = *(_OWORD *)pActivityId[3].Data4;
          if ( (unsigned int)pRelatedActivityId > 4
            && (qword_18019E950 & 1) != 0
            && (qword_18019E958 & 1) == qword_18019E958 )
          {
            v23 = (int)v1;
            *(_QWORD *)&v30 = &v23;
            *(_QWORD *)&v31 = &v24;
            v32 = &v25;
            v34 = &v26;
            v36 = (char *)&v26 + 4;
            v38 = (char *)&v26 + 8;
            v40 = (char *)&v26 + 12;
            *((_QWORD *)&v30 + 1) = 4LL;
            v24 = 69;
            *((_QWORD *)&v31 + 1) = 4LL;
            v33 = 8LL;
            v35 = 4LL;
            v37 = 4LL;
            v39 = 4LL;
            v41 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D4C2, pActivityId, v1, 9u, &v28);
          }
        }
      }
      else
      {
        Data1 = pActivityId[4].Data1;
        *(_QWORD *)&v26 = *(_QWORD *)pActivityId[3].Data4;
        DWORD2(v26) = Data1;
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_18019E950 & 1) != 0
          && (qword_18019E958 & 1) == qword_18019E958 )
        {
          v23 = (int)v1;
          *(_QWORD *)&v30 = &v23;
          *(_QWORD *)&v31 = &v24;
          v32 = &v25;
          v34 = &v26;
          v36 = (char *)&v26 + 4;
          v38 = (char *)&v26 + 8;
          *((_QWORD *)&v30 + 1) = 4LL;
          v24 = 52;
          *((_QWORD *)&v31 + 1) = 4LL;
          v33 = 8LL;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D517, pActivityId, v1, 8u, &v28);
        }
      }
    }
    else
    {
      *(_QWORD *)&v26 = *(_QWORD *)pActivityId[3].Data4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = (int)v1;
        *(_QWORD *)&v30 = &v23;
        *(_QWORD *)&v31 = &v24;
        v32 = &v25;
        v34 = &v26;
        v36 = (char *)&v26 + 4;
        *((_QWORD *)&v30 + 1) = 4LL;
        v24 = 35;
        *((_QWORD *)&v31 + 1) = 4LL;
        v33 = 8LL;
        v35 = 4LL;
        v37 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D569, pActivityId, v1, 7u, &v28);
      }
    }
  }
  else
  {
    LODWORD(v26) = *(_DWORD *)pActivityId[3].Data4;
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 1) != 0 && (qword_18019E958 & 1) == qword_18019E958 )
    {
      v23 = (int)v1;
      *(_QWORD *)&v30 = &v23;
      *(_QWORD *)&v31 = &v24;
      v32 = &v25;
      v34 = &v26;
      *((_QWORD *)&v30 + 1) = 4LL;
      v24 = 18;
      *((_QWORD *)&v31 + 1) = 4LL;
      v33 = 8LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D5B8, pActivityId, v1, 6u, &v28);
    }
  }
}
