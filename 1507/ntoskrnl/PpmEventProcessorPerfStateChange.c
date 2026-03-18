/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x1401576DC
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1401574A0 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     PpmEventPerfState @ 0x140157884 (PpmEventPerfState.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140240638 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PpmEventProcessorPerfStateChange(struct _KPRCB *a1, _DWORD *a2)
{
  _PROC_PERF_CONSTRAINT *PerfConstraint; // rdi
  unsigned int SelectedState; // r15d
  unsigned int SelectedFrequency; // r14d
  unsigned int SelectedPercent; // ecx
  bool v8; // cf
  unsigned int v9; // esi
  unsigned __int64 GroupSetMember; // rcx
  char *v11; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h]
  unsigned int v17; // [rsp+3Ch] [rbp-44h]
  unsigned int Number; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  unsigned __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 *v22; // [rsp+60h] [rbp-20h] BYREF
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]

  PerfConstraint = a1->PowerState.PerfConstraint;
  SelectedState = PerfConstraint->SelectedState;
  SelectedFrequency = PerfConstraint->SelectedFrequency;
  if ( (xmmword_1403D1290 & 0x8000) != 0 && a1 == KeGetCurrentPrcb() )
  {
    SelectedPercent = a2[91];
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( PerfConstraint->SelectedPercent < SelectedPercent )
      SelectedPercent = PerfConstraint->SelectedPercent;
    v8 = SelectedPercent < a2[75];
    HIDWORD(v19) = SelectedFrequency;
    LODWORD(v19) = v8 + 1;
    LODWORD(v20) = PerfConstraint->PreviousFrequency;
    v24 = 0;
    v9 = EtwpActiveSystemLoggers;
    v23 = 24;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v22 = &v19;
    v21 = GroupSetMember;
    while ( _BitScanForward((unsigned int *)&v13, v9) )
    {
      v9 &= v9 - 1;
      v11 = (char *)&EtwpGroupMasks + 32 * v13;
      if ( v11 && (*((_DWORD *)v11 + 4) & 0x8000) != 0 )
        EtwpLogKernelEvent((__int64)&v22, (unsigned __int16)EtwpSystemLogger[2 * v13], 1u, 0x1233u, 4200450);
    }
  }
  if ( WmiPerfStateEventEnabled )
  {
    v16 = 0;
    Number = KeGetPcr()->Prcb.Number;
    v17 = SelectedFrequency;
    v15 = SelectedState;
    PpmFireWmiEvent(&a1->PowerState.WmiDispatchPtr, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v15);
  }
  return PpmEventPerfState(&PPM_ETW_PROCESSOR_PERF_STATE_CHANGE, PerfConstraint->SelectedPercent, a2[92]);
}
