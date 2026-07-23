/*
 * XREFs of PpmIdleStartCsVetoAccounting @ 0x140200888
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140200314 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void PpmIdleStartCsVetoAccounting()
{
  KIRQL v0; // al
  __int64 v1; // r8
  __int64 v2; // rbx
  KIRQL i; // di
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v1 = PpmPlatformStates;
    v2 = 0LL;
    for ( i = v0; (unsigned int)v2 < *(_DWORD *)PpmPlatformStates; v2 = (unsigned int)(v2 + 1) )
    {
      v4 = 0;
      v5 = v1 + 384 * v2;
      if ( *(_DWORD *)(v5 + 100) )
      {
        do
        {
          v6 = v4++;
          *(_QWORD *)((v6 << 6) + *(_QWORD *)(v5 + 104) + 56) = 0LL;
        }
        while ( v4 < *(_DWORD *)(v5 + 100) );
      }
      PpmIdleCsVetoAccountingUpdateBlock(v5 + 72, 4, 1);
      v1 = PpmPlatformStates;
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, i);
  }
}
