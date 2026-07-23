/*
 * XREFs of PopDisksRegisteredForIdle @ 0x1400F9D90
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  KIRQL v1; // dl
  __int64 i; // rax

  if ( (PopSimulate & 2) != 0 )
    return 1;
  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  for ( i = PopIdleDetectList; (__int64 *)i != &PopIdleDetectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v1);
  return v0;
}
