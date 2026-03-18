/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140203228
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x140130868 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1402004E8 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140207090 (PopUpdateNonAttributedCpuTimeReference.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(__int64 a1, char a2)
{
  _DWORD *v2; // rax
  __int64 v4; // rbp
  KIRQL v5; // bl
  __int64 result; // rax

  v2 = (_DWORD *)PpmPlatformStates;
  v4 = (unsigned int)a1;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    PpmIdleCsVetoAccountingUpdateBlock(384 * v4 + PpmPlatformStates + 72, 1, a2);
    KeReleaseSpinLock(&PpmIdleVetoLock, v5);
    v2 = (_DWORD *)PpmPlatformStates;
  }
  result = (unsigned int)(*v2 - 1);
  if ( (_DWORD)v4 == (_DWORD)result )
  {
    LOBYTE(a1) = a2 == 0;
    return PopUpdateNonAttributedCpuTimeReference(a1);
  }
  return result;
}
