/*
 * XREFs of ??$make_unique@VCPdcActivationClient@@$$V@std@@YA?AV?$unique_ptr@VCPdcActivationClient@@U?$default_delete@VCPdcActivationClient@@@std@@@0@XZ @ 0x1800312E0
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180030C50 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x18003227C (--0CPdcActivationClient@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CPdcActivationClient **__fastcall std::make_unique<CPdcActivationClient,>(CPdcActivationClient **a1)
{
  CPdcActivationClient *v2; // rbx
  CPdcActivationClient *v3; // rax

  v2 = 0LL;
  v3 = (CPdcActivationClient *)operator new(0x70uLL);
  if ( v3 )
    v2 = CPdcActivationClient::CPdcActivationClient(v3);
  *a1 = v2;
  return a1;
}
