/*
 * XREFs of ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400157A0
 * Callers:
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140015420 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140025C50 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x140035470 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140010644 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140015A70 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     ?Initialize@?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z @ 0x140018A70 (-Initialize@-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(
        CCrossProcessBaseEndpoint *this)
{
  char *v2; // rbp
  char *v3; // r15
  char *v4; // r14
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, char *, char *, char *, __int64); // rsi

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_QWORD *)this + 22) = &CCrossProcessEndpointTraceLogger::`vftable';
  *(GUID *)((char *)this + 184) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 30) = (char *)this + 184;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 25) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  *((_QWORD *)this + 36) = (char *)this + 200;
  *((_WORD *)this + 148) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 35) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  v2 = (char *)this + 312;
  *((_BYTE *)this + 312) = 0;
  *((_QWORD *)this + 40) = 10000LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 5000LL;
  v3 = (char *)this + 344;
  *((_QWORD *)this + 43) = 0LL;
  v4 = (char *)this + 352;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 30000LL;
  *((_QWORD *)this + 46) = 0LL;
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear((char *)this + 280);
  v5 = *((_QWORD *)this + 36);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, char *, char *, char *, __int64))(*(_QWORD *)v5 + 40LL);
    if ( (char *)v6 == (char *)CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize )
      CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize(v5, v2, v3, v4, -2LL);
    else
      v6(v5, v2, v3, v4, -2LL);
  }
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 34) = 1;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return this;
}
