/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140203054
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x140130DD8 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140200314 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140206EBC (PopUpdateNonAttributedCpuTimeReference.c)
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
