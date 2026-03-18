/*
 * XREFs of PpmUpdateProcessorIdleVeto @ 0x1402366B4
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PpmUpdateIdleVeto @ 0x1402362BC (PpmUpdateIdleVeto.c)
 *     PpmEventProcessorVetoRequest @ 0x140240FF4 (PpmEventProcessorVetoRequest.c)
 */

__int64 __fastcall PpmUpdateProcessorIdleVeto(__int64 a1)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // ebx
  unsigned __int8 v4; // dl
  struct _KPRCB *v5; // rbp
  int updated; // esi
  unsigned __int8 CurrentIrql; // r14
  _PPM_IDLE_STATES *IdleStates; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned int v11; // ecx
  char v12; // r8
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v16[21]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 7) )
    goto LABEL_10;
  v2 = *(_WORD *)(a1 + 4);
  if ( !v2 && !*(_BYTE *)(a1 + 6) )
  {
    v3 = 0;
    goto LABEL_11;
  }
  if ( v2 >= (unsigned __int16)KiMaximumGroups || (v4 = *(_BYTE *)(a1 + 6), v4 >= 0x40u) )
  {
LABEL_10:
    v3 = -1;
  }
  else
  {
    v3 = KiProcessorNumberToIndexMappingTable[64 * v2 + v4];
    if ( !v3 )
      v3 = -1;
  }
LABEL_11:
  if ( v3 >= (unsigned int)KeNumberProcessors_0 )
  {
    v5 = 0LL;
  }
  else
  {
    _mm_lfence();
    v5 = (struct _KPRCB *)KiProcessorBlock[v3];
  }
  if ( v3 == -1 )
    return (unsigned int)-1073741811;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PpmIdleVetoLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdleVetoLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PpmIdleVetoLock);
  }
  IdleStates = v5->PowerState.IdleStates;
  if ( !IdleStates )
  {
    updated = -1073741637;
    goto LABEL_22;
  }
  v9 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v9 >= IdleStates->ProcessorIdleCount )
  {
    updated = -1073741811;
    goto LABEL_22;
  }
  updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 16), *(_DWORD *)(a1 + 12), (__int64)&IdleStates->State[v9].VetoAccounting);
  if ( updated < 0
    || (LOBYTE(v10) = *(_BYTE *)(a1 + 16),
        PpmEventProcessorVetoRequest(v5, *(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 12), v10),
        v5 == KeGetCurrentPrcb()) )
  {
LABEL_22:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
    else
      _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
    __writecr8(CurrentIrql);
    return (unsigned int)updated;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
  else
    _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
  __writecr8(CurrentIrql);
  v15 = 1310721LL;
  memset(v16, 0, 0xA0uLL);
  v11 = KiProcessorIndexToNumberMappingTable[v3];
  v12 = v11 & 0x3F;
  v13 = v11 >> 6;
  if ( (_DWORD)v13 )
    LOWORD(v15) = v13 + 1;
  v16[(unsigned int)v13] = v16[v13] | (1LL << v12);
  PopExecuteOnTargetProcessors((__int64)&v15, (__int64)xHalTimerWatchdogStop, 0LL, 0LL);
  return (unsigned int)updated;
}
