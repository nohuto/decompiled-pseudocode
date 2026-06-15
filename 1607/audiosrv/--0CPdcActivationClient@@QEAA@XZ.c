/*
 * XREFs of ??0CPdcActivationClient@@QEAA@XZ @ 0x18003227C
 * Callers:
 *     ??$make_unique@VCPdcActivationClient@@$$V@std@@YA?AV?$unique_ptr@VCPdcActivationClient@@U?$default_delete@VCPdcActivationClient@@@std@@@0@XZ @ 0x1800312E0 (--$make_unique@VCPdcActivationClient@@$$V@std@@YA-AV-$unique_ptr@VCPdcActivationClient@@U-$defau.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     Pdcv2ActivationClientRegister @ 0x1800315E0 (Pdcv2ActivationClientRegister.c)
 */

// Hidden C++ exception states: #wind=2
CPdcActivationClient *__fastcall CPdcActivationClient::CPdcActivationClient(CPdcActivationClient *this)
{
  int v2; // ecx
  int v3; // eax
  __int128 v5; // [rsp+28h] [rbp-20h] BYREF
  CPdcActivationClient *v6; // [rsp+38h] [rbp-10h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  _Mtx_init_in_situ((CPdcActivationClient *)((char *)this + 32), 2);
  LODWORD(v5) = 1;
  *((_QWORD *)&v5 + 1) = &CPdcActivationClient::PdcTimerActivatorCallback;
  v6 = this;
  v3 = Pdcv2ActivationClientRegister(v2, &v5, this) | 0x10000000;
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 18, v3);
  return this;
}
