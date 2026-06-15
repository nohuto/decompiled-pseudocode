/*
 * XREFs of ??$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEBQEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x1800050CC
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180004F8C (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800059DC (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<CPdcTimerActivation,CPdcActivationClient * const,CVADServer * &>(
        _QWORD *a1,
        struct CPdcActivationClient **a2,
        struct CVADServer **a3)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rbx

  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CPdcTimerActivation>::`vftable';
    if ( v7 != (_DWORD *)-16LL )
      CPdcTimerActivation::CPdcTimerActivation((CPdcTimerActivation *)(v7 + 4), *a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
