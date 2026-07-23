/*
 * XREFs of PpmUpdatePlatformIdleVeto @ 0x140201800
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x1401D3C78 (KeFindFirstSetLeftAffinityEx.c)
 *     PpmUpdateIdleVeto @ 0x1402015C0 (PpmUpdateIdleVeto.c)
 *     PpmEventPlatformVetoRequest @ 0x14020C1F4 (PpmEventPlatformVetoRequest.c)
 */

__int64 __fastcall PpmUpdatePlatformIdleVeto(__int64 a1)
{
  int updated; // ebx
  __int64 v3; // rax
  __int64 v4; // rbp
  KIRQL v5; // si
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  int FirstSetLeftAffinity; // eax
  _DWORD v10[44]; // [rsp+20h] [rbp-C8h] BYREF

  if ( PpmPlatformStates )
  {
    v3 = *(unsigned int *)(a1 + 4);
    if ( (unsigned int)v3 < *(_DWORD *)PpmPlatformStates )
    {
      v4 = PpmPlatformStates + 384 * v3;
      v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      updated = PpmUpdateIdleVeto(*(_BYTE *)(a1 + 12), *(_DWORD *)(a1 + 8), v4 + 72);
      if ( updated < 0
        || (LOBYTE(v6) = *(_BYTE *)(a1 + 12),
            PpmEventPlatformVetoRequest(*(unsigned int *)(a1 + 4), *(unsigned int *)(a1 + 8), v6),
            v7 = (unsigned int)KiProcessorIndexToNumberMappingTable[KeGetCurrentPrcb()->Number],
            ((*(_QWORD *)(v4 + 8 * (v7 >> 6) + 128) >> (v7 & 0x3F)) & 1) != 0) )
      {
        KeReleaseSpinLock(&PpmIdleVetoLock, v5);
      }
      else
      {
        KeReleaseSpinLock(&PpmIdleVetoLock, v5);
        v10[0] = 1310721;
        memset(&v10[1], 0, 0xA4uLL);
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx((__int16 *)(v4 + 120));
        KeAddProcessorAffinityEx(v10, FirstSetLeftAffinity);
        PopExecuteOnTargetProcessors((__int64)v10, (__int64)xHalTimerWatchdogStop, 0LL, 0LL);
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
