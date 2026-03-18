/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800A1CAC
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001C608 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001C97C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@@Z @ 0x18001D014 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     Template_xxxqx @ 0x180117854 (Template_xxxqx.c)
 *     _TlgCreateWsz @ 0x180117900 (_TlgCreateWsz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        signed __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  int v10; // r15d
  unsigned __int64 v12; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v14; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v15; // rbx
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  double v20; // xmm1_8
  double v21; // xmm0_8
  unsigned __int64 v22; // rax
  int v23; // ecx
  const WCHAR *v24; // rsi
  int v25; // ecx
  __int64 v26; // r11
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // r11
  CTelemetryTouchLatencyAnalysis *v31; // rcx
  __int64 v32; // r11
  CTelemetryTouchLatencyAnalysis *v33; // rcx
  __int64 v34; // r11
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  __int16 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+90h] [rbp-70h] BYREF
  int *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int16 *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+C0h] [rbp-40h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  int *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  int *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  int *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]

  v10 = a2;
  if ( a7 >= a3 )
  {
    v12 = *((_QWORD *)this + 230);
    if ( v12 )
    {
      Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
      v15 = Scenario;
      if ( Scenario )
      {
        v16 = 0xFFFF;
        if ( *((_WORD *)Scenario + 49) )
        {
          v17 = (v14 - a3) / v12;
          v18 = (v14 - a3) % v12;
          *((_DWORD *)v15 + 23) += v17;
          LOBYTE(v19) = v17;
          if ( (unsigned int)v17 < 0xFFFF )
            v16 = v17;
          if ( *((_WORD *)v15 + 48) > (unsigned __int16)v16 )
            LOWORD(v16) = *((_WORD *)v15 + 48);
          *((_WORD *)v15 + 48) = v16;
        }
        else
        {
          v22 = (v14 - *((_QWORD *)Scenario + 5)) / v12;
          v18 = (v14 - *((_QWORD *)v15 + 5)) % v12;
          v19 = (v14 - *((_QWORD *)v15 + 5)) / v12;
          if ( (unsigned int)v22 < 0xFFFF )
            v16 = v22;
          *((_WORD *)v15 + 49) = v16;
        }
        ++*((_WORD *)v15 + 44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxqx(v16, v18, v10, a3, v14, v19, a8);
        v20 = (double)((int)a4 - (int)a3);
        if ( (__int64)(a4 - a3) < 0 )
          v20 = v20 + 1.844674407370955e19;
        v21 = (double)(int)a6;
        if ( a6 < 0 )
          v21 = v21 + 1.844674407370955e19;
        if ( v20 > v21 * 1.5 )
        {
          v23 = *((_DWORD *)v15 + 17);
          ++*((_WORD *)v15 + 76);
          v24 = ConvertTelemetryInteractionTypeToString(v23);
          QueryPerformanceCounter(&PerformanceCount);
          if ( dword_1801EA780 > 4u && (qword_1801EA790 & 2) != 0 && (qword_1801EA798 & 2) == qword_1801EA798 )
          {
            TlgCreateWsz(&pDesc, *((LPCWSTR *)v15 + 1));
            TlgCreateWsz(&v45, *((LPCWSTR *)v15 + 2));
            v25 = *((_DWORD *)v15 + 6);
            v46 = &v38;
            v37 = *((_WORD *)v15 + 32);
            v38 = v25;
            v48 = &v37;
            v47 = v26;
            v49 = v27;
            TlgCreateWsz(&v50, v24);
            v53 = &a5;
            v51 = v15;
            v55 = (char *)v15 + 28;
            v52 = 8LL;
            v57 = (char *)v15 + 30;
            v54 = v28;
            v56 = v29;
            v58 = v29;
            v39 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, a3, PerformanceCount.QuadPart);
            v59 = &v39;
            v60 = v30;
            v40 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v31, a4, PerformanceCount.QuadPart);
            v62 = v32;
            v61 = &v40;
            v41 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v33, a3, a4);
            v63 = &v41;
            v64 = v34;
            TlgWrite((TraceLoggingHProvider)&dword_1801EA780, &unk_1801C33F5, v35, v36, 0xEu, &pData);
          }
        }
      }
    }
  }
}
