/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x14012FAFC
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14012F920 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     PpmEventPerfState @ 0x14012FBAC (PpmEventPerfState.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x14020B15C (PpmFireWmiEvent.c)
 */

__int64 __fastcall PpmEventProcessorPerfStateChange(struct _KPRCB *a1, _DWORD *a2)
{
  _PROC_PERF_CONSTRAINT *PerfConstraint; // rdi
  unsigned int SelectedState; // r14d
  unsigned int SelectedFrequency; // esi
  unsigned int SelectedPercent; // ecx
  bool v9; // cf
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+38h] [rbp-48h]
  unsigned int v12; // [rsp+3Ch] [rbp-44h]
  unsigned int Number; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  unsigned __int64 GroupSetMember; // [rsp+58h] [rbp-28h]
  __int64 *v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  PerfConstraint = a1->PowerState.PerfConstraint;
  SelectedState = PerfConstraint->SelectedState;
  SelectedFrequency = PerfConstraint->SelectedFrequency;
  if ( (xmmword_1403AA2D0 & 0x8000) != 0 && a1 == KeGetCurrentPrcb() )
  {
    SelectedPercent = a2[93];
    v14 = 0LL;
    v15 = 0LL;
    GroupSetMember = 0LL;
    if ( PerfConstraint->SelectedPercent < SelectedPercent )
      SelectedPercent = PerfConstraint->SelectedPercent;
    v9 = SelectedPercent < a2[77];
    HIDWORD(v14) = SelectedFrequency;
    LODWORD(v14) = v9 + 1;
    LODWORD(v15) = PerfConstraint->PreviousFrequency;
    v19 = 0;
    v18 = 24;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v17 = &v14;
    EtwTraceKernelEvent((int)&v17, 1, 0x80008000, 4659, 4200450);
  }
  if ( WmiPerfStateEventEnabled )
  {
    v11 = 0;
    Number = KeGetPcr()->Prcb.Number;
    v12 = SelectedFrequency;
    v10 = SelectedState;
    PpmFireWmiEvent(&a1->PowerState.WmiDispatchPtr, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v10);
  }
  return PpmEventPerfState(&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE, a1->Number, PerfConstraint->SelectedPercent, a2[94]);
}
