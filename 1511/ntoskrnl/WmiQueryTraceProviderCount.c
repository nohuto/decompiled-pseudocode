/*
 * XREFs of WmiQueryTraceProviderCount @ 0x140125904
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x1404B86A4 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
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
