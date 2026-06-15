/*
 * XREFs of ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x1400140C0
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140014024 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 * Callees:
 *     ?Clear@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ @ 0x140014A70 (-Clear@-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXXZ.c)
 *     ?Initialize@?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z @ 0x1400172F0 (-Initialize@-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@UEAAXPEB_NPEB_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CCrossProcessEndpointTraceLogger *__fastcall CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger(
        CCrossProcessEndpointTraceLogger *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, char *, char *, char *); // rax
  char *v5; // r9
  char *v6; // r8
  char *v7; // rdx

  *(_QWORD *)this = &CCrossProcessEndpointTraceLogger::`vftable';
  *(GUID *)((char *)this + 8) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = &g_CrossProcessTelemetryProvider;
  *((_QWORD *)this + 8) = (char *)this + 8;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 3) = &CCrossProcessEndpointTraceLogger::CCrossProcessEndpointGlitchValues::`vftable';
  v2 = (char *)this + 104;
  *((_QWORD *)this + 14) = (char *)this + 24;
  *((_WORD *)this + 60) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 13) = &CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 10000LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 5000LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 30000LL;
  *((_QWORD *)this + 24) = 0LL;
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::Clear((char *)this + 104);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(__int64, char *, char *, char *))(*(_QWORD *)v3 + 40LL);
    v5 = v2 + 72;
    v6 = v2 + 64;
    v7 = v2 + 32;
    if ( (char *)v4 == (char *)CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize )
      CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>::Initialize(v3, v7, v6, v5);
    else
      v4(v3, v7, v6, v5);
  }
  return this;
}
