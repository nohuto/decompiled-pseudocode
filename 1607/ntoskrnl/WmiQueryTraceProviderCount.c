/*
 * XREFs of WmiQueryTraceProviderCount @ 0x140130638
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x140496D14 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  _UNKNOWN **i; // r8

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  for ( i = (_UNKNOWN **)WmipInUseRegEntryHead; i != &WmipInUseRegEntryHead; i = (_UNKNOWN **)*i )
  {
    if ( ((((*((int *)i + 12) >> 4) & 0x400000) != 0) & _bittest((const signed __int32 *)i + 12, 0x1Eu)) != 0 && i[2] )
      ++v0;
  }
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v1);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v0;
}
