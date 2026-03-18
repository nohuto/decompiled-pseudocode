/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x1800E5554
 * Callers:
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800E177C (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800E44C0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1800639D8 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800E4BA4 (-ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800E4E00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  unsigned __int16 *v1; // rdi
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r11
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int16 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+80h] [rbp-80h] BYREF
  char *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  char *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  char *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  char *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  char *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  char *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  char *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  char *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  char *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  char *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  char *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  __int16 *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  char *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  __int16 *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  char *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  char *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]
  int *v60; // [rsp+1D0h] [rbp+D0h]
  __int64 v61; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+1E0h] [rbp+E0h] BYREF
  char *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  int *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  WCHAR pwsz[2]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v68[252]; // [rsp+214h] [rbp+114h] BYREF

  v1 = (unsigned __int16 *)((char *)this + 1652);
  if ( *((_WORD *)this + 826) )
  {
    v12 = 0;
    QueryPerformanceCounter(&PerformanceCount);
    v3 = *v1;
    v4 = *((_DWORD *)this + 421) - v3;
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 423) / v4;
      v12 = v5;
      if ( v5 >= 0xFFFF )
        v12 = -1;
    }
    v13 = 0;
    if ( (_WORD)v3 )
    {
      v6 = *((_DWORD *)this + 425) / v3;
      v13 = v6;
      if ( v6 >= 0xFFFF )
        v13 = -1;
    }
    *(_DWORD *)pwsz = 0;
    memset_0(v68, 0, sizeof(v68));
    ConvertTelemetryInteractionTypeToString(*((_DWORD *)this + 412), (char *)pwsz);
    if ( hProvider > 4u
      && (qword_180190A80 & 0x400000000000LL) != 0
      && (qword_180190A88 & 0x400000000000LL) == qword_180190A88 )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 203));
      TlgCreateWsz(&v19, *((LPCWSTR *)this + 204));
      v21 = v7;
      v24 = (char *)this + 1654;
      v20 = (char *)this + 1640;
      v26 = (char *)this + 1656;
      v22 = v1;
      v28 = (char *)this + 1658;
      v23 = 2LL;
      v30 = (char *)this + 1660;
      v32 = (char *)this + 1662;
      v34 = (char *)this + 1664;
      v36 = (char *)this + 1666;
      v38 = (char *)this + 1668;
      v40 = (char *)this + 1672;
      v42 = (char *)this + 1676;
      v44 = (char *)this + 1680;
      v48 = (char *)this + 1688;
      v50 = &v12;
      v52 = (char *)this + 1696;
      v54 = &v13;
      v56 = (char *)this + 1704;
      v58 = (char *)this + 1706;
      v15 = *((_DWORD *)this + 411);
      v60 = &v15;
      v25 = 2LL;
      v27 = 2LL;
      v29 = 2LL;
      v31 = 2LL;
      v33 = 2LL;
      v35 = 2LL;
      v37 = 2LL;
      v39 = 2LL;
      v41 = v7;
      v43 = v7;
      v45 = v7;
      v46 = (char *)this + 1684;
      v47 = v7;
      v49 = 2LL;
      v51 = 2LL;
      v53 = 2LL;
      v55 = 2LL;
      v57 = 2LL;
      v59 = 2LL;
      v61 = v7;
      TlgCreateWsz(&v62, pwsz);
      v63 = (char *)this + 1708;
      v8 = *((_QWORD *)this + 202);
      v64 = 2LL;
      v14 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v8, PerformanceCount.QuadPart);
      v65 = &v14;
      v66 = v9;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016DD02, v10, v11, 0x1Cu, &pData);
    }
  }
}
