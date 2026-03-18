/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18001CA90
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18001C628 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180113DF0 (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001C608 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@@Z @ 0x18001D014 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r10
  LPCWSTR v9; // r11
  __int64 v10; // rdx
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
  __int64 v49; // [rsp+170h] [rbp+70h]
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
  char *v69; // [rsp+210h] [rbp+110h]
  __int64 v70; // [rsp+218h] [rbp+118h]
  int *v71; // [rsp+220h] [rbp+120h]
  __int64 v72; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+230h] [rbp+130h] BYREF
  char *v74; // [rsp+240h] [rbp+140h]
  __int64 v75; // [rsp+248h] [rbp+148h]
  char *v76; // [rsp+250h] [rbp+150h]
  __int64 v77; // [rsp+258h] [rbp+158h]
  int *v78; // [rsp+260h] [rbp+160h]
  __int64 v79; // [rsp+268h] [rbp+168h]

  v1 = (unsigned __int16 *)((char *)this + 1732);
  if ( *((_WORD *)this + 866) )
  {
    v13 = 0;
    QueryPerformanceCounter(&PerformanceCount);
    v4 = *v1;
    v5 = *((_DWORD *)this + 442) - v4;
    if ( (_DWORD)v5 )
    {
      v3 = *((_DWORD *)this + 454) % (unsigned int)v5;
      v6 = *((_DWORD *)this + 454) / (unsigned int)v5;
      v13 = v6;
      if ( v6 >= 0xFFFF )
        v13 = -1;
    }
    v14 = 0;
    if ( (_WORD)v4 )
    {
      v3 = *((_DWORD *)this + 456) % v4;
      v7 = *((_DWORD *)this + 456) / v4;
      v14 = v7;
      if ( v7 >= 0xFFFF )
        v14 = -1;
    }
    ConvertTelemetryInteractionTypeToString(*((unsigned int *)this + 432), v3, v5, 0xFFFFLL);
    if ( dword_1801EA780 > 4u
      && (qword_1801EA790 & 0x400000000002LL) != 0
      && (qword_1801EA798 & 0x400000000002LL) == qword_1801EA798 )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 213));
      TlgCreateWsz(&v20, *((LPCWSTR *)this + 214));
      v22 = 4LL;
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
      v51 = (char *)this + 1812;
      v53 = &v13;
      v55 = (char *)this + 1820;
      v57 = &v14;
      v59 = (char *)this + 1828;
      v61 = (char *)this + 1830;
      v63 = (char *)this + 1772;
      v65 = (char *)this + 1782;
      v67 = (char *)this + 1792;
      v69 = (char *)this + 1802;
      v15 = *((_DWORD *)this + 431);
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
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 2LL;
      v49 = v8;
      v50 = 4LL;
      v52 = 2LL;
      v54 = 2LL;
      v56 = 2LL;
      v58 = 2LL;
      v60 = 2LL;
      v62 = 2LL;
      v64 = 10LL;
      v66 = 10LL;
      v68 = 10LL;
      v70 = 10LL;
      v72 = 4LL;
      v71 = &v15;
      TlgCreateWsz(&v73, v9);
      v74 = (char *)this + 1832;
      v10 = *((_QWORD *)this + 212);
      v75 = 2LL;
      v76 = (char *)this + 1836;
      v77 = 4LL;
      v16 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v10, PerformanceCount.QuadPart);
      v78 = &v16;
      v79 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801EA780, &unk_1801C31A6, v11, v12, 0x22u, &pData);
    }
  }
}
