/*
 * XREFs of ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023EB9C
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C023EADC (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C021E008 (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C023EEDC (-ProcessGetAppSessionGuid@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C023EF30 (-UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYP.c)
 */

__int64 __fastcall HandleIntObjUsageTelemetry(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r13
  struct tagPROCESSINFO *v12; // rdx
  GUID v13; // xmm7
  struct tagPROCESSINFO *v14; // rdx
  GUID v15; // xmm6
  __int64 v16; // rdi
  __int64 v17; // rbx
  struct tagINTOBJTELEMETRYSTATE *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // xmm1_8
  int v21; // eax
  unsigned __int64 v24; // [rsp+40h] [rbp-A9h]
  GUID v26; // [rsp+58h] [rbp-91h] BYREF
  GUID v27; // [rsp+68h] [rbp-81h] BYREF
  __int64 v28; // [rsp+78h] [rbp-71h]
  int v29; // [rsp+80h] [rbp-69h]
  _BYTE Buf2[80]; // [rsp+88h] [rbp-61h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v26.Data1 = 0LL;
  *(_QWORD *)v26.Data4 = 0LL;
  v9 = 0LL;
  v10 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq.QuadPart;
  *(_QWORD *)&v27.Data1 = 0LL;
  v11 = 0LL;
  v24 = v10 - gmsLastUsageTelemetrySentTime;
  *(_QWORD *)v27.Data4 = 0LL;
  if ( gptiForeground && (v12 = *(struct tagPROCESSINFO **)(gptiForeground + 376LL)) != 0LL )
  {
    v13 = *ProcessGetAppSessionGuid(&v26, v12);
    v26 = v13;
    v9 = *(_QWORD *)v13.Data4;
    v7 = *(_QWORD *)&v13.Data1;
  }
  else
  {
    v13 = v26;
  }
  if ( a2 && (v14 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a2 + 16) + 376LL)) != 0LL )
  {
    v15 = *ProcessGetAppSessionGuid(&v27, v14);
    v27 = v15;
    v11 = *(_QWORD *)v15.Data4;
    v8 = *(_QWORD *)&v15.Data1;
  }
  else
  {
    v15 = v27;
  }
  if ( v24 > 0xEA60 )
    goto LABEL_16;
  v16 = v7 - *(_QWORD *)&gLastForegroundAppSessionGuid.Data1;
  if ( !v16 )
    v16 = v9 - *(_QWORD *)gLastForegroundAppSessionGuid.Data4;
  if ( v16 )
    goto LABEL_16;
  v17 = v8 - *(_QWORD *)&gLastTargetAppSessionGuid.Data1;
  if ( !v17 )
    v17 = v11 - *(_QWORD *)gLastTargetAppSessionGuid.Data4;
  if ( v17 )
  {
LABEL_16:
    memset(Buf2, 0, sizeof(Buf2));
    if ( memcmp(&gIntObjTelemetryState, Buf2, 0x50uLL) )
    {
      if ( gmsInputEndTime < gmsInputStartTime )
      {
        v18 = (struct tagINTOBJTELEMETRYSTATE *)(5LL * (((unsigned __int8)byte_1C03346A4 >> 1) & 1));
        *(&gIntObjTelemetryState + (_QWORD)v18 + 4) = (struct tagINTOBJTELEMETRYSTATE near *)((char *)*(&gIntObjTelemetryState + (_QWORD)v18 + 4)
                                                                                            + v10
                                                                                            - gmsInputStartTime);
      }
      v27 = gLastTargetAppSessionGuid;
      v19 = *(_QWORD *)(a1 + 528);
      v26 = gLastForegroundAppSessionGuid;
      TraceLoggingIntObjUsageSummaryEvent(v18, *(_WORD *)(v19 + 110), *(_WORD *)(v19 + 112), &v26, &v27, v24);
      memset(&gIntObjTelemetryState, 0, 0x50uLL);
    }
    gmsInputStartTime = v10;
    gmsLastUsageTelemetrySentTime = v10;
    gLastForegroundAppSessionGuid = v13;
    gLastTargetAppSessionGuid = v15;
  }
  v20 = *(_QWORD *)(a3 + 16);
  v21 = *(_DWORD *)(a3 + 24);
  v27 = *(GUID *)a3;
  v28 = v20;
  v29 = v21;
  return UpdateIntObjUsage(a2, &v27, a4, a5, v10);
}
