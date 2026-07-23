/*
 * XREFs of PpmPerfRegisterHvPerfStateCounters @ 0x14063DD50
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x1401B2B3C (HvlRegisterPerfFeedbackCounters.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 */

__int64 __fastcall PpmPerfRegisterHvPerfStateCounters(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // r14
  unsigned int v4; // r12d
  _PROCESSOR_NUMBER *v5; // rbp
  unsigned int v6; // r15d
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v8; // esi

  if ( (HvlEnlightenments & 0x400) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_DWORD *)(v2 + 12);
    v5 = *(_PROCESSOR_NUMBER **)(v2 + 392);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v6 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v5);
        v8 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          break;
        v1 = HvlRegisterPerfFeedbackCounters(ProcessorIndexFromNumber);
        if ( v1 < 0 )
          goto LABEL_10;
        v5 += 8;
        v3 += 104LL;
        ++v6;
        *(_DWORD *)(KeGetPrcb(v8) + 24024) = 3;
        if ( v6 >= v4 )
          return (unsigned int)PpmRegisterPerfStates((unsigned int *)v2, 1);
      }
      v1 = -1073741811;
LABEL_10:
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      return (unsigned int)PpmRegisterPerfStates((unsigned int *)v2, 1);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v1;
}
