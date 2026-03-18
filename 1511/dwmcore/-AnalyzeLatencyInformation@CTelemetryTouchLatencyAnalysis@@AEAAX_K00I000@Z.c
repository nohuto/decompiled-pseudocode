/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K00I000@Z @ 0x1800AFAA8
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18008DCB0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@PEAG@Z @ 0x1800025E4 (-ConvertTelemetryInteractionTypeToString@@YAJW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0001@@.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x1800032C8 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180003550 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     _TlgCreateWsz @ 0x180016F98 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     Template_xxxqx @ 0x180102378 (Template_xxxqx.c)
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
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v13; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v14; // rbx
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  double v20; // xmm1_8
  double v21; // xmm0_8
  int v22; // ecx
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // r11
  CTelemetryTouchLatencyAnalysis *v28; // rcx
  __int64 v29; // r11
  CTelemetryTouchLatencyAnalysis *v30; // rcx
  __int64 v31; // r11
  LPCGUID v32; // r8
  LPCGUID v33; // r9
  __int16 v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+90h] [rbp-70h] BYREF
  int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int16 *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+C0h] [rbp-40h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  char *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  int *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  int *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  int *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  WCHAR pwsz[2]; // [rsp+140h] [rbp+40h] BYREF
  char v63[252]; // [rsp+144h] [rbp+44h] BYREF

  v10 = a2;
  if ( a7 >= a3 )
  {
    if ( *((_QWORD *)this + 229) )
    {
      Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
      v14 = Scenario;
      if ( Scenario )
      {
        v15 = 0xFFFF;
        if ( *((_WORD *)Scenario + 49) )
        {
          v19 = (v13 - a3) / *((_QWORD *)this + 229);
          v17 = (v13 - a3) % *((_QWORD *)this + 229);
          *((_DWORD *)v14 + 23) += v19;
          LOBYTE(v18) = v19;
          if ( (unsigned int)v19 < 0xFFFF )
            v15 = v19;
          if ( *((_WORD *)v14 + 48) > (unsigned __int16)v15 )
            LOWORD(v15) = *((_WORD *)v14 + 48);
          *((_WORD *)v14 + 48) = v15;
        }
        else
        {
          v16 = (unsigned __int64)(v13 - *((_QWORD *)Scenario + 5)) / *((_QWORD *)this + 229);
          v17 = (unsigned __int64)(v13 - *((_QWORD *)v14 + 5)) % *((_QWORD *)this + 229);
          v18 = (unsigned __int64)(v13 - *((_QWORD *)v14 + 5)) / *((_QWORD *)this + 229);
          if ( (unsigned int)v16 < 0xFFFF )
            v15 = v16;
          *((_WORD *)v14 + 49) = v15;
        }
        ++*((_WORD *)v14 + 44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxqx(v15, v17, v10, a3, v13, v18, a8);
        v20 = (double)((int)a4 - (int)a3);
        if ( (__int64)(a4 - a3) < 0 )
          v20 = v20 + 1.844674407370955e19;
        v21 = (double)(int)a6;
        if ( a6 < 0 )
          v21 = v21 + 1.844674407370955e19;
        if ( v20 > v21 * 1.5 )
        {
          ++*((_WORD *)v14 + 76);
          *(_DWORD *)pwsz = 0;
          memset_0(v63, 0, sizeof(v63));
          ConvertTelemetryInteractionTypeToString(*((_DWORD *)v14 + 17), pwsz);
          QueryPerformanceCounter(&PerformanceCount);
          if ( (unsigned int)hProvider > 4 && (qword_18019E910 & 2) != 0 && (qword_18019E918 & 2) == qword_18019E918 )
          {
            TlgCreateWsz(&pDesc, *((LPCWSTR *)v14 + 1));
            TlgCreateWsz(&v42, *((LPCWSTR *)v14 + 2));
            v22 = *((_DWORD *)v14 + 6);
            v43 = &v37;
            v34 = *((_WORD *)v14 + 32);
            v37 = v22;
            v45 = &v34;
            v44 = v23;
            v46 = v24;
            TlgCreateWsz(&v47, pwsz);
            v50 = &a5;
            v48 = v14;
            v52 = (char *)v14 + 28;
            v49 = 8LL;
            v54 = (char *)v14 + 30;
            v51 = v25;
            v53 = v26;
            v55 = v26;
            v38 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, a3, PerformanceCount.QuadPart);
            v56 = &v38;
            v57 = v27;
            v35 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v28, a4, PerformanceCount.QuadPart);
            v59 = v29;
            v58 = &v35;
            v36 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v30, a3, a4);
            v60 = &v36;
            v61 = v31;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18017CD18, v32, v33, 0xEu, &pData);
          }
        }
      }
    }
  }
}
