/*
 * XREFs of ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180147C7C
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180019790 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180146EB8 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 */

void __fastcall CExpression::LogCacheAccess(CExpression *this, __int64 a2, int a3, struct CExpressionValue *a4)
{
  __int64 v6; // r10
  const WCHAR *v7; // rax
  __int64 v8; // rcx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  __int64 v11; // r10
  const WCHAR *v12; // rax
  __int64 v13; // rcx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // r10
  const WCHAR *v17; // rax
  __int64 v18; // rcx
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  __int64 v21; // r10
  const WCHAR *v22; // rax
  __int64 v23; // rcx
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  __int64 v26; // r10
  const WCHAR *v27; // rax
  __int64 v28; // rcx
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  int v31; // eax
  __int64 v32; // r10
  const WCHAR *v33; // rax
  __int64 v34; // rcx
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  __int64 v37; // r10
  const WCHAR *v38; // rax
  __int64 v39; // rcx
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  __int64 v42; // r10
  const WCHAR *v43; // rax
  const GUID *v44; // r8
  const GUID *v45; // r9
  __int64 v46; // r10
  const WCHAR *DebugInfo; // rax
  __int64 v48; // rcx
  int v49; // [rsp+38h] [rbp-D0h] BYREF
  int TracingCookie; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v51; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *p_TracingCookie; // [rsp+78h] [rbp-90h]
  __int64 v55; // [rsp+80h] [rbp-88h]
  int *v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h]
  const char *v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  int *v60; // [rsp+A8h] [rbp-60h]
  __int64 v61; // [rsp+B0h] [rbp-58h]
  int *v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+F8h] [rbp-10h] BYREF
  char *v68; // [rsp+108h] [rbp+0h]
  __int64 v69; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+118h] [rbp+10h] BYREF
  char *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  char *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]
  char *v75; // [rsp+148h] [rbp+40h]
  __int64 v76; // [rsp+150h] [rbp+48h]
  char *v77; // [rsp+158h] [rbp+50h]
  __int64 v78; // [rsp+160h] [rbp+58h]
  char *v79; // [rsp+168h] [rbp+60h]
  __int64 v80; // [rsp+170h] [rbp+68h]
  char *v81; // [rsp+178h] [rbp+70h]
  __int64 v82; // [rsp+180h] [rbp+78h]
  char *v83; // [rsp+188h] [rbp+80h]
  __int64 v84; // [rsp+190h] [rbp+88h]
  char *v85; // [rsp+198h] [rbp+90h]
  __int64 v86; // [rsp+1A0h] [rbp+98h]
  char *v87; // [rsp+1A8h] [rbp+A0h]
  __int64 v88; // [rsp+1B0h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  int v92; // [rsp+208h] [rbp+100h] BYREF

  v92 = a3;
  switch ( *((_DWORD *)a4 + 16) )
  {
    case 0x11:
      *(float *)&v49 = (float)*(unsigned __int8 *)a4;
      if ( (unsigned int)pRelatedActivityId <= 4
        || (qword_1801EAA90 & 1) == 0
        || (qword_1801EAA98 & 1) != qword_1801EAA98 )
      {
        return;
      }
      LODWORD(v51) = CBaseExpression::GetTracingCookie(this);
      v55 = v46;
      p_TracingCookie = (int *)&v51;
      v56 = &v92;
      v58 = "Read";
      v60 = &TracingCookie;
      v62 = &v49;
      v57 = v46;
      v59 = 5LL;
      TracingCookie = 17;
      v61 = v46;
      v63 = v46;
      DebugInfo = CBaseExpression::GetDebugInfo(this);
      TlgCreateWsz(&v64, DebugInfo);
LABEL_46:
      v48 = *((_QWORD *)this + 27);
      v65.Ptr = (ULONGLONG)&v52;
      *(_QWORD *)&v52 = v48;
      *(_QWORD *)&v65.Size = 8LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4478, v44, v45, 9u, &pData);
      return;
    case 0x12:
      LODWORD(v51) = *(_DWORD *)a4;
      if ( (unsigned int)pRelatedActivityId <= 4
        || (qword_1801EAA90 & 1) == 0
        || (qword_1801EAA98 & 1) != qword_1801EAA98 )
      {
        return;
      }
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v55 = v42;
      p_TracingCookie = &TracingCookie;
      v56 = &v92;
      v58 = "Read";
      v60 = &v49;
      v62 = (int *)&v51;
      v57 = v42;
      v59 = 5LL;
      v49 = 18;
      v61 = v42;
      v63 = v42;
      v43 = CBaseExpression::GetDebugInfo(this);
      TlgCreateWsz(&v64, v43);
      goto LABEL_46;
    case 0x23:
      v51 = *(_QWORD *)a4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v55 = v37;
        p_TracingCookie = &TracingCookie;
        v56 = &v92;
        v58 = "Read";
        v60 = &v49;
        v62 = (int *)&v51;
        v64.Ptr = (ULONGLONG)&v51 + 4;
        v57 = v37;
        v59 = 5LL;
        v49 = 35;
        v61 = v37;
        v63 = v37;
        *(_QWORD *)&v64.Size = v37;
        v38 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v65, v38);
        v39 = *((_QWORD *)this + 27);
        v66.Ptr = (ULONGLONG)&v52;
        *(_QWORD *)&v52 = v39;
        *(_QWORD *)&v66.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4405, v40, v41, 0xAu, &pData);
      }
      break;
    case 0x34:
      v31 = *((_DWORD *)a4 + 2);
      *(_QWORD *)&v52 = *(_QWORD *)a4;
      DWORD2(v52) = v31;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v55 = v32;
        p_TracingCookie = &TracingCookie;
        v56 = &v92;
        v58 = "Read";
        v60 = &v49;
        v62 = (int *)&v52;
        v64.Ptr = (ULONGLONG)&v52 + 4;
        v65.Ptr = (ULONGLONG)&v52 + 8;
        v57 = v32;
        v59 = 5LL;
        v49 = 52;
        v61 = v32;
        v63 = v32;
        *(_QWORD *)&v64.Size = v32;
        *(_QWORD *)&v65.Size = v32;
        v33 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v66, v33);
        v34 = *((_QWORD *)this + 27);
        v67.Ptr = (ULONGLONG)&v51;
        v51 = v34;
        *(_QWORD *)&v67.Size = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C438F, v35, v36, 0xBu, &pData);
      }
      break;
    case 0x45:
      v52 = *(_OWORD *)a4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v55 = v26;
        p_TracingCookie = &TracingCookie;
        v56 = &v92;
        v58 = "Read";
        v60 = &v49;
        v62 = (int *)&v52;
        v64.Ptr = (ULONGLONG)&v52 + 4;
        v65.Ptr = (ULONGLONG)&v52 + 8;
        v66.Ptr = (ULONGLONG)&v52 + 12;
        v57 = v26;
        v59 = 5LL;
        v49 = 69;
        v61 = v26;
        v63 = v26;
        *(_QWORD *)&v64.Size = v26;
        *(_QWORD *)&v65.Size = v26;
        *(_QWORD *)&v66.Size = v26;
        v27 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v67, v27);
        v28 = *((_QWORD *)this + 27);
        v68 = (char *)&v51;
        v51 = v28;
        v69 = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4316, v29, v30, 0xCu, &pData);
      }
      break;
    case 0x46:
      v52 = *(_OWORD *)a4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v55 = v21;
        p_TracingCookie = &TracingCookie;
        v56 = &v92;
        v58 = "Read";
        v60 = &v49;
        v62 = (int *)&v52;
        v64.Ptr = (ULONGLONG)&v52 + 4;
        v65.Ptr = (ULONGLONG)&v52 + 8;
        v66.Ptr = (ULONGLONG)&v52 + 12;
        v57 = v21;
        v59 = 5LL;
        v49 = 70;
        v61 = v21;
        v63 = v21;
        *(_QWORD *)&v64.Size = v21;
        *(_QWORD *)&v65.Size = v21;
        *(_QWORD *)&v66.Size = v21;
        v22 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v67, v22);
        v23 = *((_QWORD *)this + 27);
        v68 = (char *)&v51;
        v51 = v23;
        v69 = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C429D, v24, v25, 0xCu, &pData);
      }
      break;
    case 0x47:
      v52 = *(_OWORD *)a4;
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v55 = v16;
        p_TracingCookie = &TracingCookie;
        v56 = &v92;
        v58 = "Read";
        v60 = &v49;
        v62 = (int *)&v52;
        v64.Ptr = (ULONGLONG)&v52 + 4;
        v65.Ptr = (ULONGLONG)&v52 + 8;
        v66.Ptr = (ULONGLONG)&v52 + 12;
        v57 = v16;
        v59 = 5LL;
        v49 = 71;
        v61 = v16;
        v63 = v16;
        *(_QWORD *)&v64.Size = v16;
        *(_QWORD *)&v65.Size = v16;
        *(_QWORD *)&v66.Size = v16;
        v17 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v67, v17);
        v18 = *((_QWORD *)this + 27);
        v68 = (char *)&v51;
        v51 = v18;
        v69 = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4316, v19, v20, 0xCu, &pData);
      }
      break;
    case 0x68:
      if ( (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        TracingCookie = CBaseExpression::GetTracingCookie(this);
        v55 = v11;
        p_TracingCookie = &TracingCookie;
        v56 = &v92;
        v58 = "Read";
        v60 = &v49;
        v64.Ptr = (ULONGLONG)a4 + 4;
        v65.Ptr = (ULONGLONG)a4 + 8;
        v66.Ptr = (ULONGLONG)a4 + 12;
        v67.Ptr = (ULONGLONG)a4 + 16;
        v68 = (char *)a4 + 20;
        v57 = v11;
        v59 = 5LL;
        v49 = 104;
        v61 = v11;
        v62 = (int *)a4;
        v63 = v11;
        *(_QWORD *)&v64.Size = v11;
        *(_QWORD *)&v65.Size = v11;
        *(_QWORD *)&v66.Size = v11;
        *(_QWORD *)&v67.Size = v11;
        v69 = v11;
        v12 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&v70, v12);
        v13 = *((_QWORD *)this + 27);
        v71 = (char *)&v51;
        v51 = v13;
        v72 = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4212, v14, v15, 0xEu, &pData);
      }
      break;
    default:
      if ( *((_DWORD *)a4 + 16) == 265
        && (unsigned int)pRelatedActivityId > 4
        && (qword_1801EAA90 & 1) != 0
        && (qword_1801EAA98 & 1) == qword_1801EAA98 )
      {
        v49 = CBaseExpression::GetTracingCookie(this);
        v55 = v6;
        p_TracingCookie = &v49;
        v56 = &v92;
        v58 = "Read";
        v60 = &TracingCookie;
        v64.Ptr = (ULONGLONG)a4 + 4;
        v65.Ptr = (ULONGLONG)a4 + 8;
        v66.Ptr = (ULONGLONG)a4 + 12;
        v67.Ptr = (ULONGLONG)a4 + 16;
        v68 = (char *)a4 + 20;
        v70.Ptr = (ULONGLONG)a4 + 24;
        v71 = (char *)a4 + 28;
        v73 = (char *)a4 + 32;
        v75 = (char *)a4 + 36;
        v77 = (char *)a4 + 40;
        v79 = (char *)a4 + 44;
        v81 = (char *)a4 + 48;
        v83 = (char *)a4 + 52;
        v85 = (char *)a4 + 56;
        v87 = (char *)a4 + 60;
        v57 = v6;
        v59 = 5LL;
        TracingCookie = 265;
        v61 = v6;
        v62 = (int *)a4;
        v63 = v6;
        *(_QWORD *)&v64.Size = v6;
        *(_QWORD *)&v65.Size = v6;
        *(_QWORD *)&v66.Size = v6;
        *(_QWORD *)&v67.Size = v6;
        v69 = v6;
        *(_QWORD *)&v70.Size = v6;
        v72 = v6;
        v74 = v6;
        v76 = v6;
        v78 = v6;
        v80 = v6;
        v82 = v6;
        v84 = v6;
        v86 = v6;
        v88 = v6;
        v7 = CBaseExpression::GetDebugInfo(this);
        TlgCreateWsz(&pDesc, v7);
        v8 = *((_QWORD *)this + 27);
        v90 = &v51;
        v51 = v8;
        v91 = 8LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4155, v9, v10, 0x18u, &pData);
      }
      break;
  }
}
