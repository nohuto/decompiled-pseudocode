/*
 * XREFs of ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180146F10
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180146EB8 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CBaseExpression::LogSetOutputValue(CBaseExpression *this)
{
  __int64 v1; // rax
  __int64 v3; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  char *v11; // rdi
  __int64 v12; // r10
  CBaseExpression *v13; // r11
  const WCHAR *DebugInfo; // rax
  __int64 v15; // r11
  __int64 v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  char *v19; // rdi
  __int64 v20; // r10
  CBaseExpression *v21; // r11
  const WCHAR *v22; // rax
  __int64 v23; // r11
  __int64 v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  __int64 v27; // r10
  CBaseExpression *v28; // r11
  const WCHAR *v29; // rax
  __int64 v30; // r11
  __int64 v31; // rcx
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  __int64 v34; // r10
  CBaseExpression *v35; // r11
  const WCHAR *v36; // rax
  __int64 v37; // r11
  __int64 v38; // rcx
  LPCGUID v39; // r8
  LPCGUID v40; // r9
  __int64 v41; // r10
  CBaseExpression *v42; // r11
  const WCHAR *v43; // rax
  __int64 v44; // r11
  __int64 v45; // rcx
  LPCGUID v46; // r8
  LPCGUID v47; // r9
  int v48; // eax
  __int64 v49; // r10
  CBaseExpression *v50; // r11
  const WCHAR *v51; // rax
  __int64 v52; // r11
  __int64 v53; // rcx
  LPCGUID v54; // r8
  LPCGUID v55; // r9
  __int64 v56; // r10
  CBaseExpression *v57; // r11
  const WCHAR *v58; // rax
  __int64 v59; // r11
  __int64 v60; // rcx
  LPCGUID v61; // r8
  LPCGUID v62; // r9
  __int64 v63; // r10
  __int64 cData; // rbx
  CBaseExpression *v65; // r11
  const WCHAR *v66; // rax
  __int64 v67; // r11
  __int64 v68; // rcx
  LPCGUID v69; // r8
  LPCGUID v70; // r9
  int TracingCookie; // [rsp+38h] [rbp-D0h] BYREF
  int v72; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v73; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v75; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *p_TracingCookie; // [rsp+88h] [rbp-80h]
  __int64 v78; // [rsp+90h] [rbp-78h]
  int *v79; // [rsp+98h] [rbp-70h]
  __int64 v80; // [rsp+A0h] [rbp-68h]
  __int64 *v81; // [rsp+A8h] [rbp-60h]
  __int64 v82; // [rsp+B0h] [rbp-58h]
  __int64 *v83; // [rsp+B8h] [rbp-50h]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v89; // [rsp+108h] [rbp+0h]
  __int64 v90; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v92; // [rsp+128h] [rbp+20h]
  __int64 v93; // [rsp+130h] [rbp+28h]
  char *v94; // [rsp+138h] [rbp+30h]
  __int64 v95; // [rsp+140h] [rbp+38h]
  char *v96; // [rsp+148h] [rbp+40h]
  __int64 v97; // [rsp+150h] [rbp+48h]
  char *v98; // [rsp+158h] [rbp+50h]
  __int64 v99; // [rsp+160h] [rbp+58h]
  char *v100; // [rsp+168h] [rbp+60h]
  __int64 v101; // [rsp+170h] [rbp+68h]
  char *v102; // [rsp+178h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+78h]
  char *v104; // [rsp+188h] [rbp+80h]
  __int64 v105; // [rsp+190h] [rbp+88h]
  char *v106; // [rsp+198h] [rbp+90h]
  __int64 v107; // [rsp+1A0h] [rbp+98h]
  char *v108; // [rsp+1A8h] [rbp+A0h]
  __int64 v109; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v111; // [rsp+1C8h] [rbp+C0h]
  __int64 v112; // [rsp+1D0h] [rbp+C8h]

  v1 = *((_QWORD *)this + 31);
  v74 = 0LL;
  if ( !v1 )
  {
    v74 = 0LL;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v1 == 1 )
  {
    v3 = *(unsigned __int8 *)(v1 + 8);
  }
  else
  {
    if ( *(_DWORD *)v1 != 2 )
      goto LABEL_8;
    v3 = *(_QWORD *)(v1 + 8);
  }
  v74 = v3;
LABEL_8:
  v4 = *((_DWORD *)this + 48) - 18;
  if ( v4 )
  {
    v5 = v4 - 17;
    if ( v5 )
    {
      v6 = v5 - 17;
      if ( v6 )
      {
        v7 = v6 - 17;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              v10 = v9 - 33;
              if ( v10 )
              {
                if ( v10 == 161 )
                {
                  v11 = (char *)this + 128;
                  if ( (unsigned int)pRelatedActivityId > 4
                    && (qword_1801EAA90 & 1) != 0
                    && (qword_1801EAA98 & 1) == qword_1801EAA98 )
                  {
                    TracingCookie = CBaseExpression::GetTracingCookie(this);
                    v78 = v12;
                    p_TracingCookie = &TracingCookie;
                    v79 = &v72;
                    v81 = &v74;
                    v85.Ptr = (ULONGLONG)(v11 + 4);
                    v86.Ptr = (ULONGLONG)(v11 + 8);
                    v87.Ptr = (ULONGLONG)(v11 + 12);
                    v88.Ptr = (ULONGLONG)(v11 + 16);
                    v89 = (__int64 *)(v11 + 20);
                    v91.Ptr = (ULONGLONG)(v11 + 24);
                    v92 = (__int64 *)(v11 + 28);
                    v94 = v11 + 32;
                    v96 = v11 + 36;
                    v98 = v11 + 40;
                    v100 = v11 + 44;
                    v102 = v11 + 48;
                    v104 = v11 + 52;
                    v106 = v11 + 56;
                    v108 = v11 + 60;
                    v72 = 265;
                    v80 = v12;
                    v82 = 8LL;
                    v83 = (__int64 *)v11;
                    v84 = v12;
                    *(_QWORD *)&v85.Size = v12;
                    *(_QWORD *)&v86.Size = v12;
                    *(_QWORD *)&v87.Size = v12;
                    *(_QWORD *)&v88.Size = v12;
                    v90 = v12;
                    *(_QWORD *)&v91.Size = v12;
                    v93 = v12;
                    v95 = v12;
                    v97 = v12;
                    v99 = v12;
                    v101 = v12;
                    v103 = v12;
                    v105 = v12;
                    v107 = v12;
                    v109 = v12;
                    DebugInfo = CBaseExpression::GetDebugInfo(v13);
                    TlgCreateWsz(&pDesc, DebugInfo);
                    v16 = *(_QWORD *)(v15 + 216);
                    v111 = &v73;
                    v73 = v16;
                    v112 = 8LL;
                    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3E36, v17, v18, 0x17u, &pData);
                  }
                }
              }
              else
              {
                v19 = (char *)this + 128;
                if ( (unsigned int)pRelatedActivityId > 4
                  && (qword_1801EAA90 & 1) != 0
                  && (qword_1801EAA98 & 1) == qword_1801EAA98 )
                {
                  v72 = CBaseExpression::GetTracingCookie(this);
                  v78 = v20;
                  p_TracingCookie = &v72;
                  v79 = &TracingCookie;
                  v81 = &v74;
                  v85.Ptr = (ULONGLONG)(v19 + 4);
                  v86.Ptr = (ULONGLONG)(v19 + 8);
                  v87.Ptr = (ULONGLONG)(v19 + 12);
                  v88.Ptr = (ULONGLONG)(v19 + 16);
                  v89 = (__int64 *)(v19 + 20);
                  TracingCookie = 104;
                  v80 = v20;
                  v82 = 8LL;
                  v83 = (__int64 *)v19;
                  v84 = v20;
                  *(_QWORD *)&v85.Size = v20;
                  *(_QWORD *)&v86.Size = v20;
                  *(_QWORD *)&v87.Size = v20;
                  *(_QWORD *)&v88.Size = v20;
                  v90 = v20;
                  v22 = CBaseExpression::GetDebugInfo(v21);
                  TlgCreateWsz(&v91, v22);
                  v24 = *(_QWORD *)(v23 + 216);
                  v92 = &v73;
                  v73 = v24;
                  v93 = 8LL;
                  TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3EE3, v25, v26, 0xDu, &pData);
                }
              }
            }
            else
            {
              v75 = *((_OWORD *)this + 8);
              if ( (unsigned int)pRelatedActivityId > 4
                && (qword_1801EAA90 & 1) != 0
                && (qword_1801EAA98 & 1) == qword_1801EAA98 )
              {
                v72 = CBaseExpression::GetTracingCookie(this);
                v78 = v27;
                p_TracingCookie = &v72;
                v79 = &TracingCookie;
                v81 = &v74;
                v83 = (__int64 *)&v75;
                v85.Ptr = (ULONGLONG)&v75 + 4;
                v86.Ptr = (ULONGLONG)&v75 + 8;
                v87.Ptr = (ULONGLONG)&v75 + 12;
                TracingCookie = 71;
                v80 = v27;
                v82 = 8LL;
                v84 = v27;
                *(_QWORD *)&v85.Size = v27;
                *(_QWORD *)&v86.Size = v27;
                *(_QWORD *)&v87.Size = v27;
                v29 = CBaseExpression::GetDebugInfo(v28);
                TlgCreateWsz(&v88, v29);
                v31 = *(_QWORD *)(v30 + 216);
                v89 = &v73;
                v73 = v31;
                v90 = 8LL;
                TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3FC7, v32, v33, 0xBu, &pData);
              }
            }
          }
          else
          {
            v75 = *((_OWORD *)this + 8);
            if ( (unsigned int)pRelatedActivityId > 4
              && (qword_1801EAA90 & 1) != 0
              && (qword_1801EAA98 & 1) == qword_1801EAA98 )
            {
              v72 = CBaseExpression::GetTracingCookie(this);
              v78 = v34;
              p_TracingCookie = &v72;
              v79 = &TracingCookie;
              v81 = &v74;
              v83 = (__int64 *)&v75;
              v85.Ptr = (ULONGLONG)&v75 + 4;
              v86.Ptr = (ULONGLONG)&v75 + 8;
              v87.Ptr = (ULONGLONG)&v75 + 12;
              TracingCookie = 70;
              v80 = v34;
              v82 = 8LL;
              v84 = v34;
              *(_QWORD *)&v85.Size = v34;
              *(_QWORD *)&v86.Size = v34;
              *(_QWORD *)&v87.Size = v34;
              v36 = CBaseExpression::GetDebugInfo(v35);
              TlgCreateWsz(&v88, v36);
              v38 = *(_QWORD *)(v37 + 216);
              v89 = &v73;
              v73 = v38;
              v90 = 8LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3F5E, v39, v40, 0xBu, &pData);
            }
          }
        }
        else
        {
          v75 = *((_OWORD *)this + 8);
          if ( (unsigned int)pRelatedActivityId > 4
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v72 = CBaseExpression::GetTracingCookie(this);
            v78 = v41;
            p_TracingCookie = &v72;
            v79 = &TracingCookie;
            v81 = &v74;
            v83 = (__int64 *)&v75;
            v85.Ptr = (ULONGLONG)&v75 + 4;
            v86.Ptr = (ULONGLONG)&v75 + 8;
            v87.Ptr = (ULONGLONG)&v75 + 12;
            TracingCookie = 69;
            v80 = v41;
            v82 = 8LL;
            v84 = v41;
            *(_QWORD *)&v85.Size = v41;
            *(_QWORD *)&v86.Size = v41;
            *(_QWORD *)&v87.Size = v41;
            v43 = CBaseExpression::GetDebugInfo(v42);
            TlgCreateWsz(&v88, v43);
            v45 = *(_QWORD *)(v44 + 216);
            v89 = &v73;
            v73 = v45;
            v90 = 8LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3FC7, v46, v47, 0xBu, &pData);
          }
        }
      }
      else
      {
        v48 = *((_DWORD *)this + 34);
        *(_QWORD *)&v75 = *((_QWORD *)this + 16);
        DWORD2(v75) = v48;
        if ( (unsigned int)pRelatedActivityId > 4
          && (qword_1801EAA90 & 1) != 0
          && (qword_1801EAA98 & 1) == qword_1801EAA98 )
        {
          v72 = CBaseExpression::GetTracingCookie(this);
          v78 = v49;
          p_TracingCookie = &v72;
          v79 = &TracingCookie;
          v81 = &v74;
          v83 = (__int64 *)&v75;
          v85.Ptr = (ULONGLONG)&v75 + 4;
          v86.Ptr = (ULONGLONG)&v75 + 8;
          TracingCookie = 52;
          v80 = v49;
          v82 = 8LL;
          v84 = v49;
          *(_QWORD *)&v85.Size = v49;
          *(_QWORD *)&v86.Size = v49;
          v51 = CBaseExpression::GetDebugInfo(v50);
          TlgCreateWsz(&v87, v51);
          v53 = *(_QWORD *)(v52 + 216);
          v88.Ptr = (ULONGLONG)&v73;
          v73 = v53;
          *(_QWORD *)&v88.Size = 8LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4030, v54, v55, 0xAu, &pData);
        }
      }
    }
    else
    {
      v73 = *((_QWORD *)this + 16);
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        v72 = CBaseExpression::GetTracingCookie(this);
        v78 = v56;
        p_TracingCookie = &v72;
        v79 = &TracingCookie;
        v81 = &v74;
        v83 = &v73;
        v85.Ptr = (ULONGLONG)&v73 + 4;
        TracingCookie = 35;
        v80 = v56;
        v82 = 8LL;
        v84 = v56;
        *(_QWORD *)&v85.Size = v56;
        v58 = CBaseExpression::GetDebugInfo(v57);
        TlgCreateWsz(&v86, v58);
        v60 = *(_QWORD *)(v59 + 216);
        v87.Ptr = (ULONGLONG)&v75;
        *(_QWORD *)&v75 = v60;
        *(_QWORD *)&v87.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4096, v61, v62, 9u, &pData);
      }
    }
  }
  else
  {
    LODWORD(v73) = *((_DWORD *)this + 32);
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 1) != 0 && (qword_1801EAA98 & 1) == qword_1801EAA98 )
    {
      v72 = CBaseExpression::GetTracingCookie(this);
      cData = (unsigned int)(v63 + 4);
      v78 = v63;
      p_TracingCookie = &v72;
      TracingCookie = 18;
      v79 = &TracingCookie;
      v81 = &v74;
      v83 = &v73;
      v80 = v63;
      v82 = cData;
      v84 = v63;
      v66 = CBaseExpression::GetDebugInfo(v65);
      TlgCreateWsz(&v85, v66);
      v68 = *(_QWORD *)(v67 + 216);
      v86.Ptr = (ULONGLONG)&v75;
      *(_QWORD *)&v75 = v68;
      *(_QWORD *)&v86.Size = cData;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C40F9, v69, v70, cData, &pData);
    }
  }
}
