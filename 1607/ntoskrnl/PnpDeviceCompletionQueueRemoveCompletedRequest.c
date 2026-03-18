/*
 * XREFs of PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400083C4
 * Callers:
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall PnpDeviceCompletionQueueRemoveCompletedRequest(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  _QWORD *v5; // rdx

  KeWaitForSingleObject(&byte_14031F8E8, Executive, 0, 0, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14031F908);
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v5 != a2 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock(&qword_14031F908, v3);
  return a2;
}
