/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x1402006B8
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x140675208 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  KIRQL v7; // bp
  __int64 InterruptTimePrecise; // rax
  __int64 v9; // rdx
  unsigned int v10; // r9d
  __int64 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER v14; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 4) )
    {
      v6 = (unsigned int)dword_140328940;
      if ( dword_140328940 != -1 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v14);
        v9 = 0LL;
        v10 = *(_DWORD *)(384 * v6 + PpmPlatformStates + 100);
        if ( v10 )
        {
          v11 = *(_QWORD *)(384 * v6 + PpmPlatformStates + 104);
          while ( 1 )
          {
            v12 = (unsigned __int64)(unsigned int)v9 << 6;
            v13 = *(_QWORD *)(v12 + v11 + 32);
            if ( v13 )
            {
              if ( InterruptTimePrecise - v13 >= a1 )
                break;
            }
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= v10 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v12 + v11 + 16);
          *a3 = *(_QWORD *)(PpmIdleVetoList + 16 * (v9 + 1));
        }
LABEL_11:
        KeReleaseSpinLock(&PpmIdleVetoLock, v7);
      }
    }
  }
}
