/*
 * XREFs of PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1401E78A8
 * Callers:
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1401E7930 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void __fastcall PpmIdleCsVetoAccountingResiliencyUpdate(char a1)
{
  unsigned int v1; // ebx
  KIRQL v3; // al
  __int64 v4; // r9
  KIRQL v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx

  v1 = 0;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = PpmPlatformStates;
    v5 = v3;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        v6 = v1;
        LOBYTE(v6) = 2;
        v7 = 384LL * v1;
        v8 = v7 + v4 + 72;
        LOBYTE(v7) = a1;
        PpmIdleCsVetoAccountingUpdateBlock(v8, v6, v7);
        v4 = PpmPlatformStates;
        ++v1;
      }
      while ( v1 < *(_DWORD *)PpmPlatformStates );
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, v5);
  }
}
