/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x140236478
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
 *     PpmEventPlatformVetoRequest @ 0x140240DAC (PpmEventPlatformVetoRequest.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  int updated; // ebx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int16 v8; // r8
  int v9; // ecx
  unsigned int v10; // ecx
  char v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _DWORD v15[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v16[21]; // [rsp+28h] [rbp-D0h] BYREF
  __int64 retaddr; // [rsp+F8h] [rbp+0h]

  if ( PpmPlatformStates )
  {
    v3 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)v3 < *(_DWORD *)PpmPlatformStates )
    {
      v4 = PpmPlatformStates + 384 * v3;
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
      updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 72);
      if ( updated < 0
        || (LOBYTE(v6) = *(_BYTE *)(a1 + 12),
            PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6),
            v7 = (unsigned int)KiProcessorIndexToNumberMappingTable[KeGetCurrentPrcb()->Number],
            ((*(_QWORD *)(v4 + 8 * (v7 >> 6) + 128) >> (v7 & 0x3F)) & 1) != 0) )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
        else
          _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
        __writecr8(CurrentIrql);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
        else
          _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
        __writecr8(CurrentIrql);
        v15[1] = 0;
        v15[0] = 1310721;
        memset(v16, 0, 0xA0uLL);
        v8 = *(_WORD *)(v4 + 120);
        do
        {
          if ( --v8 < 0 )
          {
            v9 = -1;
            goto LABEL_18;
          }
        }
        while ( !*(_QWORD *)(v4 + 8LL * v8 + 128) );
        _BitScanReverse64(&v13, *(_QWORD *)(v4 + 8LL * v8 + 128));
        v9 = KiProcessorNumberToIndexMappingTable[(unsigned int)(v13 + (v8 << 6))];
LABEL_18:
        v10 = KiProcessorIndexToNumberMappingTable[v9];
        v11 = v10 & 0x3F;
        v12 = v10 >> 6;
        if ( LOWORD(v15[0]) <= (unsigned int)v12 )
          LOWORD(v15[0]) = v12 + 1;
        v16[(unsigned int)v12] = v16[v12] | (1LL << v11);
        PopExecuteOnTargetProcessors((__int64)v15, (__int64)xHalTimerWatchdogStop, 0LL, 0LL);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)updated;
}
