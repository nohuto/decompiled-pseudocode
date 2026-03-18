/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180101EF0
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800032E8 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800FFE8C (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800025E4 (-ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800032C8 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     _TlgCreateWsz @ 0x180016F98 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
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
  __int64 v10; // r11
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  __int16 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp-80h] BYREF
  char *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  char *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  char *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  char *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  char *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  char *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  char *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  char *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  char *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  char *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  char *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  char *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h]
  __int16 *v53; // [rsp+190h] [rbp+90h]
  __int64 v54; // [rsp+198h] [rbp+98h]
  char *v55; // [rsp+1A0h] [rbp+A0h]
  __int64 v56; // [rsp+1A8h] [rbp+A8h]
  __int16 *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  char *v59; // [rsp+1C0h] [rbp+C0h]
  __int64 v60; // [rsp+1C8h] [rbp+C8h]
  char *v61; // [rsp+1D0h] [rbp+D0h]
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  char *v63; // [rsp+1E0h] [rbp+E0h]
  __int64 v64; // [rsp+1E8h] [rbp+E8h]
  char *v65; // [rsp+1F0h] [rbp+F0h]
  __int64 v66; // [rsp+1F8h] [rbp+F8h]
  char *v67; // [rsp+200h] [rbp+100h]
  __int64 v68; // [rsp+208h] [rbp+108h]
  int *v69; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+220h] [rbp+120h] BYREF
  char *v72; // [rsp+230h] [rbp+130h]
  __int64 v73; // [rsp+238h] [rbp+138h]
  char *v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]
  int *v76; // [rsp+250h] [rbp+150h]
  __int64 v77; // [rsp+258h] [rbp+158h]
  WCHAR pwsz[2]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v79[252]; // [rsp+264h] [rbp+164h] BYREF

  v1 = (unsigned __int16 *)((char *)this + 1732);
  if ( *((_WORD *)this + 866) )
  {
    v13 = 0;
    QueryPerformanceCounter(&PerformanceCount);
    v3 = *v1;
    v4 = *((_DWORD *)this + 442) - v3;
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 451) / v4;
      v13 = v5;
      if ( v5 >= 0xFFFF )
        v13 = -1;
    }
    v14 = 0;
    if ( (_WORD)v3 )
    {
      v6 = *((_DWORD *)this + 453) / v3;
      v14 = v6;
      if ( v6 >= 0xFFFF )
        v14 = -1;
    }
    *(_DWORD *)pwsz = 0;
    memset_0(v79, 0, sizeof(v79));
    ConvertTelemetryInteractionTypeToString(*((_DWORD *)this + 432), pwsz);
    if ( (unsigned int)hProvider > 4
      && (qword_18019E910 & 0x400000000002LL) != 0
      && (qword_18019E918 & 0x400000000002LL) == qword_18019E918 )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 213));
      TlgCreateWsz(&v20, *((LPCWSTR *)this + 214));
      v22 = v7;
      v25 = (char *)this + 1734;
      v21 = (char *)this + 1720;
      v27 = (char *)this + 1736;
      v29 = (char *)this + 1738;
      v31 = (char *)this + 1740;
      v33 = (char *)this + 1742;
      v35 = (char *)this + 1744;
      v37 = (char *)this + 1746;
      v39 = (char *)this + 1748;
      v41 = (char *)this + 1752;
      v43 = (char *)this + 1756;
      v45 = (char *)this + 1760;
      v47 = (char *)this + 1764;
      v51 = (char *)this + 1802;
      v53 = &v13;
      v55 = (char *)this + 1808;
      v57 = &v14;
      v59 = (char *)this + 1816;
      v61 = (char *)this + 1818;
      v63 = (char *)this + 1772;
      v65 = (char *)this + 1782;
      v67 = (char *)this + 1792;
      v16 = *((_DWORD *)this + 431);
      v69 = &v16;
      v23 = v1;
      v24 = 2LL;
      v26 = 2LL;
      v28 = 2LL;
      v30 = 2LL;
      v32 = 2LL;
      v34 = 2LL;
      v36 = 2LL;
      v38 = 2LL;
      v40 = 2LL;
      v42 = v7;
      v44 = v7;
      v46 = v7;
      v48 = 2LL;
      v49 = (char *)this + 1768;
      v50 = v7;
      v52 = 2LL;
      v54 = 2LL;
      v56 = 2LL;
      v58 = 2LL;
      v60 = 2LL;
      v62 = 2LL;
      v64 = 10LL;
      v66 = 10LL;
      v68 = 10LL;
      v70 = v7;
      TlgCreateWsz(&v71, pwsz);
      v72 = (char *)this + 1820;
      v8 = *((_QWORD *)this + 212);
      v73 = 2LL;
      v74 = (char *)this + 1824;
      v75 = v9;
      v15 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v8, PerformanceCount.QuadPart);
      v76 = &v15;
      v77 = v10;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CADA, v11, v12, 0x21u, &pData);
    }
  }
}
