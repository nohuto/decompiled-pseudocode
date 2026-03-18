/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x1401E9110
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmUpdateIdleVeto @ 0x1401E8D70 (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x1401F24DC (PpmEventProcessorVetoRequest.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // ebp
  struct _KPRCB *Prcb; // rsi
  int updated; // ebx
  KIRQL v5; // al
  _PPM_IDLE_STATES *IdleStates; // rdx
  KIRQL v7; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  _DWORD v11[44]; // [rsp+20h] [rbp-D8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  Prcb = (struct _KPRCB *)KeGetPrcb(ProcessorIndexFromNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    IdleStates = Prcb->PowerState.IdleStates;
    v7 = v5;
    if ( IdleStates )
    {
      v9 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v9 < IdleStates->ProcessorIdleCount )
      {
        updated = PpmUpdateIdleVeto(
                    *(_BYTE *)(a1 + 16),
                    *(_DWORD *)(a1 + 12),
                    (__int64)&IdleStates->State[v9].VetoAccounting);
        if ( updated >= 0 )
        {
          LOBYTE(v10) = *(_BYTE *)(a1 + 16);
          PpmEventProcessorVetoRequest(Prcb, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v10);
          if ( Prcb != KeGetCurrentPrcb() )
          {
            KeReleaseSpinLock(&PpmIdleVetoLock, v7);
            memset(&v11[1], 0, 164);
            v11[0] = 1310721;
            KeAddProcessorAffinityEx(v11, ProcessorIndexFromNumber);
            PopExecuteOnTargetProcessors((__int64)v11, (__int64)xHalTimerWatchdogStop, 0LL, 0LL);
            return (unsigned int)updated;
          }
        }
      }
      else
      {
        updated = -1073741811;
      }
    }
    else
    {
      updated = -1073741637;
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, v7);
  }
  return (unsigned int)updated;
}
